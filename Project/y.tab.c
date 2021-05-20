/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "graph_parse.y"

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

#line 96 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    CASE = 304,
    DEFAULT = 305,
    IF = 306,
    ELSE = 307,
    SWITCH = 308,
    WHILE = 309,
    DO = 310,
    FOR = 311,
    GOTO = 312,
    CONTINUE = 313,
    BREAK = 314,
    RETURN = 315
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CHAR 289
#define SHORT 290
#define INT 291
#define LONG 292
#define SIGNED 293
#define UNSIGNED 294
#define FLOAT 295
#define DOUBLE 296
#define CONST 297
#define VOLATILE 298
#define VOID 299
#define STRUCT 300
#define UNION 301
#define ENUM 302
#define ELLIPSIS 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "graph_parse.y"
struct Root *tree;

#line 271 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

#define YYUNDEFTOK  2
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      61,    62,    68,    69,    66,    70,    65,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    78,    84,    71,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    62,    66,    70,    74,    81,    85,    89,
      93,    97,   101,   105,   109,   116,   120,   127,   131,   135,
     139,   143,   147,   154,   157,   160,   163,   166,   169,   175,
     179,   186,   190,   194,   198,   205,   209,   213,   220,   224,
     228,   235,   239,   243,   247,   251,   258,   262,   266,   273,
     277,   284,   288,   295,   299,   306,   310,   317,   321,   328,
     332,   339,   343,   350,   353,   357,   361,   365,   369,   373,
     377,   381,   385,   389,   396,   400,   407,   414,   418,   425,
     429,   433,   437,   441,   445,   452,   456,   463,   467,   474,
     478,   482,   486,   490,   497,   501,   505,   509,   513,   517,
     521,   525,   529,   533,   537,   541,   548,   552,   556,   563,
     567,   574,   578,   585,   592,   596,   600,   604,   611,   615,
     622,   626,   630,   637,   641,   645,   652,   656,   663,   667,
     674,   678,   685,   689,   696,   700,   704,   708,   712,   716,
     720,   727,   730,   734,   738,   745,   749,   757,   761,   768,
     772,   779,   783,   787,   794,   798,   805,   809,   816,   820,
     824,   831,   835,   839,   843,   847,   851,   855,   859,   863,
     870,   874,   878,   885,   889,   896,   900,   904,   908,   912,
     916,   923,   927,   931,   938,   942,   946,   950,   957,   961,
     968,   972,   979,   983,   990,   994,   998,  1005,  1009,  1013,
    1017,  1024,  1028,  1032,  1036,  1040,  1047,  1051,  1058,  1062,
    1069,  1073,  1077,  1081
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "source_code", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    40,    41,    91,    93,    46,    44,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF (-223)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     878,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,    12,    19,    76,    46,  -223,    32,  1163,  1163,  -223,
      15,  -223,  1163,  1010,   -32,    56,   878,  -223,  -223,   -31,
      75,    71,  -223,  -223,    76,  -223,  -223,   -40,  -223,   990,
    -223,  -223,    52,   964,  -223,   277,  -223,    32,  -223,  1010,
     407,   593,   -32,  -223,    75,    65,    26,  -223,  -223,  -223,
    -223,    19,  -223,   523,  -223,  1010,   964,   964,   913,  -223,
      62,   964,    78,  -223,  -223,   762,   774,   774,   787,   107,
     147,   159,   166,   489,   186,   259,   195,   197,   559,   647,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   183,
     273,   787,  -223,   158,    36,   185,    49,   196,   207,   198,
     200,   268,    -7,  -223,  -223,    25,  -223,  -223,  -223,   347,
     417,  -223,  -223,  -223,  -223,   220,  -223,  -223,  -223,  -223,
      13,   240,   237,  -223,    93,  -223,  -223,  -223,  -223,   261,
      54,   787,    75,  -223,  -223,   523,  -223,  -223,  -223,   933,
    -223,  -223,  -223,   787,   119,  -223,   249,  -223,   489,   647,
    -223,   787,  -223,  -223,   260,   489,   787,   787,   787,   285,
     577,   275,  -223,  -223,  -223,   127,   156,    84,   279,   339,
    -223,  -223,   663,   787,   340,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,   787,  -223,   787,   787,
     787,   787,   787,   787,   787,   787,   787,   787,   787,   787,
     787,   787,   787,   787,   787,   787,   787,   787,  -223,  -223,
     453,  -223,  -223,   833,   692,  -223,    41,  -223,     6,  -223,
    1142,  -223,   355,  -223,  -223,  -223,  -223,  -223,    55,  -223,
    -223,    62,  -223,   787,  -223,   300,   489,  -223,   172,   187,
     192,   302,   577,  -223,  -223,  -223,  1066,   139,  -223,   787,
    -223,  -223,   193,  -223,   -43,  -223,  -223,  -223,  -223,  -223,
     158,   158,    36,    36,   185,   185,   185,   185,    49,    49,
     196,   207,   198,   200,   268,   -12,  -223,  -223,  -223,   303,
     304,  -223,   305,     6,  1107,   733,  -223,  -223,  -223,   145,
    -223,  -223,  -223,  -223,  -223,   489,   489,   489,   787,   746,
    -223,  -223,   787,  -223,   787,  -223,  -223,  -223,  -223,   306,
    -223,   307,  -223,  -223,   312,  -223,  -223,   194,   489,   199,
    -223,  -223,  -223,  -223,   489,   288,  -223,   489,  -223,  -223,
    -223
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   134,   105,    89,    90,    91,    92,    93,    95,    96,
      97,    98,   101,   102,    99,   100,   130,   131,    94,   109,
     110,     0,     0,   141,     0,   209,     0,    79,    81,   103,
       0,   104,    83,     0,   133,     0,     2,   206,   208,   125,
       0,     0,   145,   143,   142,     1,    77,     0,    85,    87,
      80,    82,   108,     0,    84,     0,   188,     0,   213,     0,
       0,     0,   132,   207,     0,   128,     0,   126,   135,   146,
     144,     0,    78,     0,   211,     0,     0,   115,     0,   111,
       0,   117,     3,     4,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,   192,   184,     7,    17,
      29,     0,    31,    35,    38,    41,    46,    49,    51,    53,
      55,    57,    59,    61,    74,     0,   190,   175,   176,     0,
       0,   177,   178,   179,   180,    87,   189,   212,   154,   140,
     153,     0,   147,   149,     0,     3,   137,    29,    76,     0,
       0,     0,     0,   123,    86,     0,   170,    88,   210,     0,
     114,   107,   112,     0,     0,   118,   120,   116,     0,     0,
      21,     0,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,   202,   203,   204,     0,     0,   156,     0,     0,
      13,    14,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    63,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   186,
       0,   185,   191,     0,     0,   151,   158,   152,   159,   138,
       0,   139,     0,   136,   124,   129,   127,   173,     0,   106,
     121,     0,   113,     0,   181,     0,     0,   183,     0,     0,
       0,     0,     0,   201,   205,     6,     0,   158,   157,     0,
      12,     9,     0,    15,     0,    11,    62,    32,    33,    34,
      36,    37,    39,    40,    44,    45,    42,    43,    47,    48,
      50,    52,    54,    56,    58,     0,    75,   187,   166,     0,
       0,   162,     0,   160,     0,     0,   148,   150,   155,     0,
     171,   119,   122,    22,   182,     0,     0,     0,     0,     0,
      30,    10,     0,     8,     0,   167,   161,   163,   168,     0,
     164,     0,   172,   174,   194,   196,   197,     0,     0,     0,
      16,    60,   169,   165,     0,     0,   199,     0,   195,   198,
     200
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,  -223,   -48,  -223,   -81,    24,    58,
      72,    48,   146,   150,   151,   149,   170,  -223,   -55,   -70,
    -223,   -94,   -54,    11,     0,  -223,   328,  -223,   -28,  -223,
    -223,   333,   -69,   -26,  -223,   160,  -223,   348,   272,    35,
     -14,   -33,    -3,  -223,   -59,  -223,   173,  -223,   258,  -123,
    -222,  -131,  -223,   -74,  -223,   148,   134,   299,  -173,  -223,
    -223,  -223,  -223,   396,  -223
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,   108,   109,   272,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     206,   125,   149,    56,    57,    47,    48,    27,    28,    29,
      30,    78,    79,    80,   164,   165,    31,    66,    67,    32,
      33,    34,    35,    44,   299,   142,   143,   144,   188,   300,
     238,   157,   248,   126,   127,   128,    59,   130,   131,   132,
     133,   134,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   141,    62,   156,   185,   186,   148,   262,    41,   162,
     225,    25,    49,   147,   303,    39,     1,   237,    52,   179,
      43,   323,     1,   227,   247,    77,    71,    50,    51,    60,
     207,    61,    54,   148,   174,     1,    26,   170,   172,   173,
     147,    70,    72,   135,     1,   303,    45,    25,    77,    77,
      77,   160,    64,    77,   227,   167,   232,   135,    42,     1,
     140,   215,   216,   147,   268,     1,   166,   304,   324,   305,
     136,    77,   226,   187,   233,   186,   234,   186,    65,    69,
      22,    23,   258,   259,   260,   156,   136,    23,    81,   319,
     162,   227,   152,    22,   254,    40,   148,   245,    53,   274,
      23,   257,   233,   147,   234,   211,   212,   228,   148,   250,
     153,    81,    81,    81,    46,   147,    81,    22,    16,    17,
     152,   309,   273,    22,   217,   218,   235,   277,   278,   279,
      23,    77,   295,    68,    81,    76,   276,   236,   244,   310,
     136,    77,   163,   187,    23,   266,   151,   234,   145,    83,
      84,    85,    23,    86,    87,   241,   232,   296,   168,   242,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   333,   148,
     302,    58,   314,    75,   267,   251,   147,   175,   320,   129,
     189,   190,   191,   227,    81,   213,   214,    74,   148,   312,
     266,   252,   234,    62,    81,   147,    99,   137,   176,   264,
     219,   220,   100,   101,   102,   103,   104,   105,   265,    41,
     177,   147,   227,   158,   337,   339,   208,   178,   155,   332,
     236,   209,   210,   140,   315,   280,   281,   166,   227,   156,
     140,   334,   335,   336,   192,   329,   193,   180,   194,   316,
     148,   331,   340,   227,   317,   321,   345,   147,   227,   322,
     227,   347,   181,   267,   346,   227,   140,   288,   289,   341,
     348,   282,   283,   350,   221,   222,   147,   182,   223,   183,
      82,    83,    84,    85,   224,    86,    87,   284,   285,   286,
     287,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,    73,   239,   240,   140,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   243,    88,    89,    90,   253,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   261,
     256,   269,   270,   275,   100,   101,   102,   103,   104,   105,
      82,    83,    84,    85,   205,    86,    87,   263,   308,   106,
      55,   107,   313,   318,   344,   325,   326,   290,   342,   327,
     349,   343,   291,   293,   292,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   294,    88,    89,    90,   154,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   159,
     138,   311,   150,   307,   100,   101,   102,   103,   104,   105,
      82,    83,    84,    85,   246,    86,    87,   255,   230,   106,
      55,   229,    63,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,    82,    83,    84,    85,
       0,    86,    87,     0,     0,     0,    88,    89,    90,   139,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,    82,    83,    84,    85,     0,    86,    87,   106,
      55,   231,    88,    89,    90,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   145,    83,    84,    85,
       0,    86,    87,     0,     0,   106,    55,   297,    88,    89,
      90,     0,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,   145,    83,    84,    85,     0,    86,    87,     0,
       0,   106,    55,     0,     0,     0,     0,     0,     0,     0,
     145,    83,    84,    85,    99,    86,    87,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   145,    83,    84,    85,
       0,    86,    87,     0,     0,     0,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,     0,    99,     0,
       0,   184,     0,     0,   100,   101,   102,   103,   104,   105,
     145,    83,    84,    85,    99,    86,    87,   146,     0,   106,
     100,   101,   102,   103,   104,   105,   145,    83,    84,    85,
       0,    86,    87,     0,     0,     2,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   145,    83,    84,    85,     0,
      86,    87,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,    99,   271,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   145,    83,    84,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,   145,
      83,    84,    85,    99,    86,    87,   301,     0,     0,   100,
     101,   102,   103,   104,   105,   145,    83,    84,    85,     0,
      86,    87,     0,     0,     0,     0,     0,   145,    83,    84,
      85,     0,    86,    87,     0,     0,     0,     0,     0,     0,
     145,    83,    84,    85,    99,    86,    87,   330,     0,     0,
     100,   101,   102,   103,   104,   105,     0,    99,   338,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,   169,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   171,     1,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,    99,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,   298,   234,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     2,     0,     0,     0,     0,    23,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     2,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   161,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,   249,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,   298,   234,
       0,     0,     0,     0,    23,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   328,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     306,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21
};

static const yytype_int16 yycheck[] =
{
       0,    60,    35,    73,    98,    99,    61,   180,    22,    78,
      17,     0,    26,    61,   236,     3,     3,   140,     3,    93,
      23,    64,     3,    66,   155,    53,    66,    27,    28,    61,
     111,    63,    32,    88,    88,     3,    36,    85,    86,    87,
      88,    44,    82,    57,     3,   267,     0,    36,    76,    77,
      78,    77,    83,    81,    66,    81,   130,    71,    23,     3,
      60,    12,    13,   111,   187,     3,    80,    61,    80,    63,
      59,    99,    79,    99,    61,   169,    63,   171,     3,    44,
      61,    68,   176,   177,   178,   155,    75,    68,    53,   262,
     159,    66,    66,    61,   168,    83,   151,   151,    83,   193,
      68,   175,    61,   151,    63,    69,    70,    82,   163,   163,
      84,    76,    77,    78,    82,   163,    81,    61,    42,    43,
      66,    66,   192,    61,    75,    76,   140,   208,   209,   210,
      68,   159,   226,    62,    99,    83,   206,   140,    84,    84,
     129,   169,    80,   169,    68,    61,    81,    63,     3,     4,
       5,     6,    68,     8,     9,    62,   230,   227,    80,    66,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   309,   234,
     234,    33,   256,    49,   187,    66,   234,    80,   269,    55,
       7,     8,     9,    66,   159,    10,    11,    49,   253,   253,
      61,    82,    63,   236,   169,   253,    61,    59,    61,    82,
      14,    15,    67,    68,    69,    70,    71,    72,    62,   233,
      61,   269,    66,    75,   318,   319,    68,    61,    83,    84,
     233,    73,    74,   233,    62,   211,   212,   251,    66,   309,
     240,   315,   316,   317,    61,   304,    63,    61,    65,    62,
     305,   305,   322,    66,    62,    62,    62,   305,    66,    66,
      66,    62,     3,   266,   338,    66,   266,   219,   220,   324,
     344,   213,   214,   347,    67,    77,   324,    82,    78,    82,
       3,     4,     5,     6,    16,     8,     9,   215,   216,   217,
     218,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    81,    62,    66,   304,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    64,    49,    50,    51,    80,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    54,
      80,    62,     3,     3,    67,    68,    69,    70,    71,    72,
       3,     4,     5,     6,    81,     8,     9,    82,     3,    82,
      83,    84,    62,    61,    52,    62,    62,   221,    62,    64,
      82,    64,   222,   224,   223,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   225,    49,    50,    51,    71,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    76,
       3,   251,    64,   240,    67,    68,    69,    70,    71,    72,
       3,     4,     5,     6,   152,     8,     9,   169,   129,    82,
      83,    84,    36,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    49,    50,    51,    62,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    82,
      83,    84,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    82,    83,    84,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    61,     8,     9,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    82,    -1,    -1,    67,    68,    69,    70,    71,    72,
       3,     4,     5,     6,    61,     8,     9,    64,    -1,    82,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    61,     8,     9,    64,    -1,    -1,    67,
      68,    69,    70,    71,    72,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    61,     8,     9,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    61,    62,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    61,     3,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    28,    -1,    -1,    -1,    -1,    68,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    84,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    84,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    -1,    68,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    68,    86,   108,   109,   112,   113,   114,
     115,   121,   124,   125,   126,   127,   147,   148,   149,     3,
      83,   125,   124,   127,   128,     0,    82,   110,   111,   125,
     109,   109,     3,    83,   109,    83,   108,   109,   140,   141,
      61,    63,   126,   148,    83,     3,   122,   123,    62,   124,
     127,    66,    82,    81,   140,   141,    83,   113,   116,   117,
     118,   124,     3,     4,     5,     6,     8,     9,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      67,    68,    69,    70,    71,    72,    82,    84,    87,    88,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   106,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   125,   108,   140,     3,    62,
     109,   129,   130,   131,   132,     3,    64,    90,   103,   107,
     122,    81,    66,    84,   111,    83,   104,   136,   140,   116,
     118,    84,   117,    80,   119,   120,   125,   118,    80,    61,
      90,    61,    90,    90,   107,    80,    61,    61,    61,   138,
      61,     3,    82,    82,    82,   106,   106,   118,   133,     7,
       8,     9,    61,    63,    65,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    81,   105,    92,    68,    73,
      74,    69,    70,    10,    11,    12,    13,    75,    76,    14,
      15,    67,    77,    78,    16,    17,    79,    66,    82,    84,
     142,    84,   138,    61,    63,   125,   127,   134,   135,    62,
      66,    62,    66,    64,    84,   107,   123,   136,   137,    84,
     107,    66,    82,    80,   138,   133,    80,   138,   106,   106,
     106,    54,   143,    82,    82,    62,    61,   127,   134,    62,
       3,    62,    89,   104,   106,     3,   104,    92,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    95,    96,    96,
      97,    98,    99,   100,   101,   106,   104,    84,    62,   129,
     134,    64,   107,   135,    61,    63,    48,   131,     3,    66,
      84,   120,   107,    62,   138,    62,    62,    62,    61,   143,
      92,    62,    66,    64,    80,    62,    62,    64,    62,   129,
      64,   107,    84,   136,   138,   138,   138,   106,    62,   106,
     104,   103,    62,    64,    52,    62,   138,    62,   138,    82,
     138
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   115,
     115,   116,   116,   117,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   137,   137,   138,   138,   138,   138,   138,
     138,   139,   139,   139,   140,   140,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   145,   145,   145,
     145,   146,   146,   146,   146,   146,   147,   147,   148,   148,
     149,   149,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       4,     3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 56 "graph_parse.y"
                           {
		struct Root *arr[]={(yyvsp[0].tree)};
		(yyval.tree)=create_node("source_code", 1, 0, arr);
		mtree = (yyval.tree);
	}
#line 1905 "y.tab.c"
    break;

  case 3:
#line 62 "graph_parse.y"
                        {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("primary_expression", 1, 0, arr);
	}
#line 1914 "y.tab.c"
    break;

  case 4:
#line 66 "graph_parse.y"
                    {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("primary_expression", 1, 0, arr);
	}
#line 1923 "y.tab.c"
    break;

  case 5:
#line 70 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("primary_expression", 1, 0, arr);
	}
#line 1932 "y.tab.c"
    break;

  case 6:
#line 74 "graph_parse.y"
                             {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("primary_expression", 1, 0, arr);
	}
#line 1941 "y.tab.c"
    break;

  case 7:
#line 81 "graph_parse.y"
                             {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("postfix_expression", 1, 0, arr);
	}
#line 1950 "y.tab.c"
    break;

  case 8:
#line 85 "graph_parse.y"
                                                {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("postfix_expression", 2, 0, arr);
	}
#line 1959 "y.tab.c"
    break;

  case 9:
#line 89 "graph_parse.y"
                                     {
				struct Root *arr[]={(yyvsp[-2].tree)};
				(yyval.tree)=create_node("postfix_expression", 1, 0, arr);
	}
#line 1968 "y.tab.c"
    break;

  case 10:
#line 93 "graph_parse.y"
                                                              {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("postfix_expression", 2, 0, arr);
	}
#line 1977 "y.tab.c"
    break;

  case 11:
#line 97 "graph_parse.y"
                                            {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("postfix_expression", 2, 0, arr);
	}
#line 1986 "y.tab.c"
    break;

  case 12:
#line 101 "graph_parse.y"
                                               {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("postfix_expression", 3, 0, arr);
	}
#line 1995 "y.tab.c"
    break;

  case 13:
#line 105 "graph_parse.y"
                                    {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("postfix_expression", 2, 0, arr);
	}
#line 2004 "y.tab.c"
    break;

  case 14:
#line 109 "graph_parse.y"
                                    {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("postfix_expression", 2, 0, arr);
	}
#line 2013 "y.tab.c"
    break;

  case 15:
#line 116 "graph_parse.y"
                                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_expression_list", 1, 0, arr);
	}
#line 2022 "y.tab.c"
    break;

  case 16:
#line 120 "graph_parse.y"
                                                             {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("argument_assignment_list", 2, 0, arr);
	}
#line 2031 "y.tab.c"
    break;

  case 17:
#line 127 "graph_parse.y"
                             {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("unary_expression", 1, 0, arr);
	}
#line 2040 "y.tab.c"
    break;

  case 18:
#line 131 "graph_parse.y"
                                  {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("unary_expression", 2, 0, arr);
	}
#line 2049 "y.tab.c"
    break;

  case 19:
#line 135 "graph_parse.y"
                                  {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("unary_expression", 2, 0, arr);
	}
#line 2058 "y.tab.c"
    break;

  case 20:
#line 139 "graph_parse.y"
                                         {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("unary_expression", 2, 0, arr);
	}
#line 2067 "y.tab.c"
    break;

  case 21:
#line 143 "graph_parse.y"
                                  {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("unary_expression", 2, 0, arr);
	}
#line 2076 "y.tab.c"
    break;

  case 22:
#line 147 "graph_parse.y"
                                   {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("unary_expression", 2, 0, arr);
	}
#line 2085 "y.tab.c"
    break;

  case 23:
#line 154 "graph_parse.y"
              {
				(yyval.tree)=create_node("unary_operator = &", 0, 0, NULL);
	}
#line 2093 "y.tab.c"
    break;

  case 24:
#line 157 "graph_parse.y"
              {
				(yyval.tree)=create_node("unary_operator = *", 0, 0, NULL);
	}
#line 2101 "y.tab.c"
    break;

  case 25:
#line 160 "graph_parse.y"
              {
				(yyval.tree)=create_node("unary_expression = +", 0, 0, NULL);
	}
#line 2109 "y.tab.c"
    break;

  case 26:
#line 163 "graph_parse.y"
              {
				(yyval.tree)=create_node("unary_expression = -", 0, 0, NULL);
	}
#line 2117 "y.tab.c"
    break;

  case 27:
#line 166 "graph_parse.y"
              {
				(yyval.tree)=create_node("unary_expression = ~", 0, 0, NULL);
	}
#line 2125 "y.tab.c"
    break;

  case 28:
#line 169 "graph_parse.y"
              {
				(yyval.tree)=create_node("unary_expression = !", 0, 0, NULL);
	}
#line 2133 "y.tab.c"
    break;

  case 29:
#line 175 "graph_parse.y"
                           {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("cast_expression", 1, 0, arr);
	}
#line 2142 "y.tab.c"
    break;

  case 30:
#line 179 "graph_parse.y"
                                            {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("cast_expression", 2, 0, arr);
	}
#line 2151 "y.tab.c"
    break;

  case 31:
#line 186 "graph_parse.y"
                          {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("multiplicative_expression", 1, 0, arr);
	}
#line 2160 "y.tab.c"
    break;

  case 32:
#line 190 "graph_parse.y"
                                                        {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("multiplicative_expression *", 2, 0, arr);
	}
#line 2169 "y.tab.c"
    break;

  case 33:
#line 194 "graph_parse.y"
                                                        {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("multiplicative_expression /", 2, 0, arr);
	}
#line 2178 "y.tab.c"
    break;

  case 34:
#line 198 "graph_parse.y"
                                                        {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("multiplicative_expression %", 2, 0, arr);
	}
#line 2187 "y.tab.c"
    break;

  case 35:
#line 205 "graph_parse.y"
                                    {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("additive_expression", 1, 0, arr);
	}
#line 2196 "y.tab.c"
    break;

  case 36:
#line 209 "graph_parse.y"
                                                            {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("additive_expression +", 2, 0, arr);
	}
#line 2205 "y.tab.c"
    break;

  case 37:
#line 213 "graph_parse.y"
                                                            {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("additive_expression -", 2, 0, arr);
	}
#line 2214 "y.tab.c"
    break;

  case 38:
#line 220 "graph_parse.y"
                              {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("shift_expression", 1, 0, arr);
	}
#line 2223 "y.tab.c"
    break;

  case 39:
#line 224 "graph_parse.y"
                                                       {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("shift_expression", 3, 0, arr);
	}
#line 2232 "y.tab.c"
    break;

  case 40:
#line 228 "graph_parse.y"
                                                        {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("shift_expression", 3, 0, arr);
	}
#line 2241 "y.tab.c"
    break;

  case 41:
#line 235 "graph_parse.y"
                           {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("relational_expression", 1, 0, arr);
	}
#line 2250 "y.tab.c"
    break;

  case 42:
#line 239 "graph_parse.y"
                                                     {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("relational_expression <", 2, 0, arr);
	}
#line 2259 "y.tab.c"
    break;

  case 43:
#line 243 "graph_parse.y"
                                                     {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("relational_expression >", 2, 0, arr);
	}
#line 2268 "y.tab.c"
    break;

  case 44:
#line 247 "graph_parse.y"
                                                       {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("relational_expression", 3, 0, arr);
	}
#line 2277 "y.tab.c"
    break;

  case 45:
#line 251 "graph_parse.y"
                                                       {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("relational_expression", 3, 0, arr);
	}
#line 2286 "y.tab.c"
    break;

  case 46:
#line 258 "graph_parse.y"
                                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("equality_expression", 1, 0, arr);
	}
#line 2295 "y.tab.c"
    break;

  case 47:
#line 262 "graph_parse.y"
                                                          {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("equality_expression", 3, 0, arr);
	}
#line 2304 "y.tab.c"
    break;

  case 48:
#line 266 "graph_parse.y"
                                                          {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("equality_expression", 3, 0, arr);
	}
#line 2313 "y.tab.c"
    break;

  case 49:
#line 273 "graph_parse.y"
                              {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("and_expression", 1, 0, arr);
	}
#line 2322 "y.tab.c"
    break;

  case 50:
#line 277 "graph_parse.y"
                                                 {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("and_expression", 2, 0, arr);
	}
#line 2331 "y.tab.c"
    break;

  case 51:
#line 284 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("exclusive_or_expression", 1, 0, arr);
	}
#line 2340 "y.tab.c"
    break;

  case 52:
#line 288 "graph_parse.y"
                                                     {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("exclusive_or_expression", 2, 0, arr);
	}
#line 2349 "y.tab.c"
    break;

  case 53:
#line 295 "graph_parse.y"
                                  {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("inclusive_or_expression", 1, 0, arr);
	}
#line 2358 "y.tab.c"
    break;

  case 54:
#line 299 "graph_parse.y"
                                                              {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("inclusive_or_exclusive", 2, 0, arr);
	}
#line 2367 "y.tab.c"
    break;

  case 55:
#line 306 "graph_parse.y"
                                  {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("logical_and_expression", 1, 0, arr);
	}
#line 2376 "y.tab.c"
    break;

  case 56:
#line 310 "graph_parse.y"
                                                                {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("logical_and_expression", 3, 0, arr);
	}
#line 2385 "y.tab.c"
    break;

  case 57:
#line 317 "graph_parse.y"
                                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("logical_or_expression", 1, 0, arr);
	}
#line 2394 "y.tab.c"
    break;

  case 58:
#line 321 "graph_parse.y"
                                                             {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("logical_or_expression", 3, 0, arr);
	}
#line 2403 "y.tab.c"
    break;

  case 59:
#line 328 "graph_parse.y"
                                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("conditional_expression", 1, 0, arr);
	}
#line 2412 "y.tab.c"
    break;

  case 60:
#line 332 "graph_parse.y"
                                                                          {
				struct Root *arr[]={(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("conditional_expression", 3, 0, arr);
	}
#line 2421 "y.tab.c"
    break;

  case 61:
#line 339 "graph_parse.y"
                                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_expression", 1, 0, arr);
	}
#line 2430 "y.tab.c"
    break;

  case 62:
#line 343 "graph_parse.y"
                                                                     {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_expression", 3, 0, arr);
	}
#line 2439 "y.tab.c"
    break;

  case 63:
#line 350 "graph_parse.y"
              {
				(yyval.tree)=create_node("=", 0, 0, NULL);
	}
#line 2447 "y.tab.c"
    break;

  case 64:
#line 353 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2456 "y.tab.c"
    break;

  case 65:
#line 357 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2465 "y.tab.c"
    break;

  case 66:
#line 361 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2474 "y.tab.c"
    break;

  case 67:
#line 365 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2483 "y.tab.c"
    break;

  case 68:
#line 369 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2492 "y.tab.c"
    break;

  case 69:
#line 373 "graph_parse.y"
                      {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2501 "y.tab.c"
    break;

  case 70:
#line 377 "graph_parse.y"
                       {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2510 "y.tab.c"
    break;

  case 71:
#line 381 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2519 "y.tab.c"
    break;

  case 72:
#line 385 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2528 "y.tab.c"
    break;

  case 73:
#line 389 "graph_parse.y"
                    {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("assignment_operator", 1, 0, arr);
	}
#line 2537 "y.tab.c"
    break;

  case 74:
#line 396 "graph_parse.y"
                                {
		struct Root *arr[]={(yyvsp[0].tree)};
		(yyval.tree)=create_node("expression", 1, 0, arr);
	}
#line 2546 "y.tab.c"
    break;

  case 75:
#line 400 "graph_parse.y"
                                               {
		struct Root *arr[]={(yyvsp[-2].tree), (yyvsp[0].tree)};
		(yyval.tree) = create_node("expression", 2, 0, arr);
	}
#line 2555 "y.tab.c"
    break;

  case 76:
#line 407 "graph_parse.y"
                                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("constant_expression", 1, 0, arr);
	}
#line 2564 "y.tab.c"
    break;

  case 77:
#line 414 "graph_parse.y"
                                     {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("declaration", 1, 0, arr);
	}
#line 2573 "y.tab.c"
    break;

  case 78:
#line 418 "graph_parse.y"
                                                          {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("declaration", 2, 0, arr);
	}
#line 2582 "y.tab.c"
    break;

  case 79:
#line 425 "graph_parse.y"
                                  {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("declaration_specifiers", 1, 0, arr);
	}
#line 2591 "y.tab.c"
    break;

  case 80:
#line 429 "graph_parse.y"
                                                         {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("declaration_specifiers", 2, 0, arr);
	}
#line 2600 "y.tab.c"
    break;

  case 81:
#line 433 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("declaration_specifiers", 1, 0, arr);
	}
#line 2609 "y.tab.c"
    break;

  case 82:
#line 437 "graph_parse.y"
                                                {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("declaration_specifiers", 2, 0, arr);
	}
#line 2618 "y.tab.c"
    break;

  case 83:
#line 441 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("declaration_specifiers", 1, 0, arr);
	}
#line 2627 "y.tab.c"
    break;

  case 84:
#line 445 "graph_parse.y"
                                                {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("tdeclaration_specifiers", 2, 0, arr);
	}
#line 2636 "y.tab.c"
    break;

  case 85:
#line 452 "graph_parse.y"
                          {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("init_declarator_list", 1, 0, arr);
	}
#line 2645 "y.tab.c"
    break;

  case 86:
#line 456 "graph_parse.y"
                                                   {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("init_declarator_list", 2, 0, arr);
	}
#line 2654 "y.tab.c"
    break;

  case 87:
#line 463 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("init_declarator", 1, 0, arr);
	}
#line 2663 "y.tab.c"
    break;

  case 88:
#line 467 "graph_parse.y"
                                     {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("init_declarator", 2, 0, arr);
	}
#line 2672 "y.tab.c"
    break;

  case 89:
#line 474 "graph_parse.y"
                  {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("storage_class_specifier", 1, 0, arr);
	}
#line 2681 "y.tab.c"
    break;

  case 90:
#line 478 "graph_parse.y"
                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("storage_class_specifier", 1, 0, arr);
	}
#line 2690 "y.tab.c"
    break;

  case 91:
#line 482 "graph_parse.y"
                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("storage_class_specifier", 1, 0, arr);
	}
#line 2699 "y.tab.c"
    break;

  case 92:
#line 486 "graph_parse.y"
               {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("storage_class_specifier", 1, 0, arr);
	}
#line 2708 "y.tab.c"
    break;

  case 93:
#line 490 "graph_parse.y"
                   {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("storage_class_specifier", 1, 0, arr);
	}
#line 2717 "y.tab.c"
    break;

  case 94:
#line 497 "graph_parse.y"
               {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2726 "y.tab.c"
    break;

  case 95:
#line 501 "graph_parse.y"
               {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2735 "y.tab.c"
    break;

  case 96:
#line 505 "graph_parse.y"
                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2744 "y.tab.c"
    break;

  case 97:
#line 509 "graph_parse.y"
              {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2753 "y.tab.c"
    break;

  case 98:
#line 513 "graph_parse.y"
               {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2762 "y.tab.c"
    break;

  case 99:
#line 517 "graph_parse.y"
                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2771 "y.tab.c"
    break;

  case 100:
#line 521 "graph_parse.y"
                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2780 "y.tab.c"
    break;

  case 101:
#line 525 "graph_parse.y"
                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2789 "y.tab.c"
    break;

  case 102:
#line 529 "graph_parse.y"
                   {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2798 "y.tab.c"
    break;

  case 103:
#line 533 "graph_parse.y"
                                    {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2807 "y.tab.c"
    break;

  case 104:
#line 537 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2816 "y.tab.c"
    break;

  case 105:
#line 541 "graph_parse.y"
                    {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_specifier", 1, 0, arr);
	}
#line 2825 "y.tab.c"
    break;

  case 106:
#line 548 "graph_parse.y"
                                                                     {
				struct Root *arr[]={(yyvsp[-4].tree),(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("struct_or_union_specifier", 3, 0, arr);
	}
#line 2834 "y.tab.c"
    break;

  case 107:
#line 552 "graph_parse.y"
                                                          {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("struct_or_union_specifier", 2, 0, arr);
	}
#line 2843 "y.tab.c"
    break;

  case 108:
#line 556 "graph_parse.y"
                                     {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_or_union_specifier", 2, 0, arr);
	}
#line 2852 "y.tab.c"
    break;

  case 109:
#line 563 "graph_parse.y"
                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_or_union", 1, 0, arr);
	}
#line 2861 "y.tab.c"
    break;

  case 110:
#line 567 "graph_parse.y"
                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_or_union", 1, 0, arr);
	}
#line 2870 "y.tab.c"
    break;

  case 111:
#line 574 "graph_parse.y"
                             {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_declaration_list", 1, 0, arr);
	}
#line 2879 "y.tab.c"
    break;

  case 112:
#line 578 "graph_parse.y"
                                                     {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_declaration_list", 2, 0, arr);
	}
#line 2888 "y.tab.c"
    break;

  case 113:
#line 585 "graph_parse.y"
                                                              {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("struct_declaration", 2, 0, arr);
	}
#line 2897 "y.tab.c"
    break;

  case 114:
#line 592 "graph_parse.y"
                                                  {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("specifier_qualifier_list", 2, 0, arr);
	}
#line 2906 "y.tab.c"
    break;

  case 115:
#line 596 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("specifier_qualifier_list", 1, 0, arr);
	}
#line 2915 "y.tab.c"
    break;

  case 116:
#line 600 "graph_parse.y"
                                                  {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("specifier_qualifier_list", 2, 0, arr);
	}
#line 2924 "y.tab.c"
    break;

  case 117:
#line 604 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("specifier_qualifier_list", 1, 0, arr);
	}
#line 2933 "y.tab.c"
    break;

  case 118:
#line 611 "graph_parse.y"
                            {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_declarator_list", 1, 0, arr);
	}
#line 2942 "y.tab.c"
    break;

  case 119:
#line 615 "graph_parse.y"
                                                       {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_declarator_list", 2, 0, arr);
	}
#line 2951 "y.tab.c"
    break;

  case 120:
#line 622 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_declarator", 1, 0, arr);
	}
#line 2960 "y.tab.c"
    break;

  case 121:
#line 626 "graph_parse.y"
                                  {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_declarator", 1, 0, arr);
	}
#line 2969 "y.tab.c"
    break;

  case 122:
#line 630 "graph_parse.y"
                                             {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("struct_declarator", 2, 0, arr);
	}
#line 2978 "y.tab.c"
    break;

  case 123:
#line 637 "graph_parse.y"
                                       {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("enum_specifier", 2, 0, arr);
	}
#line 2987 "y.tab.c"
    break;

  case 124:
#line 641 "graph_parse.y"
                                                  {
				struct Root *arr[]={(yyvsp[-4].tree),(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("enum_specifier", 3, 0, arr);
	}
#line 2996 "y.tab.c"
    break;

  case 125:
#line 645 "graph_parse.y"
                          {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("enum_specifier", 2, 0, arr);
	}
#line 3005 "y.tab.c"
    break;

  case 126:
#line 652 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("enumerator_list", 1, 0, arr);
	}
#line 3014 "y.tab.c"
    break;

  case 127:
#line 656 "graph_parse.y"
                                         {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("enumerator_list", 3, 0, arr);
	}
#line 3023 "y.tab.c"
    break;

  case 128:
#line 663 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("enumerator", 1, 0, arr);
	}
#line 3032 "y.tab.c"
    break;

  case 129:
#line 667 "graph_parse.y"
                                             {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("enumerator", 2, 0, arr);
	}
#line 3041 "y.tab.c"
    break;

  case 130:
#line 674 "graph_parse.y"
                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_qualifier", 1, 0, arr);
	}
#line 3050 "y.tab.c"
    break;

  case 131:
#line 678 "graph_parse.y"
                   {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_qualifier", 1, 0, arr);
	}
#line 3059 "y.tab.c"
    break;

  case 132:
#line 685 "graph_parse.y"
                                    {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("declarator", 2, 0, arr);
	}
#line 3068 "y.tab.c"
    break;

  case 133:
#line 689 "graph_parse.y"
                            {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("declarator", 1, 0, arr);
	}
#line 3077 "y.tab.c"
    break;

  case 134:
#line 696 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("direct_declarator", 1, 0, arr);
	}
#line 3086 "y.tab.c"
    break;

  case 135:
#line 700 "graph_parse.y"
                             {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_declarator", 1, 0, arr);
	}
#line 3095 "y.tab.c"
    break;

  case 136:
#line 704 "graph_parse.y"
                                                        {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_declarator", 2, 0, arr);
	}
#line 3104 "y.tab.c"
    break;

  case 137:
#line 708 "graph_parse.y"
                                    {
				struct Root *arr[]={(yyvsp[-2].tree)};
				(yyval.tree)=create_node("direct_declarator", 1, 0, arr);
	}
#line 3113 "y.tab.c"
    break;

  case 138:
#line 712 "graph_parse.y"
                                                        {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_declarator", 2, 0, arr);
	}
#line 3122 "y.tab.c"
    break;

  case 139:
#line 716 "graph_parse.y"
                                                    {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_declarator", 2, 0, arr);
	}
#line 3131 "y.tab.c"
    break;

  case 140:
#line 720 "graph_parse.y"
                                    {
				struct Root *arr[]={(yyvsp[-2].tree)};
				(yyval.tree)=create_node("direct_declarator", 1, 0, arr);
	}
#line 3140 "y.tab.c"
    break;

  case 141:
#line 727 "graph_parse.y"
              {
				(yyval.tree)=create_node("pointer", 0, 0, NULL);
	}
#line 3148 "y.tab.c"
    break;

  case 142:
#line 730 "graph_parse.y"
                                  {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("pointer", 1, 0, arr);
	}
#line 3157 "y.tab.c"
    break;

  case 143:
#line 734 "graph_parse.y"
                      {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("pointer", 1, 0, arr);
	}
#line 3166 "y.tab.c"
    break;

  case 144:
#line 738 "graph_parse.y"
                                          {
				struct Root *arr[]={(yyvsp[-1].tree), (yyvsp[0].tree)};
				(yyval.tree)=create_node("pointer", 2, 0, arr);
	}
#line 3175 "y.tab.c"
    break;

  case 145:
#line 745 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_qualifier_list", 1, 0, arr);
	}
#line 3184 "y.tab.c"
    break;

  case 146:
#line 749 "graph_parse.y"
                                             {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_qualifier_list", 2, 0, arr);
	}
#line 3193 "y.tab.c"
    break;

  case 147:
#line 757 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("parameter_type_list", 1, 0, arr);
	}
#line 3202 "y.tab.c"
    break;

  case 148:
#line 761 "graph_parse.y"
                                      {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("parameter_type_list", 2, 0, arr);
	}
#line 3211 "y.tab.c"
    break;

  case 149:
#line 768 "graph_parse.y"
                                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("parameter_list", 1, 0, arr);
	}
#line 3220 "y.tab.c"
    break;

  case 150:
#line 772 "graph_parse.y"
                                                   {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("parameter_list", 2, 0, arr);
	}
#line 3229 "y.tab.c"
    break;

  case 151:
#line 779 "graph_parse.y"
                                            {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("parameter_declaration", 2, 0, arr);
	}
#line 3238 "y.tab.c"
    break;

  case 152:
#line 783 "graph_parse.y"
                                                     {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("parameter_declaration", 2, 0, arr);
	}
#line 3247 "y.tab.c"
    break;

  case 153:
#line 787 "graph_parse.y"
                                 {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("parameter_declaration", 1, 0, arr);
	}
#line 3256 "y.tab.c"
    break;

  case 154:
#line 794 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("identifier_list", 1, 0, arr);
	}
#line 3265 "y.tab.c"
    break;

  case 155:
#line 798 "graph_parse.y"
                                         {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("identifier_list", 2, 0, arr);
	}
#line 3274 "y.tab.c"
    break;

  case 156:
#line 805 "graph_parse.y"
                                   {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_name", 1, 0, arr);
	}
#line 3283 "y.tab.c"
    break;

  case 157:
#line 809 "graph_parse.y"
                                                       {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("type_name", 2, 0, arr);
	}
#line 3292 "y.tab.c"
    break;

  case 158:
#line 816 "graph_parse.y"
                  {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("abstract_declarator", 1, 0, arr);
	}
#line 3301 "y.tab.c"
    break;

  case 159:
#line 820 "graph_parse.y"
                                     {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("abstract_declarator", 1, 0, arr);
	}
#line 3310 "y.tab.c"
    break;

  case 160:
#line 824 "graph_parse.y"
                                             {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("abstract_declarator", 2, 0, arr);
	}
#line 3319 "y.tab.c"
    break;

  case 161:
#line 831 "graph_parse.y"
                                      {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_abstract_declarator", 1, 0, arr);
	}
#line 3328 "y.tab.c"
    break;

  case 162:
#line 835 "graph_parse.y"
                  {
				(yyval.tree)=create_node("direct_abstract_declarator", 0, 0, NULL);
	}
#line 3336 "y.tab.c"
    break;

  case 163:
#line 839 "graph_parse.y"
                                      {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_abstract_declarator", 1, 0, arr);
	}
#line 3345 "y.tab.c"
    break;

  case 164:
#line 843 "graph_parse.y"
                                             {
				struct Root *arr[]={(yyvsp[-2].tree)};
				(yyval.tree)=create_node("direct_abstract_declarator", 1, 0, arr);
	}
#line 3354 "y.tab.c"
    break;

  case 165:
#line 847 "graph_parse.y"
                                                                 {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_abstract_declarator", 2, 0, arr);
	}
#line 3363 "y.tab.c"
    break;

  case 166:
#line 851 "graph_parse.y"
                 {
				(yyval.tree)=create_node("direct_abstract_declarator", 0, 0, NULL);
	}
#line 3371 "y.tab.c"
    break;

  case 167:
#line 855 "graph_parse.y"
                                      {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_abstract_declarator", 1, 0, arr);
	}
#line 3380 "y.tab.c"
    break;

  case 168:
#line 859 "graph_parse.y"
                                             {
				struct Root *arr[]={(yyvsp[-2].tree)};
				(yyval.tree)=create_node("direct_abstract_declarator", 1, 0, arr);
	}
#line 3389 "y.tab.c"
    break;

  case 169:
#line 863 "graph_parse.y"
                                                                 {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("direct_abstract_declarator", 2, 0, arr);
	}
#line 3398 "y.tab.c"
    break;

  case 170:
#line 870 "graph_parse.y"
                                {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("initializer", 1, 0, arr);
	}
#line 3407 "y.tab.c"
    break;

  case 171:
#line 874 "graph_parse.y"
                                   {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("initializer", 1, 0, arr);
	}
#line 3416 "y.tab.c"
    break;

  case 172:
#line 878 "graph_parse.y"
                                       {
				struct Root *arr[]={(yyvsp[-2].tree)};
				(yyval.tree)=create_node("initializer", 1, 0, arr);
	}
#line 3425 "y.tab.c"
    break;

  case 173:
#line 885 "graph_parse.y"
                      {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("initializer_list", 1, 0, arr);
	}
#line 3434 "y.tab.c"
    break;

  case 174:
#line 889 "graph_parse.y"
                                           {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("initializer_list", 2, 0, arr);
	}
#line 3443 "y.tab.c"
    break;

  case 175:
#line 896 "graph_parse.y"
                            {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("statement", 1, 0, arr);
	}
#line 3452 "y.tab.c"
    break;

  case 176:
#line 900 "graph_parse.y"
                             {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("statement", 1, 0, arr);
	}
#line 3461 "y.tab.c"
    break;

  case 177:
#line 904 "graph_parse.y"
                               {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("statement", 1, 0, arr);
	}
#line 3470 "y.tab.c"
    break;

  case 178:
#line 908 "graph_parse.y"
                              {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("statement", 1, 0, arr);
	}
#line 3479 "y.tab.c"
    break;

  case 179:
#line 912 "graph_parse.y"
                              {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("statement", 1, 0, arr);
	}
#line 3488 "y.tab.c"
    break;

  case 180:
#line 916 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("statement", 1, 0, arr);
	}
#line 3497 "y.tab.c"
    break;

  case 181:
#line 923 "graph_parse.y"
                                   {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("labeled_statement", 2, 0, arr);
	}
#line 3506 "y.tab.c"
    break;

  case 182:
#line 927 "graph_parse.y"
                                                 {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("labeled_statement", 3, 0, arr);
	}
#line 3515 "y.tab.c"
    break;

  case 183:
#line 931 "graph_parse.y"
                                {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("labeled_statement", 2, 0, arr);
	}
#line 3524 "y.tab.c"
    break;

  case 184:
#line 938 "graph_parse.y"
                   {
				(yyval.tree)=create_node("compound_statement", 0, 0, NULL);
	}
#line 3532 "y.tab.c"
    break;

  case 185:
#line 942 "graph_parse.y"
                                 {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("compound_statement", 1, 0, arr);
	}
#line 3541 "y.tab.c"
    break;

  case 186:
#line 946 "graph_parse.y"
                                   {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("compound_statement", 1, 0, arr);
	}
#line 3550 "y.tab.c"
    break;

  case 187:
#line 950 "graph_parse.y"
                                                  {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("compound_statement", 2, 0, arr);
	}
#line 3559 "y.tab.c"
    break;

  case 188:
#line 957 "graph_parse.y"
                      {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("declaration_list", 1, 0, arr);
	}
#line 3568 "y.tab.c"
    break;

  case 189:
#line 961 "graph_parse.y"
                                       {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("declaration_list", 2, 0, arr);
	}
#line 3577 "y.tab.c"
    break;

  case 190:
#line 968 "graph_parse.y"
                    {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("statement_list", 1, 0, arr);
	}
#line 3586 "y.tab.c"
    break;

  case 191:
#line 972 "graph_parse.y"
                                   {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("statement_list", 2, 0, arr);
	}
#line 3595 "y.tab.c"
    break;

  case 192:
#line 979 "graph_parse.y"
              {
				(yyval.tree)=create_node("expression_statement", 0, 0, NULL);
	}
#line 3603 "y.tab.c"
    break;

  case 193:
#line 983 "graph_parse.y"
                         {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("expression_statement", 1, 0, arr);
	}
#line 3612 "y.tab.c"
    break;

  case 194:
#line 990 "graph_parse.y"
                                          {
				struct Root *arr[]={(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("selection_statement", 3, 0, arr);
	}
#line 3621 "y.tab.c"
    break;

  case 195:
#line 994 "graph_parse.y"
                                                         {
				struct Root *arr[]={(yyvsp[-6].tree),(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("selection_statement", 5, 0, arr);
	}
#line 3630 "y.tab.c"
    break;

  case 196:
#line 998 "graph_parse.y"
                                              {
				struct Root *arr[]={(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("selection_statement", 3, 0, arr);
	}
#line 3639 "y.tab.c"
    break;

  case 197:
#line 1005 "graph_parse.y"
                                             {
				struct Root *arr[]={(yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("iteration_statement", 3, 0, arr);
	}
#line 3648 "y.tab.c"
    break;

  case 198:
#line 1009 "graph_parse.y"
                                                    {
				struct Root *arr[]={(yyvsp[-6].tree),(yyvsp[-5].tree),(yyvsp[-4].tree),(yyvsp[-2].tree)};
				(yyval.tree)=create_node("iteration_statement", 3, 0, arr);
	}
#line 3657 "y.tab.c"
    break;

  case 199:
#line 1013 "graph_parse.y"
                                                                          {
				struct Root *arr[]={(yyvsp[-5].tree),(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("iteration_statement", 4, 0, arr);
	}
#line 3666 "y.tab.c"
    break;

  case 200:
#line 1017 "graph_parse.y"
                                                                                     {
				struct Root *arr[]={(yyvsp[-6].tree),(yyvsp[-4].tree),(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("iteration_statement", 5, 0, arr);
	}
#line 3675 "y.tab.c"
    break;

  case 201:
#line 1024 "graph_parse.y"
                              {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("jump_statement", 2, 0, arr);
	}
#line 3684 "y.tab.c"
    break;

  case 202:
#line 1028 "graph_parse.y"
                       {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("jump_statement", 1, 0, arr);
	}
#line 3693 "y.tab.c"
    break;

  case 203:
#line 1032 "graph_parse.y"
                    {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("jump_statement", 1, 0, arr);
	}
#line 3702 "y.tab.c"
    break;

  case 204:
#line 1036 "graph_parse.y"
                     {
				struct Root *arr[]={(yyvsp[-1].tree)};
				(yyval.tree)=create_node("jump_statement", 1, 0, arr);
	}
#line 3711 "y.tab.c"
    break;

  case 205:
#line 1040 "graph_parse.y"
                                {
				struct Root *arr[]={(yyvsp[-2].tree)};
				(yyval.tree)=create_node("jump_statement", 1, 0, arr);
	}
#line 3720 "y.tab.c"
    break;

  case 206:
#line 1047 "graph_parse.y"
                               {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("translation_unit", 1, 0, arr);
	}
#line 3729 "y.tab.c"
    break;

  case 207:
#line 1051 "graph_parse.y"
                                                {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("translation_unit", 2, 0, arr);
	}
#line 3738 "y.tab.c"
    break;

  case 208:
#line 1058 "graph_parse.y"
                              {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("external_declaration", 1, 0, arr);
	}
#line 3747 "y.tab.c"
    break;

  case 209:
#line 1062 "graph_parse.y"
                      {
				struct Root *arr[]={(yyvsp[0].tree)};
				(yyval.tree)=create_node("external_declaration", 1, 0, arr);
	}
#line 3756 "y.tab.c"
    break;

  case 210:
#line 1069 "graph_parse.y"
                                                                                {
				struct Root *arr[]={(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree)};
				(yyval.tree)=create_node("function_definition", 3, 0, arr);
	}
#line 3765 "y.tab.c"
    break;

  case 211:
#line 1073 "graph_parse.y"
                                                               {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("function_definition", 3, 0, arr);
	}
#line 3774 "y.tab.c"
    break;

  case 212:
#line 1077 "graph_parse.y"
                                                         {
				struct Root *arr[]={(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("function_definition", 3, 0, arr);
	}
#line 3783 "y.tab.c"
    break;

  case 213:
#line 1081 "graph_parse.y"
                                        {
				struct Root *arr[]={(yyvsp[-1].tree),(yyvsp[0].tree)};
				(yyval.tree)=create_node("function_definition", 2, 0, arr);
	}
#line 3792 "y.tab.c"
    break;


#line 3796 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1087 "graph_parse.y"

 
  
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
