/* Definition Section has one variable which can be accessed inside yylex() and main() */
%{
//int count = 0;
#include "y.tab.h"
#include "tree.h"
extern int Parse_status;
extern int id;
extern struct Root* create_node();
void count();
void comment();
int check_type();
%}
D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
yylval.tree=create_node(yytext, 0, 0, NULL);
/*** Rule Section has three rules, first rule matches with capital letters, second rulematches with any character except newline and third rule does not take input after the enter***/
%%
"/*"			{ comment(); }
"auto"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(AUTO); }
"break"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(BREAK); }
"case"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CASE); }
"char"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CHAR); }
"const"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONST); }
"continue"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONTINUE); }
"default"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(DEFAULT); }
"do"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(DO); }
"double"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(DOUBLE); }
"else"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(ELSE); }
"enum"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(ENUM); }
"extern"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(EXTERN); }
"float"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(FLOAT); }
"for"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(FOR); }
"goto"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(GOTO); }
"if"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(IF); }
"int"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(INT); }
"long"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(LONG); }
"register"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(REGISTER); }
"return"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(RETURN); }
"short"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(SHORT); }
"signed"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(SIGNED); }
"sizeof"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(SIZEOF); }
"static"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(STATIC); }
"struct"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(STRUCT); }
"switch"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(SWITCH); }
"typedef"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(TYPEDEF); }
"union"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(UNION); }
"unsigned"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(UNSIGNED); }
"void"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(VOID); }
"volatile"		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(VOLATILE); }
"while"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(WHILE); }

{L}({L}|{D})*		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(check_type()); }

0[xX]{H}+{IS}?		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONSTANT); }
0{D}+{IS}?		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONSTANT); }
{D}+{IS}?		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONSTANT); }

{D}+{E}{FS}?		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(STRING_LITERAL); }

"..."			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(ELLIPSIS); }
">>="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(RIGHT_ASSIGN); }
"<<="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(LEFT_ASSIGN); }
"+="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(ADD_ASSIGN); }
"-="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(SUB_ASSIGN); }
"*="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(MUL_ASSIGN); }
"/="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(DIV_ASSIGN); }
"%="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(MOD_ASSIGN); }
"&="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(AND_ASSIGN); }
"^="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(XOR_ASSIGN); }
"|="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(OR_ASSIGN); }
">>"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(RIGHT_OP); }
"<<"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(LEFT_OP); }
"++"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(INC_OP); }
"--"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(DEC_OP); }
"->"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(PTR_OP); }
"&&"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(AND_OP); }
"||"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(OR_OP); }
"<="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(LE_OP); }
">="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(GE_OP); }
"=="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(EQ_OP); }
"!="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(NE_OP); }
";"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(';'); }
("{"|"<%")		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('{'); }
("}"|"%>")		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('}'); }
","			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(','); }
":"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(':'); }
"="			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('='); }
"("			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('('); }
")"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(')'); }
("["|"<:")		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('['); }
("]"|":>")		{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return(']'); }
"."			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('.'); }
"&"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('&'); }
"!"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('!'); }
"~"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('~'); }
"-"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('-'); }
"+"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('+'); }
"*"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('*'); }
"/"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('/'); }
"%"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('%'); }
"<"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('<'); }
">"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('>'); }
"^"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('^'); }
"|"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('|'); }
"?"			{ count(); yylval.tree=create_node(yytext, 0, 0, NULL);return('?'); }

[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%
  
/*** Code Section prints the number of
capital letter present in the given input***/
int yywrap(){}
void count(){
    ;
}
void comment()
{
    ;
}
int check_type()
{
    return IDENTIFIER; 
}