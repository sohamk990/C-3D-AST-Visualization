%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <errno.h> 
#include "tree.h"
#include <string.h>
#define Parse_Suc 1
#define Parse_fail 0
/*struct Root{
    char text[50];
    int id;
    struct Root *children[4];
    int size_of_children;
} ;
struct Root *create_node();
*/
extern struct Root *mtree;  
extern int id;
FILE *yyin;
extern int Parse_status;
//#include "my_lexer.l"    
%}
%union {struct Root *tree;}
%token <tree> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token <tree> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <tree> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <tree> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <tree> XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token <tree> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <tree> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <tree> STRUCT UNION ENUM ELLIPSIS

%token <tree> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%type <tree> primary_expression postfix_expression argument_expression_list unary_expression unary_operator cast_expression multiplicative_expression
%type <tree> additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression
%type <tree> logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator
	
%type <tree> expression constant_expression declaration declaration_specifiers init_declarator_list init_declarator
	
%type <tree> storage_class_specifier type_specifier struct_or_union_specifier struct_or_union struct_declaration_list
%type <tree> struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator enum_specifier
%type <tree> 	enumerator_list enumerator type_qualifier declarator direct_declarator pointer type_qualifier_list
	
%type <tree> parameter_type_list parameter_list parameter_declaration identifier_list type_name abstract_declarator
%type <tree> direct_abstract_declarator initializer initializer_list statement labeled_statement compound_statement
%type <tree> declaration_list statement_list expression_statement selection_statement iteration_statement jump_statement
%type <tree> translation_unit external_declaration function_definition source_code

%start source_code
%%
source_code
	: translation_unit {
		struct Root *arr[]={$1};
		$$=create_node("source_code", 1, 0, arr);
		mtree = $$;
	}
primary_expression
	: IDENTIFIER    {
				struct Root *arr[]={$1};
				$$=create_node("primary_expression", 1, 0, arr);
	}
	| CONSTANT  {
				struct Root *arr[]={$1};
				$$=create_node("primary_expression", 1, 0, arr);
	}
	| STRING_LITERAL {
				struct Root *arr[]={$1};
				$$=create_node("primary_expression", 1, 0, arr);
	}
	| '(' expression ')' {
				struct Root *arr[]={$2};
				$$=create_node("primary_expression", 1, 0, arr);
	}
	;

postfix_expression
	: primary_expression {
				struct Root *arr[]={$1};
				$$=create_node("postfix_expression", 1, 0, arr);
	}
	| postfix_expression '[' expression ']' {
				struct Root *arr[]={$1,$3};
				$$=create_node("postfix_expression", 2, 0, arr);
	}
	| postfix_expression '(' ')' {
				struct Root *arr[]={$1};
				$$=create_node("postfix_expression", 1, 0, arr);
	}
	| postfix_expression '(' argument_expression_list ')' {
				struct Root *arr[]={$1,$3};
				$$=create_node("postfix_expression", 2, 0, arr);
	}
	| postfix_expression '.' IDENTIFIER {
				struct Root *arr[]={$1,$3};
				$$=create_node("postfix_expression", 2, 0, arr);
	}
	| postfix_expression PTR_OP IDENTIFIER {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("postfix_expression", 3, 0, arr);
	}
	| postfix_expression INC_OP {
				struct Root *arr[]={$1,$2};
				$$=create_node("postfix_expression", 2, 0, arr);
	}
	| postfix_expression DEC_OP {
				struct Root *arr[]={$1,$2};
				$$=create_node("postfix_expression", 2, 0, arr);
	}
	;

argument_expression_list
	: assignment_expression {
				struct Root *arr[]={$1};
				$$=create_node("assignment_expression_list", 1, 0, arr);
	}
	| argument_expression_list ',' assignment_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("argument_assignment_list", 2, 0, arr);
	}
	;

unary_expression
	: postfix_expression {
				struct Root *arr[]={$1};
				$$=create_node("unary_expression", 1, 0, arr);
	}
	| INC_OP unary_expression {
				struct Root *arr[]={$1,$2};
				$$=create_node("unary_expression", 2, 0, arr);
	}
	| DEC_OP unary_expression {
				struct Root *arr[]={$1,$2};
				$$=create_node("unary_expression", 2, 0, arr);
	}
	| unary_operator cast_expression {
				struct Root *arr[]={$1,$2};
				$$=create_node("unary_expression", 2, 0, arr);
	}
	| SIZEOF unary_expression {
				struct Root *arr[]={$1,$2};
				$$=create_node("unary_expression", 2, 0, arr);
	}
	| SIZEOF '(' type_name ')' {
				struct Root *arr[]={$1,$3};
				$$=create_node("unary_expression", 2, 0, arr);
	}
	;

unary_operator
	: '&' {
				$$=create_node("unary_operator = &", 0, 0, NULL);
	}
	| '*' {
				$$=create_node("unary_operator = *", 0, 0, NULL);
	}
	| '+' {
				$$=create_node("unary_expression = +", 0, 0, NULL);
	}
	| '-' {
				$$=create_node("unary_expression = -", 0, 0, NULL);
	}
	| '~' {
				$$=create_node("unary_expression = ~", 0, 0, NULL);
	}
	| '!' {
				$$=create_node("unary_expression = !", 0, 0, NULL);
	}
	;

cast_expression
	: unary_expression {
				struct Root *arr[]={$1};
				$$=create_node("cast_expression", 1, 0, arr);
	}
	| '(' type_name ')' cast_expression {
				struct Root *arr[]={$2,$4};
				$$=create_node("cast_expression", 2, 0, arr);
	}
	;

multiplicative_expression
	: cast_expression {
				struct Root *arr[]={$1};
				$$=create_node("multiplicative_expression", 1, 0, arr);
	}
	| multiplicative_expression '*' cast_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("multiplicative_expression *", 2, 0, arr);
	}
	| multiplicative_expression '/' cast_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("multiplicative_expression /", 2, 0, arr);
	}
	| multiplicative_expression '%' cast_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("multiplicative_expression %", 2, 0, arr);
	}
	;

additive_expression
	: multiplicative_expression {
				struct Root *arr[]={$1};
				$$=create_node("additive_expression", 1, 0, arr);
	}
	| additive_expression '+' multiplicative_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("additive_expression +", 2, 0, arr);
	}
	| additive_expression '-' multiplicative_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("additive_expression -", 2, 0, arr);
	}
	;

shift_expression
	: additive_expression {
				struct Root *arr[]={$1};
				$$=create_node("shift_expression", 1, 0, arr);
	}
	| shift_expression LEFT_OP additive_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("shift_expression", 3, 0, arr);
	}
	| shift_expression RIGHT_OP additive_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("shift_expression", 3, 0, arr);
	}
	;

relational_expression
	: shift_expression {
				struct Root *arr[]={$1};
				$$=create_node("relational_expression", 1, 0, arr);
	}
	| relational_expression '<' shift_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("relational_expression <", 2, 0, arr);
	}
	| relational_expression '>' shift_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("relational_expression >", 2, 0, arr);
	}
 	| relational_expression LE_OP shift_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("relational_expression", 3, 0, arr);
	}
	| relational_expression GE_OP shift_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("relational_expression", 3, 0, arr);
	}
	;

equality_expression
	: relational_expression {
				struct Root *arr[]={$1};
				$$=create_node("equality_expression", 1, 0, arr);
	}
	| equality_expression EQ_OP relational_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("equality_expression", 3, 0, arr);
	}
	| equality_expression NE_OP relational_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("equality_expression", 3, 0, arr);
	}
	;

and_expression
	: equality_expression {
				struct Root *arr[]={$1};
				$$=create_node("and_expression", 1, 0, arr);
	}
	| and_expression '&' equality_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("and_expression", 2, 0, arr);
	}
	;

exclusive_or_expression
	: and_expression {
				struct Root *arr[]={$1};
				$$=create_node("exclusive_or_expression", 1, 0, arr);
	}
	| exclusive_or_expression '^' and_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("exclusive_or_expression", 2, 0, arr);
	}
	;

inclusive_or_expression
	: exclusive_or_expression {
				struct Root *arr[]={$1};
				$$=create_node("inclusive_or_expression", 1, 0, arr);
	}
	| inclusive_or_expression '|' exclusive_or_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("inclusive_or_exclusive", 2, 0, arr);
	}
	;

logical_and_expression
	: inclusive_or_expression {
				struct Root *arr[]={$1};
				$$=create_node("logical_and_expression", 1, 0, arr);
	}
	| logical_and_expression AND_OP inclusive_or_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("logical_and_expression", 3, 0, arr);
	}
	;

logical_or_expression
	: logical_and_expression {
				struct Root *arr[]={$1};
				$$=create_node("logical_or_expression", 1, 0, arr);
	}
	| logical_or_expression OR_OP logical_and_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("logical_or_expression", 3, 0, arr);
	}
	;

conditional_expression
	: logical_or_expression {
				struct Root *arr[]={$1};
				$$=create_node("conditional_expression", 1, 0, arr);
	}
	| logical_or_expression '?' expression ':' conditional_expression {
				struct Root *arr[]={$1,$3,$5};
				$$=create_node("conditional_expression", 3, 0, arr);
	}
	;

assignment_expression
	: conditional_expression {
				struct Root *arr[]={$1};
				$$=create_node("assignment_expression", 1, 0, arr);
	}
	| unary_expression assignment_operator assignment_expression {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("assignment_expression", 3, 0, arr);
	}
	;

assignment_operator
	: '=' {
				$$=create_node("=", 0, 0, NULL);
	}
	| MUL_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| DIV_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| MOD_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| ADD_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| SUB_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| LEFT_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| RIGHT_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| AND_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| XOR_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	| OR_ASSIGN {
				struct Root *arr[]={$1};
				$$=create_node("assignment_operator", 1, 0, arr);
	}
	;

expression
	: assignment_expression	{
		struct Root *arr[]={$1};
		$$=create_node("expression", 1, 0, arr);
	}
	| expression ',' assignment_expression {
		struct Root *arr[]={$1, $3};
		$$ = create_node("expression", 2, 0, arr);
	}
	;

constant_expression
	: conditional_expression {
				struct Root *arr[]={$1};
				$$=create_node("constant_expression", 1, 0, arr);
	}
	;

declaration
	: declaration_specifiers ';' {
				struct Root *arr[]={$1};
				$$=create_node("declaration", 1, 0, arr);
	}
	| declaration_specifiers init_declarator_list ';' {
				struct Root *arr[]={$1,$2};
				$$=create_node("declaration", 2, 0, arr);
	}
	;

declaration_specifiers
	: storage_class_specifier {
				struct Root *arr[]={$1};
				$$=create_node("declaration_specifiers", 1, 0, arr);
	}
	| storage_class_specifier declaration_specifiers {
				struct Root *arr[]={$1,$2};
				$$=create_node("declaration_specifiers", 2, 0, arr);
	}
	| type_specifier {
				struct Root *arr[]={$1};
				$$=create_node("declaration_specifiers", 1, 0, arr);
	}
	| type_specifier declaration_specifiers {
				struct Root *arr[]={$1,$2};
				$$=create_node("declaration_specifiers", 2, 0, arr);
	}
	| type_qualifier {
				struct Root *arr[]={$1};
				$$=create_node("declaration_specifiers", 1, 0, arr);
	}
	| type_qualifier declaration_specifiers {
				struct Root *arr[]={$1,$2};
				$$=create_node("tdeclaration_specifiers", 2, 0, arr);
	}
	;

init_declarator_list
	: init_declarator {
				struct Root *arr[]={$1};
				$$=create_node("init_declarator_list", 1, 0, arr);
	}
	| init_declarator_list ',' init_declarator {
				struct Root *arr[]={$1,$3};
				$$=create_node("init_declarator_list", 2, 0, arr);
	}
	;

init_declarator
	: declarator {
				struct Root *arr[]={$1};
				$$=create_node("init_declarator", 1, 0, arr);
	}
	| declarator '=' initializer {
				struct Root *arr[]={$1,$3};
				$$=create_node("init_declarator", 2, 0, arr);
	}
	;

storage_class_specifier
	: TYPEDEF {
				struct Root *arr[]={$1};
				$$=create_node("storage_class_specifier", 1, 0, arr);
	}
	| EXTERN {
				struct Root *arr[]={$1};
				$$=create_node("storage_class_specifier", 1, 0, arr);
	}
	| STATIC {
				struct Root *arr[]={$1};
				$$=create_node("storage_class_specifier", 1, 0, arr);
	}
	| AUTO {
				struct Root *arr[]={$1};
				$$=create_node("storage_class_specifier", 1, 0, arr);
	}
	| REGISTER {
				struct Root *arr[]={$1};
				$$=create_node("storage_class_specifier", 1, 0, arr);
	}
	;

type_specifier
	: VOID {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| CHAR {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| SHORT {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| INT {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| LONG {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| FLOAT {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| DOUBLE {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| SIGNED {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| UNSIGNED {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| struct_or_union_specifier {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| enum_specifier {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	| TYPE_NAME {
				struct Root *arr[]={$1};
				$$=create_node("type_specifier", 1, 0, arr);
	}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}' {
				struct Root *arr[]={$1,$2,$4};
				$$=create_node("struct_or_union_specifier", 3, 0, arr);
	}
	| struct_or_union '{' struct_declaration_list '}' {
				struct Root *arr[]={$1,$3};
				$$=create_node("struct_or_union_specifier", 2, 0, arr);
	}
	| struct_or_union IDENTIFIER {
				struct Root *arr[]={$1,$2};
				$$=create_node("struct_or_union_specifier", 2, 0, arr);
	}
	;

struct_or_union
	: STRUCT {
				struct Root *arr[]={$1};
				$$=create_node("struct_or_union", 1, 0, arr);
	}
	| UNION {
				struct Root *arr[]={$1};
				$$=create_node("struct_or_union", 1, 0, arr);
	}
	;

struct_declaration_list
	: struct_declaration {
				struct Root *arr[]={$1};
				$$=create_node("struct_declaration_list", 1, 0, arr);
	}
	| struct_declaration_list struct_declaration {
				struct Root *arr[]={$1,$2};
				$$=create_node("struct_declaration_list", 2, 0, arr);
	}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';' {
				struct Root *arr[]={$1,$2};
				$$=create_node("struct_declaration", 2, 0, arr);
	}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {
				struct Root *arr[]={$1,$2};
				$$=create_node("specifier_qualifier_list", 2, 0, arr);
	}
	| type_specifier {
				struct Root *arr[]={$1};
				$$=create_node("specifier_qualifier_list", 1, 0, arr);
	}
	| type_qualifier specifier_qualifier_list {
				struct Root *arr[]={$1,$2};
				$$=create_node("specifier_qualifier_list", 2, 0, arr);
	}
	| type_qualifier {
				struct Root *arr[]={$1};
				$$=create_node("specifier_qualifier_list", 1, 0, arr);
	}
	;

struct_declarator_list
	: struct_declarator {
				struct Root *arr[]={$1};
				$$=create_node("struct_declarator_list", 1, 0, arr);
	}
	| struct_declarator_list ',' struct_declarator {
				struct Root *arr[]={$1,$3};
				$$=create_node("struct_declarator_list", 2, 0, arr);
	}
	;

struct_declarator
	: declarator {
				struct Root *arr[]={$1};
				$$=create_node("struct_declarator", 1, 0, arr);
	}
	| ':' constant_expression {
				struct Root *arr[]={$2};
				$$=create_node("struct_declarator", 1, 0, arr);
	}
	| declarator ':' constant_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("struct_declarator", 2, 0, arr);
	}
	;

enum_specifier
	: ENUM '{' enumerator_list '}' {
				struct Root *arr[]={$1,$3};
				$$=create_node("enum_specifier", 2, 0, arr);
	}
	| ENUM IDENTIFIER '{' enumerator_list '}' {
				struct Root *arr[]={$1,$2,$4};
				$$=create_node("enum_specifier", 3, 0, arr);
	}
	| ENUM IDENTIFIER {
				struct Root *arr[]={$1,$2};
				$$=create_node("enum_specifier", 2, 0, arr);
	}
	;

enumerator_list
	: enumerator {
				struct Root *arr[]={$1};
				$$=create_node("enumerator_list", 1, 0, arr);
	}
	| enumerator_list ',' enumerator {
				struct Root *arr[]={$1,$3};
				$$=create_node("enumerator_list", 3, 0, arr);
	}
	;

enumerator
	: IDENTIFIER {
				struct Root *arr[]={$1};
				$$=create_node("enumerator", 1, 0, arr);
	}
	| IDENTIFIER '=' constant_expression {
				struct Root *arr[]={$1,$3};
				$$=create_node("enumerator", 2, 0, arr);
	}
	;

type_qualifier
	: CONST {
				struct Root *arr[]={$1};
				$$=create_node("type_qualifier", 1, 0, arr);
	}
	| VOLATILE {
				struct Root *arr[]={$1};
				$$=create_node("type_qualifier", 1, 0, arr);
	}
	;

declarator
	: pointer direct_declarator {
				struct Root *arr[]={$1,$2};
				$$=create_node("declarator", 2, 0, arr);
	}
	| direct_declarator {
				struct Root *arr[]={$1};
				$$=create_node("declarator", 1, 0, arr);
	}
	;

direct_declarator
	: IDENTIFIER {
				struct Root *arr[]={$1};
				$$=create_node("direct_declarator", 1, 0, arr);
	}
	| '(' declarator ')' {
				struct Root *arr[]={$2};
				$$=create_node("direct_declarator", 1, 0, arr);
	}
	| direct_declarator '[' constant_expression ']' {
				struct Root *arr[]={$1,$3};
				$$=create_node("direct_declarator", 2, 0, arr);
	}
	| direct_declarator '[' ']' {
				struct Root *arr[]={$1};
				$$=create_node("direct_declarator", 1, 0, arr);
	}
	| direct_declarator '(' parameter_type_list ')' {
				struct Root *arr[]={$1,$3};
				$$=create_node("direct_declarator", 2, 0, arr);
	}
	| direct_declarator '(' identifier_list ')' {
				struct Root *arr[]={$1,$3};
				$$=create_node("direct_declarator", 2, 0, arr);
	}
	| direct_declarator '(' ')' {
				struct Root *arr[]={$1};
				$$=create_node("direct_declarator", 1, 0, arr);
	}
	;

pointer
	: '*' {
				$$=create_node("pointer", 0, 0, NULL);
	}
	| '*' type_qualifier_list {
				struct Root *arr[]={$2};
				$$=create_node("pointer", 1, 0, arr);
	}
	| '*' pointer {
				struct Root *arr[]={$2};
				$$=create_node("pointer", 1, 0, arr);
	}
	| '*' type_qualifier_list pointer {
				struct Root *arr[]={$2, $3};
				$$=create_node("pointer", 2, 0, arr);
	}
	;

type_qualifier_list
	: type_qualifier {
				struct Root *arr[]={$1};
				$$=create_node("type_qualifier_list", 1, 0, arr);
	}
	| type_qualifier_list type_qualifier {
				struct Root *arr[]={$1,$2};
				$$=create_node("type_qualifier_list", 2, 0, arr);
	}
	;


parameter_type_list
	: parameter_list {
				struct Root *arr[]={$1};
				$$=create_node("parameter_type_list", 1, 0, arr);
	}
	| parameter_list ',' ELLIPSIS {
				struct Root *arr[]={$1,$3};
				$$=create_node("parameter_type_list", 2, 0, arr);
	}
	;

parameter_list
	: parameter_declaration {
				struct Root *arr[]={$1};
				$$=create_node("parameter_list", 1, 0, arr);
	}
	| parameter_list ',' parameter_declaration {
				struct Root *arr[]={$1,$3};
				$$=create_node("parameter_list", 2, 0, arr);
	}
	;

parameter_declaration
	: declaration_specifiers declarator {
				struct Root *arr[]={$1,$2};
				$$=create_node("parameter_declaration", 2, 0, arr);
	}
	| declaration_specifiers abstract_declarator {
				struct Root *arr[]={$1,$2};
				$$=create_node("parameter_declaration", 2, 0, arr);
	}
	| declaration_specifiers {
				struct Root *arr[]={$1};
				$$=create_node("parameter_declaration", 1, 0, arr);
	}
	;

identifier_list
	: IDENTIFIER {
				struct Root *arr[]={$1};
				$$=create_node("identifier_list", 1, 0, arr);
	}
	| identifier_list ',' IDENTIFIER {
				struct Root *arr[]={$1,$3};
				$$=create_node("identifier_list", 2, 0, arr);
	}
	;

type_name
	: specifier_qualifier_list {
				struct Root *arr[]={$1};
				$$=create_node("type_name", 1, 0, arr);
	}
	| specifier_qualifier_list abstract_declarator {
				struct Root *arr[]={$1,$2};
				$$=create_node("type_name", 2, 0, arr);
	}
	;

abstract_declarator
	: pointer {
				struct Root *arr[]={$1};
				$$=create_node("abstract_declarator", 1, 0, arr);
	}
	| direct_abstract_declarator {
				struct Root *arr[]={$1};
				$$=create_node("abstract_declarator", 1, 0, arr);
	}
	| pointer direct_abstract_declarator {
				struct Root *arr[]={$1,$2};
				$$=create_node("abstract_declarator", 2, 0, arr);
	}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' {
				struct Root *arr[]={$2};
				$$=create_node("direct_abstract_declarator", 1, 0, arr);
	}
	| '[' ']' {
				$$=create_node("direct_abstract_declarator", 0, 0, NULL);
	}

	| '[' constant_expression ']' {
				struct Root *arr[]={$2};
				$$=create_node("direct_abstract_declarator", 1, 0, arr);
	}
	| direct_abstract_declarator '[' ']' {
				struct Root *arr[]={$1};
				$$=create_node("direct_abstract_declarator", 1, 0, arr);
	}
	| direct_abstract_declarator '[' constant_expression ']' {
				struct Root *arr[]={$1,$3};
				$$=create_node("direct_abstract_declarator", 2, 0, arr);
	}
	| '(' ')'{
				$$=create_node("direct_abstract_declarator", 0, 0, NULL);
	}

	| '(' parameter_type_list ')' {
				struct Root *arr[]={$2};
				$$=create_node("direct_abstract_declarator", 1, 0, arr);
	}
	| direct_abstract_declarator '(' ')' {
				struct Root *arr[]={$1};
				$$=create_node("direct_abstract_declarator", 1, 0, arr);
	}
	| direct_abstract_declarator '(' parameter_type_list ')' {
				struct Root *arr[]={$1,$3};
				$$=create_node("direct_abstract_declarator", 2, 0, arr);
	}
	;

initializer
	: assignment_expression {
				struct Root *arr[]={$1};
				$$=create_node("initializer", 1, 0, arr);
	}
	| '{' initializer_list '}' {
				struct Root *arr[]={$2};
				$$=create_node("initializer", 1, 0, arr);
	}
	| '{' initializer_list ',' '}' {
				struct Root *arr[]={$2};
				$$=create_node("initializer", 1, 0, arr);
	}
	;

initializer_list
	: initializer {
				struct Root *arr[]={$1};
				$$=create_node("initializer_list", 1, 0, arr);
	}
	| initializer_list ',' initializer {
				struct Root *arr[]={$1,$3};
				$$=create_node("initializer_list", 2, 0, arr);
	}
	;

statement
	: labeled_statement {
				struct Root *arr[]={$1};
				$$=create_node("statement", 1, 0, arr);
	}
	| compound_statement {
				struct Root *arr[]={$1};
				$$=create_node("statement", 1, 0, arr);
	}
	| expression_statement {
				struct Root *arr[]={$1};
				$$=create_node("statement", 1, 0, arr);
	}
	| selection_statement {
				struct Root *arr[]={$1};
				$$=create_node("statement", 1, 0, arr);
	}
	| iteration_statement {
				struct Root *arr[]={$1};
				$$=create_node("statement", 1, 0, arr);
	}
	| jump_statement {
				struct Root *arr[]={$1};
				$$=create_node("statement", 1, 0, arr);
	}
	;

labeled_statement
	: IDENTIFIER ':' statement {
				struct Root *arr[]={$1,$3};
				$$=create_node("labeled_statement", 2, 0, arr);
	}
	| CASE constant_expression ':' statement {
				struct Root *arr[]={$1,$2,$4};
				$$=create_node("labeled_statement", 3, 0, arr);
	}
	| DEFAULT ':' statement {
				struct Root *arr[]={$1,$3};
				$$=create_node("labeled_statement", 2, 0, arr);
	}
	;

compound_statement
	: '{' '}'  {
				$$=create_node("compound_statement", 0, 0, NULL);
	}

	| '{' statement_list '}' {
				struct Root *arr[]={$2};
				$$=create_node("compound_statement", 1, 0, arr);
	}
	| '{' declaration_list '}' {
				struct Root *arr[]={$2};
				$$=create_node("compound_statement", 1, 0, arr);
	}
	| '{' declaration_list statement_list '}' {
				struct Root *arr[]={$2,$3};
				$$=create_node("compound_statement", 2, 0, arr);
	}
	;

declaration_list
	: declaration {
				struct Root *arr[]={$1};
				$$=create_node("declaration_list", 1, 0, arr);
	}
	| declaration_list declaration {
				struct Root *arr[]={$1,$2};
				$$=create_node("declaration_list", 2, 0, arr);
	}
	;

statement_list
	: statement {
				struct Root *arr[]={$1};
				$$=create_node("statement_list", 1, 0, arr);
	}
	| statement_list statement {
				struct Root *arr[]={$1,$2};
				$$=create_node("statement_list", 2, 0, arr);
	}
	;

expression_statement
	: ';' {
				$$=create_node("expression_statement", 0, 0, NULL);
	}

	| expression ';' {
				struct Root *arr[]={$1};
				$$=create_node("expression_statement", 1, 0, arr);
	}
	;

selection_statement
	: IF '(' expression ')' statement {
				struct Root *arr[]={$1,$3,$5};
				$$=create_node("selection_statement", 3, 0, arr);
	}
	| IF '(' expression ')' statement ELSE statement {
				struct Root *arr[]={$1,$3,$5,$6,$7};
				$$=create_node("selection_statement", 5, 0, arr);
	}
	| SWITCH '(' expression ')' statement {
				struct Root *arr[]={$1,$3,$5};
				$$=create_node("selection_statement", 3, 0, arr);
	}
	;

iteration_statement
	: WHILE '(' expression ')' statement {
				struct Root *arr[]={$1,$3,$5};
				$$=create_node("iteration_statement", 3, 0, arr);
	}
	| DO statement WHILE '(' expression ')' ';' {
				struct Root *arr[]={$1,$2,$3,$5};
				$$=create_node("iteration_statement", 3, 0, arr);
	}
	| FOR '(' expression_statement expression_statement ')' statement {
				struct Root *arr[]={$1,$3,$4,$6};
				$$=create_node("iteration_statement", 4, 0, arr);
	}
	| FOR '(' expression_statement expression_statement expression ')' statement {
				struct Root *arr[]={$1,$3,$4,$5,$7};
				$$=create_node("iteration_statement", 5, 0, arr);
	}
	;

jump_statement
	: GOTO IDENTIFIER ';' {
				struct Root *arr[]={$1,$2};
				$$=create_node("jump_statement", 2, 0, arr);
	}
	| CONTINUE ';' {
				struct Root *arr[]={$1};
				$$=create_node("jump_statement", 1, 0, arr);
	}
	| BREAK ';' {
				struct Root *arr[]={$1};
				$$=create_node("jump_statement", 1, 0, arr);
	}
	| RETURN ';' {
				struct Root *arr[]={$1};
				$$=create_node("jump_statement", 1, 0, arr);
	}
	| RETURN expression ';' {
				struct Root *arr[]={$1};
				$$=create_node("jump_statement", 1, 0, arr);
	}
	;

translation_unit
	: external_declaration {
				struct Root *arr[]={$1};
				$$=create_node("translation_unit", 1, 0, arr);
	}
	| translation_unit external_declaration {
				struct Root *arr[]={$1,$2};
				$$=create_node("translation_unit", 2, 0, arr);
	}
	;

external_declaration
	: function_definition {
				struct Root *arr[]={$1};
				$$=create_node("external_declaration", 1, 0, arr);
	}
	| declaration {
				struct Root *arr[]={$1};
				$$=create_node("external_declaration", 1, 0, arr);
	}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("function_definition", 3, 0, arr);
	}
	| declaration_specifiers declarator compound_statement {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("function_definition", 3, 0, arr);
	}
	| declarator declaration_list compound_statement {
				struct Root *arr[]={$1,$2,$3};
				$$=create_node("function_definition", 3, 0, arr);
	}
	| declarator compound_statement {
				struct Root *arr[]={$1,$2};
				$$=create_node("function_definition", 2, 0, arr);
	}
	;

%%
 
  
void yyerror(char * s)
/* yacc error handler */
{ 

  fprintf (stderr, "%s\n", s);
}
/*struct Root* create_node(char *txt)
{
    struct Root* ans=(struct Root*)(malloc(sizeof(struct Root*)));
    for(int i=0;i<strlen(txt);i++)
        ans->text[i]=txt[i];
    return ans;
}
*/ 
