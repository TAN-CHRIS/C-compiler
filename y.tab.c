/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     INC_OP = 261,
     DEC_OP = 262,
     LEFT_OP = 263,
     RIGHT_OP = 264,
     LE_OP = 265,
     GE_OP = 266,
     EQ_OP = 267,
     NE_OP = 268,
     AND_OP = 269,
     OR_OP = 270,
     MOD = 271,
     CHAR = 272,
     INT = 273,
     FLOAT = 274,
     DOUBLE = 275,
     CONST = 276,
     VOID = 277,
     CASE = 278,
     DEFAULT = 279,
     IF = 280,
     ELSE = 281,
     SWITCH = 282,
     WHILE = 283,
     DO = 284,
     FOR = 285,
     CONTINUE = 286,
     BREAK = 287,
     RETURN = 288
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define INC_OP 261
#define DEC_OP 262
#define LEFT_OP 263
#define RIGHT_OP 264
#define LE_OP 265
#define GE_OP 266
#define EQ_OP 267
#define NE_OP 268
#define AND_OP 269
#define OR_OP 270
#define MOD 271
#define CHAR 272
#define INT 273
#define FLOAT 274
#define DOUBLE 275
#define CONST 276
#define VOID 277
#define CASE 278
#define DEFAULT 279
#define IF 280
#define ELSE 281
#define SWITCH 282
#define WHILE 283
#define DO 284
#define FOR 285
#define CONTINUE 286
#define BREAK 287
#define RETURN 288




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

	#include <stdio.h>
	#include <string.h>
    int yylex();
    int yyerror(char *s);
	char tmp[80000];


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "parser.y"
{
	char stringval[10000];
}
/* Line 193 of yacc.c.  */
#line 174 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 187 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   288

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNRULES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,     2,    50,     2,
      35,    36,    44,    46,    42,    47,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
      48,    39,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,    52,    41,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    16,    18,    20,
      22,    24,    26,    30,    36,    42,    50,    60,    63,    66,
      69,    73,    76,    82,    92,    97,   102,   104,   106,   108,
     112,   119,   125,   127,   131,   135,   138,   140,   142,   144,
     146,   148,   150,   152,   154,   157,   159,   163,   168,   172,
     174,   176,   178,   180,   183,   186,   191,   193,   196,   199,
     202,   204,   208,   212,   216,   218,   222,   226,   228,   230,
     234,   238,   242,   246,   248,   252,   256,   258,   262,   264,
     268,   270,   274,   276,   280,   282,   286,   288,   290
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    56,    -1,    55,    56,    -1,
      71,    34,    -1,    61,    34,    -1,    64,    -1,    57,    -1,
      58,    -1,    59,    -1,    60,    -1,    25,    71,    66,    -1,
      25,    71,    66,    26,    66,    -1,    28,    35,    71,    36,
      66,    -1,    29,    66,    28,    35,    71,    36,    34,    -1,
      30,    35,    71,    34,    71,    34,    71,    36,    66,    -1,
      31,    34,    -1,    32,    34,    -1,    33,    34,    -1,    33,
      71,    34,    -1,    69,    67,    -1,    69,    67,    37,    68,
      38,    -1,    69,    67,    37,    68,    38,    39,    40,    63,
      41,    -1,    69,    67,    39,    71,    -1,    69,    67,    37,
      38,    -1,    67,    -1,    68,    -1,    62,    -1,    63,    42,
      62,    -1,    69,    67,    35,    65,    36,    66,    -1,    69,
      67,    35,    36,    66,    -1,    61,    -1,    65,    42,    61,
      -1,    40,    55,    41,    -1,    40,    41,    -1,     3,    -1,
       4,    -1,    70,    -1,    18,    -1,    17,    -1,    19,    -1,
      20,    -1,    22,    -1,    21,    70,    -1,    87,    -1,    35,
      71,    36,    -1,    67,    35,    72,    36,    -1,    72,    42,
      71,    -1,    71,    -1,    67,    -1,    68,    -1,    73,    -1,
      74,     6,    -1,    74,     7,    -1,    74,    37,    71,    38,
      -1,    74,    -1,     6,    75,    -1,     7,    75,    -1,    43,
      75,    -1,    75,    -1,    76,    44,    75,    -1,    76,    45,
      75,    -1,    76,    16,    75,    -1,    76,    -1,    77,    46,
      76,    -1,    77,    47,    76,    -1,    77,    -1,    78,    -1,
      79,    10,    78,    -1,    79,    11,    78,    -1,    79,    48,
      78,    -1,    79,    49,    78,    -1,    79,    -1,    80,    12,
      79,    -1,    80,    13,    79,    -1,    80,    -1,    81,    50,
      80,    -1,    81,    -1,    82,    51,    81,    -1,    82,    -1,
      83,    52,    82,    -1,    83,    -1,    84,    14,    83,    -1,
      84,    -1,    85,    15,    84,    -1,    85,    -1,    86,    -1,
      75,    39,    87,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    71,    75,    82,    86,    90,    94,    98,
     102,   106,   118,   122,   133,   137,   144,   155,   159,   163,
     167,   174,   178,   182,   186,   190,   197,   201,   208,   212,
     218,   222,   229,   233,   241,   245,   252,   259,   266,   273,
     277,   281,   285,   289,   293,   300,   304,   308,   315,   319,
     327,   331,   338,   342,   346,   350,   357,   361,   365,   369,
     376,   380,   384,   388,   396,   400,   404,   411,   426,   430,
     434,   438,   442,   449,   453,   457,   464,   468,   475,   479,
     486,   490,   497,   501,   508,   512,   519,   526,   530
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MOD", "CHAR", "INT",
  "FLOAT", "DOUBLE", "CONST", "VOID", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "CONTINUE", "BREAK", "RETURN", "';'",
  "'('", "')'", "'['", "']'", "'='", "'{'", "'}'", "','", "'!'", "'*'",
  "'/'", "'+'", "'-'", "'<'", "'>'", "'&'", "'^'", "'|'", "$accept",
  "program", "stmts", "stmt", "if_stmt", "while_stmt", "for_stmt",
  "jump_stmt", "var_decl", "direct_decl", "argument_expr_list",
  "func_decl", "para_list", "block", "ident", "numeric", "typename",
  "primary_typename", "expr", "call_args", "primary_expr", "postfix_expr",
  "unary_expr", "multiplicative_expr", "additive_expr", "shift_expr",
  "relational_expr", "equality_expr", "and_expr", "exclusive_or_expr",
  "inclusive_or_expr", "logical_and_expr", "logical_or_expr",
  "conditional_expr", "assignment_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    59,    40,    41,    91,    93,    61,
     123,   125,    44,    33,    42,    47,    43,    45,    60,    62,
      38,    94,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    58,    58,    59,    60,    60,    60,
      60,    61,    61,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    68,    69,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    72,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      76,    76,    76,    76,    77,    77,    77,    78,    79,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    87,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     5,     5,     7,     9,     2,     2,     2,
       3,     2,     5,     9,     4,     4,     1,     1,     1,     3,
       6,     5,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     4,     3,     1,
       1,     1,     1,     2,     2,     4,     1,     2,     2,     2,
       1,     3,     3,     3,     1,     3,     3,     1,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    36,    37,     0,     0,    40,    39,    41,    42,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     8,     9,    10,    11,     0,     7,    50,
      51,     0,    38,     0,    52,    56,    60,    64,    67,    68,
      73,    76,    78,    80,    82,    84,    86,    87,    45,    50,
      57,    58,    44,     0,     0,     0,     0,     0,    17,    18,
      19,     0,     0,    59,     1,     4,     6,     0,    21,     5,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    35,     0,     0,     0,    20,    46,    49,     0,
       0,     0,     0,     0,    88,    63,    61,    62,    60,    65,
      66,    69,    70,    71,    72,    74,    75,    77,    79,    81,
      83,    85,     0,     0,    34,     0,     0,    47,     0,     0,
      32,     0,     0,    25,     0,    24,    55,    13,    14,     0,
       0,    48,    31,     0,     0,    21,    22,     0,     0,    30,
      33,     0,    15,     0,     0,     0,    28,     0,    26,    27,
      16,    23,     0,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,    23,    24,    25,    26,    27,   156,
     157,    28,   131,    56,    49,    30,    31,    32,    33,    99,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -97
static const yytype_int16 yypact[] =
{
     245,   -97,   -97,    19,    19,   -97,   -97,   -97,   -97,    87,
     -97,    26,   -31,   -16,     1,     6,    11,     9,    26,    19,
      53,   245,   -97,   -97,   -97,   -97,   -97,    22,   -97,    25,
     -97,    60,   -97,    34,   -97,    28,    49,     3,    52,   -97,
      27,    15,    23,    35,    40,    96,   101,   -97,   -97,   -97,
     -97,   -97,   -97,   -16,    26,   179,    91,    26,   -97,   -97,
     -97,    93,    98,   -97,   -97,   -97,   -97,    26,    50,   -97,
     -97,   -97,    26,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
     103,    99,   -97,   212,   102,   104,   -97,   -97,   -97,   -22,
      61,     4,    26,    95,   -97,   -97,   -97,   -97,   -97,     3,
       3,   -97,   -97,   -97,   -97,    27,    27,    15,    23,    35,
      40,    96,   -16,   -16,   -97,    26,    26,   -97,    26,   -16,
     -97,    48,    60,   -97,   105,   -97,   -97,   -97,   -97,   100,
     107,   -97,   -97,   -16,    87,     2,   106,   108,    26,   -97,
     -97,   109,   -97,   110,    97,   -16,   -97,    80,   -97,   -97,
     -97,   -97,    97,   -97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,    84,   -19,   -97,   -97,   -97,   -97,   -94,   -18,
     -97,   -97,   -97,   -52,     0,   -96,   -93,   138,    -8,   -97,
     -97,   -97,    92,    46,   -97,    33,    47,    65,    66,    64,
      67,    68,   -97,   -97,    83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,    90,    65,    53,    54,   134,   130,   132,     2,    61,
      62,    29,     1,     2,   127,     3,     4,    29,    29,    74,
     128,    29,     1,     2,    55,     3,     4,    83,    84,     1,
       2,    68,     3,     4,    70,    71,    57,    79,    80,   101,
      58,   102,   133,    60,    18,    59,    91,    75,    76,    95,
     150,   132,    19,    64,    29,    29,    66,    29,   159,    98,
      67,    18,    19,     1,   103,    72,   159,    29,    69,    19,
     137,   138,    29,    85,    65,    81,    82,   142,     5,     6,
       7,     8,     9,    10,   143,   100,    86,   101,    73,   102,
     144,   149,    87,    29,   135,    50,    51,   129,    77,    78,
       1,     2,    29,   160,     5,     6,     7,     8,     9,    10,
      88,    63,   111,   112,   113,   114,    89,   139,   140,    94,
     141,   161,   162,   109,   110,    29,    29,    96,    29,   122,
     115,   116,   145,   136,    97,   123,   147,   125,   126,    93,
     153,   148,   152,   146,   163,   151,   155,    52,    29,   154,
     117,   119,   118,     0,   158,   120,   104,   121,     0,     0,
       0,     0,   158,     0,     0,     0,   105,   106,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,     1,     2,     0,     3,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,    10,     0,     0,    11,     0,     0,    12,    13,    14,
      15,    16,    17,     0,    18,     1,     2,     0,     3,     4,
      92,     0,    19,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,     0,     0,    11,     0,     0,
      12,    13,    14,    15,    16,    17,     0,    18,     1,     2,
       0,     3,     4,   124,     0,    19,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,     0,     0,
      11,     0,     0,    12,    13,    14,    15,    16,    17,     0,
      18,     0,     0,     0,     0,     0,     0,     0,    19
};

static const yytype_int16 yycheck[] =
{
       0,    53,    21,    11,    35,   101,   100,   100,     4,    17,
      18,    11,     3,     4,    36,     6,     7,    17,    18,    16,
      42,    21,     3,     4,    40,     6,     7,    12,    13,     3,
       4,    31,     6,     7,     6,     7,    35,    10,    11,    37,
      34,    39,    38,    34,    35,    34,    54,    44,    45,    57,
     144,   144,    43,     0,    54,    55,    34,    57,   154,    67,
      35,    35,    43,     3,    72,    37,   162,    67,    34,    43,
     122,   123,    72,    50,    93,    48,    49,   129,    17,    18,
      19,    20,    21,    22,    36,    35,    51,    37,    39,    39,
      42,   143,    52,    93,   102,     3,     4,    36,    46,    47,
       3,     4,   102,   155,    17,    18,    19,    20,    21,    22,
      14,    19,    79,    80,    81,    82,    15,   125,   126,    28,
     128,    41,    42,    77,    78,   125,   126,    34,   128,    26,
      83,    84,   132,    38,    36,    36,    36,    35,    34,    55,
     148,    34,    34,    38,   162,    39,    36,     9,   148,    40,
      85,    87,    86,    -1,   154,    88,    73,    89,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    35,     3,     4,    -1,     6,     7,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,     3,     4,
      -1,     6,     7,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    32,    33,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,    17,    18,    19,    20,    21,
      22,    25,    28,    29,    30,    31,    32,    33,    35,    43,
      54,    55,    56,    57,    58,    59,    60,    61,    64,    67,
      68,    69,    70,    71,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    67,
      75,    75,    70,    71,    35,    40,    66,    35,    34,    34,
      34,    71,    71,    75,     0,    56,    34,    35,    67,    34,
       6,     7,    37,    39,    16,    44,    45,    46,    47,    10,
      11,    48,    49,    12,    13,    50,    51,    52,    14,    15,
      66,    71,    41,    55,    28,    71,    34,    36,    71,    72,
      35,    37,    39,    71,    87,    75,    75,    75,    75,    76,
      76,    78,    78,    78,    78,    79,    79,    80,    81,    82,
      83,    84,    26,    36,    41,    35,    34,    36,    42,    36,
      61,    65,    69,    38,    68,    71,    38,    66,    66,    71,
      71,    71,    66,    36,    42,    67,    38,    36,    34,    66,
      61,    39,    34,    71,    40,    36,    62,    63,    67,    68,
      66,    41,    42,    62
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 63 "parser.y"
    {
		sprintf(tmp, "( %s )", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
		printf("%s\n", (yyval.stringval));
	}
    break;

  case 3:
#line 71 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 4:
#line 75 "parser.y"
    {
		sprintf(tmp, "%s %s", (yyvsp[(1) - (2)].stringval), (yyvsp[(2) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 5:
#line 82 "parser.y"
    {
		sprintf(tmp, "( %s ; )", (yyvsp[(1) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 6:
#line 86 "parser.y"
    {
		sprintf(tmp, "( %s ; )", (yyvsp[(1) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 7:
#line 90 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 8:
#line 94 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 9:
#line 98 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 10:
#line 102 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 11:
#line 106 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 12:
#line 118 "parser.y"
    {
		sprintf(tmp, "( if ( %s ) ) %s", (yyvsp[(2) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 13:
#line 122 "parser.y"
    {
		sprintf(tmp, "( if ( %s ) %s else %s )", (yyvsp[(2) - (5)].stringval), (yyvsp[(3) - (5)].stringval), (yyvsp[(5) - (5)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 14:
#line 133 "parser.y"
    {
		sprintf(tmp, "( while ( %s ) ( %s ) )", (yyvsp[(3) - (5)].stringval), (yyvsp[(5) - (5)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 15:
#line 137 "parser.y"
    {
		sprintf(tmp, "( do ( %s ) while ( %s ) )", (yyvsp[(2) - (7)].stringval), (yyvsp[(5) - (7)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 16:
#line 144 "parser.y"
    {
		sprintf (tmp, "( for ( %s ; %s ; %s ) ( %s ) )", (yyvsp[(3) - (9)].stringval), (yyvsp[(5) - (9)].stringval), (yyvsp[(7) - (9)].stringval), (yyvsp[(9) - (9)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 17:
#line 155 "parser.y"
    {
		sprintf(tmp, "( %s ; )", (yyvsp[(1) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 18:
#line 159 "parser.y"
    {
		sprintf(tmp, "( %s ; )", (yyvsp[(1) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 19:
#line 163 "parser.y"
    {
		sprintf(tmp, "( %s ; )", (yyvsp[(1) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 20:
#line 167 "parser.y"
    {
		sprintf(tmp, "( %s %s ; )", (yyvsp[(1) - (3)].stringval), (yyvsp[(2) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 21:
#line 174 "parser.y"
    {
		sprintf(tmp, "%s %s", (yyvsp[(1) - (2)].stringval), (yyvsp[(2) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 22:
#line 178 "parser.y"
    {
		sprintf(tmp, "%s %s [ %s ]", (yyvsp[(1) - (5)].stringval), (yyvsp[(2) - (5)].stringval), (yyvsp[(4) - (5)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 23:
#line 182 "parser.y"
    {
		sprintf(tmp, "%s %s [ %s ] = { %s }", (yyvsp[(1) - (9)].stringval), (yyvsp[(2) - (9)].stringval), (yyvsp[(4) - (9)].stringval), (yyvsp[(8) - (9)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 24:
#line 186 "parser.y"
    {
		sprintf(tmp, "%s %s = %s", (yyvsp[(1) - (4)].stringval), (yyvsp[(2) - (4)].stringval), (yyvsp[(4) - (4)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 25:
#line 190 "parser.y"
    {
		sprintf(tmp, "%s %s [ ]", (yyvsp[(1) - (4)].stringval), (yyvsp[(2) - (4)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 26:
#line 197 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 27:
#line 201 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 28:
#line 208 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 29:
#line 212 "parser.y"
    {
		sprintf(tmp, "%s , %s", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 30:
#line 218 "parser.y"
    {
		sprintf(tmp, "( %s %s ( %s ) %s )", (yyvsp[(1) - (6)].stringval), (yyvsp[(2) - (6)].stringval), (yyvsp[(4) - (6)].stringval), (yyvsp[(6) - (6)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 31:
#line 222 "parser.y"
    {
		sprintf(tmp, "( %s %s ( ) %s )", (yyvsp[(1) - (5)].stringval), (yyvsp[(2) - (5)].stringval), (yyvsp[(5) - (5)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 32:
#line 229 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 33:
#line 233 "parser.y"
    {
		sprintf(tmp, "%s , %s", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 34:
#line 241 "parser.y"
    {
		sprintf(tmp, "{ %s }", (yyvsp[(2) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 35:
#line 245 "parser.y"
    {
		sprintf(tmp, "{ }");
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 36:
#line 252 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 37:
#line 259 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 38:
#line 266 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 39:
#line 273 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 40:
#line 277 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 41:
#line 281 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 42:
#line 285 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 43:
#line 289 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 44:
#line 293 "parser.y"
    {
		sprintf(tmp, "%s %s", (yyvsp[(1) - (2)].stringval), (yyvsp[(2) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 45:
#line 300 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 46:
#line 304 "parser.y"
    {
		sprintf(tmp, "( %s )", (yyvsp[(2) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 47:
#line 308 "parser.y"
    {
		sprintf(tmp, "( %s ( %s ) )", (yyvsp[(1) - (4)].stringval), (yyvsp[(3) - (4)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 48:
#line 315 "parser.y"
    {
		sprintf(tmp, "%s , %s", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 49:
#line 319 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 50:
#line 327 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 51:
#line 331 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 52:
#line 338 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 53:
#line 342 "parser.y"
    {
		sprintf(tmp, "( %s ++ )", (yyvsp[(1) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 54:
#line 346 "parser.y"
    {
		sprintf(tmp, "( %s -- )", (yyvsp[(1) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 55:
#line 350 "parser.y"
    {
		sprintf(tmp, "( %s [ %s ] )", (yyvsp[(1) - (4)].stringval), (yyvsp[(3) - (4)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 56:
#line 357 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 57:
#line 361 "parser.y"
    {
		sprintf(tmp, "( ++ %s )", (yyvsp[(2) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 58:
#line 365 "parser.y"
    {
		sprintf(tmp, "( -- %s )", (yyvsp[(2) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 59:
#line 369 "parser.y"
    {
		sprintf(tmp, "( ! %s )", (yyvsp[(2) - (2)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 60:
#line 376 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 61:
#line 380 "parser.y"
    {
		sprintf(tmp, "( %s * %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 62:
#line 384 "parser.y"
    {
		sprintf(tmp, "( %s / %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 63:
#line 388 "parser.y"
    {
		sprintf(tmp, "( %s %s %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(2) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 64:
#line 396 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 65:
#line 400 "parser.y"
    {
		sprintf(tmp, "( %s + %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 66:
#line 404 "parser.y"
    {
		sprintf(tmp, "( %s - %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 67:
#line 411 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 68:
#line 426 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 69:
#line 430 "parser.y"
    {
		sprintf(tmp, "( %s <= %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 70:
#line 434 "parser.y"
    {
		sprintf(tmp, "( %s >= %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 71:
#line 438 "parser.y"
    {
		sprintf(tmp, "( %s < %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 72:
#line 442 "parser.y"
    {
		sprintf(tmp, "( %s > %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 73:
#line 449 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 74:
#line 453 "parser.y"
    {
		sprintf(tmp, "%s == %s", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 75:
#line 457 "parser.y"
    {
		sprintf(tmp, "%s != %s", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 76:
#line 464 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 77:
#line 468 "parser.y"
    {
		sprintf(tmp, "( %s & %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 78:
#line 475 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 79:
#line 479 "parser.y"
    {
		sprintf(tmp, "( %s ^ %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 80:
#line 486 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 81:
#line 490 "parser.y"
    {
		sprintf(tmp, "( %s | %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 82:
#line 497 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 83:
#line 501 "parser.y"
    {
		sprintf(tmp, "( %s && %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 84:
#line 508 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 85:
#line 512 "parser.y"
    {
		sprintf(tmp, "( %s || %s )", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 86:
#line 519 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 87:
#line 526 "parser.y"
    {
		sprintf(tmp, "%s", (yyvsp[(1) - (1)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;

  case 88:
#line 530 "parser.y"
    {
		sprintf(tmp, "%s = %s", (yyvsp[(1) - (3)].stringval), (yyvsp[(3) - (3)].stringval));
		strcpy((yyval.stringval), tmp);
	}
    break;


/* Line 1267 of yacc.c.  */
#line 2255 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 536 "parser.y"


int main(){
	yyparse();
	return 0;
}


int yyerror (char *s) {
   fprintf (stderr, "%s\n", s);
   return 0;
}
