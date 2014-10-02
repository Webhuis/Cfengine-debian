/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "cf3parse.y" /* yacc.c:339  */


/*
   Copyright (C) CFEngine AS

   This file is part of CFEngine 3 - written and maintained by CFEngine AS.

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; version 3.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA

  To the extent this program is licensed as part of the Enterprise
  versions of CFEngine, the applicable Commercial Open Source License
  (COSL) may apply to this file if you as a licensee so wish it. See
  included file COSL.txt.
*/

#include "cf3.defs.h"
#include "parser.h"
#include "parser_state.h"

#include "fncall.h"
#include "rlist.h"
#include "item_lib.h"
#include "policy.h"
#include "mod_files.h"
#include "string_lib.h"
#include "logic_expressions.h"

// FIX: remove
#include "syntax.h"

#include <assert.h>

int yylex(void);
extern char *yytext;

static int RelevantBundle(const char *agent, const char *blocktype);
static bool LvalWantsBody(char *stype, char *lval);
static SyntaxTypeMatch CheckSelection(const char *type, const char *name, const char *lval, Rval rval);
static SyntaxTypeMatch CheckConstraint(const char *type, const char *lval, Rval rval, const PromiseTypeSyntax *ss);
static void fatal_yyerror(const char *s);

static void ParseErrorColumnOffset(int column_offset, const char *s, ...) FUNC_ATTR_PRINTF(2, 3);
static void ParseError(const char *s, ...) FUNC_ATTR_PRINTF(1, 2);
static void ParseWarning(unsigned int warning, const char *s, ...) FUNC_ATTR_PRINTF(2, 3);

static void ValidateClassLiteral(const char *class_literal);

static bool INSTALL_SKIP = false;
static size_t CURRENT_BLOCKID_LINE = 0;
static size_t CURRENT_PROMISER_LINE = 0;

#define YYMALLOC xmalloc

#define ParserDebug if (LogGetGlobalLevel() >= LOG_LEVEL_DEBUG) printf


#line 134 "cf3parse.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_CF_PARSE_H_INCLUDED
# define YY_YY_CF_PARSE_H_INCLUDED
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
    IDSYNTAX = 258,
    BLOCKID = 259,
    QSTRING = 260,
    CLASS = 261,
    PROMISE_TYPE = 262,
    BUNDLE = 263,
    BODY = 264,
    ASSIGN = 265,
    ARROW = 266,
    NAKEDVAR = 267,
    OP = 268,
    CP = 269,
    OB = 270,
    CB = 271
  };
#endif
/* Tokens.  */
#define IDSYNTAX 258
#define BLOCKID 259
#define QSTRING 260
#define CLASS 261
#define PROMISE_TYPE 262
#define BUNDLE 263
#define BODY 264
#define ASSIGN 265
#define ARROW 266
#define NAKEDVAR 267
#define OP 268
#define CP 269
#define OB 270
#define CB 271

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CF_PARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 217 "cf3parse.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  19
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    18,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    81,    82,    86,    87,    88,    94,
      96,   100,   116,   129,   136,   142,   143,   152,   166,   173,
     179,   185,   186,   195,   205,   213,   214,   215,   216,   222,
     227,   234,   235,   239,   244,   253,   252,   295,   299,   307,
     308,   312,   313,   314,   325,   329,   372,   373,   377,   378,
     382,   383,   388,   389,   414,   415,   425,   420,   451,   450,
     477,   488,   510,   511,   512,   533,   552,   553,   558,   631,
     651,   659,   658,   710,   711,   715,   716,   720,   721,   728,
     808,   827,   848,   852,   860,   874,   894,   901,   908,   925,
     934,   947,   955,   963,   967,   968,   969,   970,   990,   996,
    1004,  1012,  1019,  1027,  1031,  1035,  1048,  1056,  1055,  1081,
    1082,  1083,  1084,  1092,  1099,  1108,  1117,  1126
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDSYNTAX", "BLOCKID", "QSTRING",
  "CLASS", "PROMISE_TYPE", "BUNDLE", "BODY", "ASSIGN", "ARROW", "NAKEDVAR",
  "OP", "CP", "OB", "CB", "','", "';'", "$accept", "specification",
  "blocks", "block", "bundle", "body", "bundletype", "bundletype_values",
  "bundleid", "bundleid_values", "bodytype", "bodytype_values", "bodyid",
  "bodyid_values", "typeid", "symbol", "arglist", "arglist_begin",
  "arglist_end", "aitems", "aitem", "bundlebody", "$@1", "body_begin",
  "bundle_decl", "bundle_statements", "bundle_statement", "promise_type",
  "classpromises_decl", "classpromises", "classpromise", "promise_decl",
  "promise_line", "promisee_statement", "$@2", "promiser_statement", "$@3",
  "promiser", "promiser_constraints_decl", "constraints_decl",
  "constraints", "constraint", "constraint_id", "bodybody", "$@4",
  "bodyattribs", "bodyattrib", "selection_line", "selection",
  "selection_id", "assign_type", "arrow_type", "class", "rval", "list",
  "litems", "litem", "functionid", "usefunction", "givearglist", "$@5",
  "gaitems", "gaitem", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    44,    59
};
# endif

#define YYPACT_NINF -98

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-98)))

#define YYTABLE_NINF -111

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      94,   -98,    67,    98,     9,    96,   -98,   -98,   -98,   -98,
     -98,   105,   -98,   -98,   -98,   106,   -98,   -98,   -98,   -98,
     -98,   -98,    -3,   -98,   -98,   -98,    -3,   -98,   -98,   -98,
      45,    36,    45,   -98,   -98,   -98,   -98,     0,   -98,   -98,
     -98,    24,   -98,   -98,   -98,    68,   109,   -98,    55,   -98,
     -98,    29,    14,   -98,    58,   -98,   -98,   -98,   -98,   -98,
      12,   -98,   -98,     5,    47,   -98,   -98,   -98,   -98,   -98,
     -98,    66,   -98,   -98,    -2,   -98,   -98,     1,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,    75,   -98,   -98,   -98,   -98,
       2,    75,   -98,    27,    64,   -98,    72,    50,   -98,   -98,
      85,   -98,   -98,   -98,   -98,     6,    71,   -98,    47,   -98,
     -98,    27,   -98,   -98,    72,    65,    10,   -98,   -98,   -98,
     -98,   110,    75,     2,   -98,   -98,    50,    30,   -98,   -98,
     -98,   -98,   -98,    27,   -98,    72,   -98,    69,    35,   -98,
      88,   -98,   -98
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     0,     0,     0,     0,     4,     6,     7,    13,
      23,     0,    11,    12,    19,     0,    17,    18,     1,     5,
      16,    24,    25,    14,    15,    22,    25,    20,    21,    29,
       0,     0,     0,    38,    37,     9,    35,    28,    33,    30,
      27,     0,    31,    71,    10,     0,     0,    26,     0,    43,
      45,     0,    40,    41,     0,    34,    32,    81,    80,    85,
       0,    73,    76,     0,     0,    75,    36,    42,    61,    60,
      44,     0,    48,    51,     0,    54,    55,     0,    50,    72,
      74,    78,    77,    83,    82,     0,    49,    52,    53,    84,
       0,     0,    92,    86,    87,    88,    89,     0,    79,    90,
       0,    91,    70,    69,    59,     0,    65,    66,     0,    56,
     102,    98,   104,    99,   100,     0,     0,   101,   107,   106,
      64,     0,     0,     0,    93,    97,     0,     0,    67,    68,
      57,    96,   117,   113,   114,   115,   116,     0,     0,   108,
       0,   112,   111
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -98,   -98,   -98,    17,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   111,   100,    90,   -98,    76,   -98,
      73,   -98,   -98,    86,   -98,   -98,    70,   -98,   -98,   -98,
      49,   -98,   -98,   -98,   -98,   -98,   -98,   -98,     3,   -98,
     -98,     4,   -98,   -98,   -98,   -98,    61,   -98,   -98,   -98,
      15,   -98,   -46,   -90,   -98,     7,   -98,   -98,   -97,   -98,
     -98,   -98,   -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    11,    12,    22,    23,
      15,    16,    26,    27,    13,    24,    30,    31,    40,    41,
      42,    35,    45,    36,    51,    52,    53,    54,    70,    71,
      72,    73,    74,    75,   123,    76,    90,    77,   104,   105,
     106,   107,   108,    44,    48,    60,    61,    62,    63,    64,
      85,    91,    65,    98,    99,   115,   116,   100,   101,   119,
     127,   137,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     117,   109,    88,   102,   -58,   103,    81,   120,    78,    18,
      29,   125,    89,    57,   -34,    58,    87,   -34,    59,   -58,
     -62,    50,    19,    82,   -63,    78,   -95,   126,    79,   117,
     136,   132,   129,   133,   112,   134,   141,    37,    39,    38,
    -103,    46,   135,   136,  -109,    66,    33,  -109,    83,  -110,
      39,   110,  -110,   111,   112,   113,    57,    84,    58,    68,
      34,    59,   114,    69,    59,   -46,   -94,    68,     9,    49,
      10,    69,    59,   -47,   -46,    50,    92,  -104,    93,    94,
      95,   124,   -47,   139,   -39,  -105,   140,    96,   121,   132,
      97,   133,   112,   134,    -2,     1,    -3,     1,   118,    14,
     135,    10,     2,     3,     2,     3,    20,    25,    21,    21,
      55,   102,    38,   103,    17,    28,    32,    47,    43,    56,
      86,    80,    67,   122,   142,   128,   130,     0,     0,     0,
       0,     0,     0,   131
};

static const yytype_int16 yycheck[] =
{
      97,    91,     1,     1,     3,     3,     1,     1,    54,     0,
      13,     1,    11,     1,    14,     3,    18,    17,     6,    18,
      18,     7,     5,    18,    18,    71,    16,    17,    16,   126,
     127,     1,   122,     3,     4,     5,     1,     1,    14,     3,
      13,    17,    12,   140,    14,    16,     1,    17,     1,    14,
      14,     1,    17,     3,     4,     5,     1,    10,     3,     1,
      15,     6,    12,     5,     6,     7,    16,     1,     1,     1,
       3,     5,     6,     7,    16,     7,     1,    13,     3,     4,
       5,    16,    16,    14,    16,    13,    17,    12,    17,     1,
      15,     3,     4,     5,     0,     1,     0,     1,    13,     1,
      12,     3,     8,     9,     8,     9,     1,     1,     3,     3,
       1,     1,     3,     3,     3,    15,    26,    41,    32,    46,
      71,    60,    52,   108,   140,   121,   123,    -1,    -1,    -1,
      -1,    -1,    -1,   126
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     8,     9,    20,    21,    22,    23,    24,     1,
       3,    25,    26,    33,     1,    29,    30,    33,     0,    22,
       1,     3,    27,    28,    34,     1,    31,    32,    34,    13,
      35,    36,    35,     1,    15,    40,    42,     1,     3,    14,
      37,    38,    39,    42,    62,    41,    17,    37,    63,     1,
       7,    43,    44,    45,    46,     1,    39,     1,     3,     6,
      64,    65,    66,    67,    68,    71,    16,    45,     1,     5,
      47,    48,    49,    50,    51,    52,    54,    56,    71,    16,
      65,     1,    18,     1,    10,    69,    49,    18,     1,    11,
      55,    70,     1,     3,     4,     5,    12,    15,    72,    73,
      76,    77,     1,     3,    57,    58,    59,    60,    61,    72,
       1,     3,     4,     5,    12,    74,    75,    77,    13,    78,
       1,    17,    69,    53,    16,     1,    17,    79,    60,    72,
      57,    74,     1,     3,     5,    12,    77,    80,    81,    14,
      17,     1,    81
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    19,    20,    20,    21,    21,    22,    22,    22,    23,
      24,    25,    26,    26,    27,    28,    28,    29,    30,    30,
      31,    32,    32,    33,    34,    35,    35,    35,    35,    36,
      37,    38,    38,    39,    39,    41,    40,    42,    42,    43,
      43,    44,    44,    44,    45,    46,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    53,    52,    55,    54,
      56,    56,    57,    57,    57,    58,    59,    59,    60,    61,
      61,    63,    62,    64,    64,    65,    65,    66,    66,    67,
      68,    68,    69,    69,    70,    71,    72,    72,    72,    72,
      72,    72,    72,    73,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    76,    76,    76,    77,    79,    78,    80,
      80,    80,    80,    81,    81,    81,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     5,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     2,     2,     1,
       1,     1,     3,     1,     1,     0,     4,     1,     1,     0,
       1,     1,     2,     1,     2,     1,     0,     1,     1,     2,
       1,     1,     2,     2,     1,     1,     0,     5,     0,     3,
       1,     1,     0,     1,     2,     1,     1,     3,     3,     1,
       1,     0,     4,     1,     2,     1,     1,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     4,     0,
       1,     3,     2,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 8:
#line 89 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParseError("Expected 'bundle' or 'body' keyword, wrong input '%s'", yytext);
                           YYABORT;
                       }
#line 1415 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 11:
#line 101 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("P:bundle:%s\n", P.blocktype);
                           P.block = "bundle";
                           RvalDestroy(P.rval);
                           P.rval = RvalNew(NULL, RVAL_TYPE_NOPROMISEE);
                           RlistDestroy(P.currentRlist);
                           P.currentRlist = NULL;
                           if (P.currentstring)
                           {
                               free(P.currentstring);
                           }
                           P.currentstring = NULL;
                           strcpy(P.blockid,"");
                       }
#line 1434 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 117 "cf3parse.y" /* yacc.c:1646  */
    {
                           /* FIXME: We keep it here, because we skip unknown
                            * promise bundles. Ought to be moved to
                            * after-parsing step once we know how to deal with
                            * it */

                           if (!BundleTypeCheck(P.blocktype))
                           {
                               ParseError("Unknown bundle type '%s'", P.blocktype);
                               INSTALL_SKIP = true;
                           }
                       }
#line 1451 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 13:
#line 130 "cf3parse.y" /* yacc.c:1646  */
    {
                           yyclearin;
                           ParseError("Expected bundle type, wrong input '%s'", yytext);
                           INSTALL_SKIP = true;
                       }
#line 1461 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 137 "cf3parse.y" /* yacc.c:1646  */
    {
                          ParserDebug("\tP:bundle:%s:%s\n", P.blocktype, P.blockid);
                          CURRENT_BLOCKID_LINE = P.line_no;
                       }
#line 1470 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 16:
#line 144 "cf3parse.y" /* yacc.c:1646  */
    {
                           yyclearin;
                           ParseError("Expected bundle identifier, wrong input '%s'", yytext);
                           INSTALL_SKIP = true;
                       }
#line 1480 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 153 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("P:body:%s\n", P.blocktype);
                           P.block = "body";
                           strcpy(P.blockid,"");
                           RlistDestroy(P.currentRlist);
                           P.currentRlist = NULL;
                           if (P.currentstring)
                           {
                               free(P.currentstring);
                           }
                           P.currentstring = NULL;
                       }
#line 1497 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 167 "cf3parse.y" /* yacc.c:1646  */
    {
                           if (!BodySyntaxGet(P.blocktype))
                           {
                               ParseError("Unknown body type '%s'", P.blocktype);
                           }
                       }
#line 1508 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 174 "cf3parse.y" /* yacc.c:1646  */
    {
                           yyclearin;
                           ParseError("Expected body type, wrong input '%s'", yytext);
                       }
#line 1517 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 20:
#line 180 "cf3parse.y" /* yacc.c:1646  */
    {
                          ParserDebug("\tP:body:%s:%s\n", P.blocktype, P.blockid);
                          CURRENT_BLOCKID_LINE = P.line_no;
                       }
#line 1526 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 187 "cf3parse.y" /* yacc.c:1646  */
    {
                           yyclearin;
                           ParseError("Expected body identifier, wrong input '%s'", yytext);
                           INSTALL_SKIP = true;
                       }
#line 1536 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 196 "cf3parse.y" /* yacc.c:1646  */
    {
                           strncpy(P.blocktype,P.currentid,CF_MAXVARSIZE);

                           RlistDestroy(P.useargs);
                           P.useargs = NULL;
                       }
#line 1547 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 206 "cf3parse.y" /* yacc.c:1646  */
    {
                           strncpy(P.blockid,P.currentid,CF_MAXVARSIZE);
                           P.offsets.last_block_id = P.offsets.last_id;
                       }
#line 1556 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 28:
#line 217 "cf3parse.y" /* yacc.c:1646  */
    {
                          yyclearin;
                          ParseError("Error in bundle parameter list, expected ')', wrong input '%s'", yytext);
                       }
#line 1565 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 29:
#line 223 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("P:%s:%s:%s arglist begin:%s\n", P.block,P.blocktype,P.blockid, yytext);
                       }
#line 1573 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 228 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("P:%s:%s:%s arglist end:%s\n", P.block,P.blocktype,P.blockid, yytext);
                       }
#line 1581 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 240 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("P:%s:%s:%s  arg id: %s\n", P.block,P.blocktype,P.blockid, P.currentid);
                           RlistAppendScalar(&(P.useargs),P.currentid);
                       }
#line 1590 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 245 "cf3parse.y" /* yacc.c:1646  */
    {
                          yyclearin;
                          ParseError("Expected identifier, wrong input '%s'", yytext);
                       }
#line 1599 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 35:
#line 253 "cf3parse.y" /* yacc.c:1646  */
    {
                           if (RelevantBundle(CF_AGENTTYPES[P.agent_type], P.blocktype))
                           {
                               INSTALL_SKIP = false;
                           }
                           else if (strcmp(CF_AGENTTYPES[P.agent_type], P.blocktype) != 0)
                           {
                               INSTALL_SKIP = true;
                           }

                           if (!INSTALL_SKIP)
                           {
                               P.currentbundle = PolicyAppendBundle(P.policy, P.current_namespace, P.blockid, P.blocktype, P.useargs, P.filename);
                               P.currentbundle->offset.line = CURRENT_BLOCKID_LINE;
                               P.currentbundle->offset.start = P.offsets.last_block_id;
                           }
                           else
                           {
                               P.currentbundle = NULL;
                           }

                           RlistDestroy(P.useargs);
                           P.useargs = NULL;
                       }
#line 1628 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 281 "cf3parse.y" /* yacc.c:1646  */
    {
                           INSTALL_SKIP = false;
                           P.offsets.last_id = -1;
                           P.offsets.last_string = -1;
                           P.offsets.last_class_id = -1;

                           if (P.currentbundle)
                           {
                               P.currentbundle->offset.end = P.offsets.current;
                           }
                       }
#line 1644 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 296 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("P:%s:%s:%s begin body open\n", P.block,P.blocktype,P.blockid);
                       }
#line 1652 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 300 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParseError("Expected body open '{', wrong input '%s'", yytext);
                       }
#line 1660 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 315 "cf3parse.y" /* yacc.c:1646  */
    {
                          INSTALL_SKIP = true;
                          ParseError("Expected promise type, got '%s'", yytext);
                          ParserDebug("P:promise_type:error yychar = %d, %c, yyempty = %d\n", yychar, yychar, YYEMPTY);
                          yyclearin; 
                       }
#line 1671 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 330 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s promise_type = %s\n", P.block, P.blocktype, P.blockid, P.currenttype);

                           const PromiseTypeSyntax *promise_type_syntax = PromiseTypeSyntaxGet(P.blocktype, P.currenttype);

                           if (promise_type_syntax)
                           {
                               switch (promise_type_syntax->status)
                               {
                               case SYNTAX_STATUS_DEPRECATED:
                                   ParseWarning(PARSER_WARNING_DEPRECATED, "Deprecated promise type '%s' in bundle type '%s'", promise_type_syntax->promise_type, promise_type_syntax->bundle_type);
                                   // Intentional fall
                               case SYNTAX_STATUS_NORMAL:
                                   if (strcmp(P.block, "bundle") == 0)
                                   {
                                       if (!INSTALL_SKIP)
                                       {
                                           P.currentstype = BundleAppendPromiseType(P.currentbundle,P.currenttype);
                                           P.currentstype->offset.line = P.line_no;
                                           P.currentstype->offset.start = P.offsets.last_promise_type_id;
                                       }
                                       else
                                       {
                                           P.currentstype = NULL;
                                       }
                                   }
                                   break;
                               case SYNTAX_STATUS_REMOVED:
                                   ParseWarning(PARSER_WARNING_REMOVED, "Removed promise type '%s' in bundle type '%s'", promise_type_syntax->promise_type, promise_type_syntax->bundle_type);
                                   INSTALL_SKIP = true;
                                   break;
                               }
                           }
                           else
                           {
                               ParseError("Unknown promise type '%s'", P.currenttype);
                               INSTALL_SKIP = true;
                           }
                       }
#line 1715 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 390 "cf3parse.y" /* yacc.c:1646  */
    {
                           /*
                            * Based on yychar display right error message
                           */
                           ParserDebug("P:promiser:error yychar = %d\n", yychar);
                           if (yychar =='-' || yychar == '>')
                           {
                              ParseError("Expected '->', got '%s'", yytext);
                           }
                           else if (yychar == IDSYNTAX)
                           {
                              ParseError("Expected attribute, got '%s'", yytext);
                           }
                           else if (yychar == ',')
                           {
                              ParseError("Expected attribute, got '%s' (comma after promiser is not allowed since 3.5.0)", yytext);
                           }
                           else
                           {
                              ParseError("Expected ';', got '%s'", yytext);
                           }
                           yyclearin;
                       }
#line 1743 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 425 "cf3parse.y" /* yacc.c:1646  */
    {
                           if (!INSTALL_SKIP)
                           {
                               if (!P.currentstype)
                               {
                                   ParseError("Missing promise type declaration");
                               }

                               P.currentpromise = PromiseTypeAppendPromise(P.currentstype, P.promiser,
                                                                           RvalCopy(P.rval),
                                                                           P.currentclasses ? P.currentclasses : "any");
                               P.currentpromise->offset.line = CURRENT_PROMISER_LINE;
                               P.currentpromise->offset.start = P.offsets.last_string;
                               P.currentpromise->offset.context = P.offsets.last_class_id;
                           }
                           else
                           {
                               P.currentpromise = NULL;
                           }
                       }
#line 1768 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 451 "cf3parse.y" /* yacc.c:1646  */
    {

                           if (!INSTALL_SKIP)
                           {
                               if (!P.currentstype)
                               {
                                   ParseError("Missing promise type declaration");
                               }

                               P.currentpromise = PromiseTypeAppendPromise(P.currentstype, P.promiser,
                                                                (Rval) { NULL, RVAL_TYPE_NOPROMISEE },
                                                                P.currentclasses ? P.currentclasses : "any");
                               P.currentpromise->offset.line = CURRENT_PROMISER_LINE;
                               P.currentpromise->offset.start = P.offsets.last_string;
                               P.currentpromise->offset.context = P.offsets.last_class_id;
                           }
                           else
                           {
                               P.currentpromise = NULL;
                           }
                       }
#line 1794 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 478 "cf3parse.y" /* yacc.c:1646  */
    {
                           if (P.promiser)
                           {
                               free(P.promiser);
                           }
                           P.promiser = P.currentstring;
                           P.currentstring = NULL;
                           CURRENT_PROMISER_LINE = P.line_no;
                           ParserDebug("\tP:%s:%s:%s:%s:%s promiser = %s\n", P.block, P.blocktype, P.blockid, P.currenttype, P.currentclasses ? P.currentclasses : "any", P.promiser);
                       }
#line 1809 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 489 "cf3parse.y" /* yacc.c:1646  */
    {
                          INSTALL_SKIP = true;
                          ParserDebug("P:promiser:qstring::error yychar = %d\n", yychar);

                          if (yychar == BUNDLE || yychar == BODY || yychar == YYEOF)
                          {
                             ParseError("Expected '}', got '%s'", yytext);
                             /*
                             YYABORT;
                             */
                          }
                          else
                          {
                             ParseError("Expected promiser string, got '%s'", yytext);
                          }

                          yyclearin;
                       }
#line 1832 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 513 "cf3parse.y" /* yacc.c:1646  */
    {
                                   /*
                                    * Based on next token id display right error message
                                   */
                                   ParserDebug("P:constraints_decl:error yychar = %d\n", yychar);
                                   if ( yychar == IDSYNTAX )
                                   {
                                       ParseError("Check previous line, Expected ',', got '%s'", yytext);
                                   }
                                   else
                                   {
                                       ParseError("Check previous line, Expected ';', got '%s'", yytext);
                                   }
                                   yyclearin;

                                }
#line 1853 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 534 "cf3parse.y" /* yacc.c:1646  */
    {
                           /* Don't free these */
                           strcpy(P.currentid,"");
                           RlistDestroy(P.currentRlist);
                           P.currentRlist = NULL;
                           free(P.promiser);
                           if (P.currentstring)
                           {
                               free(P.currentstring);
                           }
                           P.currentstring = NULL;
                           P.promiser = NULL;
                           P.promisee = NULL;
                           /* reset argptrs etc*/
                       }
#line 1873 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 561 "cf3parse.y" /* yacc.c:1646  */
    {
                           if (!INSTALL_SKIP)
                           {
                               const PromiseTypeSyntax *promise_type_syntax = PromiseTypeSyntaxGet(P.blocktype, P.currenttype);
                               assert(promise_type_syntax);

                               const ConstraintSyntax *constraint_syntax = PromiseTypeSyntaxGetConstraintSyntax(promise_type_syntax, P.lval);
                               if (constraint_syntax)
                               {
                                   switch (constraint_syntax->status)
                                   {
                                   case SYNTAX_STATUS_DEPRECATED:
                                       ParseWarning(PARSER_WARNING_DEPRECATED, "Deprecated constraint '%s' in promise type '%s'", constraint_syntax->lval, promise_type_syntax->promise_type);
                                       // Intentional fall
                                   case SYNTAX_STATUS_NORMAL:
                                       {
                                           {
                                               SyntaxTypeMatch err = CheckConstraint(P.currenttype, P.lval, P.rval, promise_type_syntax);
                                               if (err != SYNTAX_TYPE_MATCH_OK && err != SYNTAX_TYPE_MATCH_ERROR_UNEXPANDED)
                                               {
                                                   yyerror(SyntaxTypeMatchToString(err));
                                               }
                                           }

                                           if (P.rval.type == RVAL_TYPE_SCALAR && strcmp(P.lval, "ifvarclass") == 0)
                                           {
                                               ValidateClassLiteral(P.rval.item);
                                           }

                                           Constraint *cp = PromiseAppendConstraint(P.currentpromise, P.lval, RvalCopy(P.rval), P.references_body);
                                           cp->offset.line = P.line_no;
                                           cp->offset.start = P.offsets.last_id;
                                           cp->offset.end = P.offsets.current;
                                           cp->offset.context = P.offsets.last_class_id;
                                           P.currentstype->offset.end = P.offsets.current;

                                           // Cache whether there are subbundles for later $(this.promiser) logic

                                           if (strcmp(P.lval,"usebundle") == 0 || strcmp(P.lval,"edit_line") == 0
                                               || strcmp(P.lval,"edit_xml") == 0 || strcmp(P.lval,"home_bundle") == 0)
                                           {
                                               P.currentpromise->has_subbundles = true;
                                           }
                                       }
                                       break;
                                   case SYNTAX_STATUS_REMOVED:
                                       ParseWarning(PARSER_WARNING_REMOVED, "Removed constraint '%s' in promise type '%s'", constraint_syntax->lval, promise_type_syntax->promise_type);
                                       break;
                                   }
                               }
                               else
                               {
                                   ParseError("Unknown constraint '%s' in promise type '%s'", P.lval, promise_type_syntax->promise_type);
                               }

                               RvalDestroy(P.rval);
                               P.rval = RvalNew(NULL, RVAL_TYPE_NOPROMISEE);
                               strcpy(P.lval,"no lval");
                               RlistDestroy(P.currentRlist);
                               P.currentRlist = NULL;
                           }
                           else
                           {
                               RvalDestroy(P.rval);
                               P.rval = RvalNew(NULL, RVAL_TYPE_NOPROMISEE);
                           }
                       }
#line 1945 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 632 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s:%s:%s attribute = %s\n", P.block, P.blocktype, P.blockid, P.currenttype, P.currentclasses ? P.currentclasses : "any", P.promiser, P.currentid);

                           const PromiseTypeSyntax *promise_type_syntax = PromiseTypeSyntaxGet(P.blocktype, P.currenttype);
                           if (!promise_type_syntax)
                           {
                               ParseError("Invalid promise type '%s' in bundle '%s' of type '%s'", P.currenttype, P.blockid, P.blocktype);
                               INSTALL_SKIP = true;
                           }
                           else if (!PromiseTypeSyntaxGetConstraintSyntax(promise_type_syntax, P.currentid))
                           {
                               ParseError("Unknown attribute '%s' for promise type '%s' in bundle with type '%s'", P.currentid, P.currenttype, P.blocktype);
                               INSTALL_SKIP = true;
                           }

                           strncpy(P.lval,P.currentid,CF_MAXVARSIZE);
                           RlistDestroy(P.currentRlist);
                           P.currentRlist = NULL;
                       }
#line 1969 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 652 "cf3parse.y" /* yacc.c:1646  */
    {
                             ParseError("Expected attribute, got '%s'\n", yytext);
                       }
#line 1977 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 659 "cf3parse.y" /* yacc.c:1646  */
    {
                           const BodySyntax *body_syntax = BodySyntaxGet(P.blocktype);

                           if (body_syntax)
                           {
                               INSTALL_SKIP = false;

                               switch (body_syntax->status)
                               {
                               case SYNTAX_STATUS_DEPRECATED:
                                   ParseWarning(PARSER_WARNING_DEPRECATED, "Deprecated body '%s' of type '%s'", P.blockid, body_syntax->body_type);
                                   // intentional fall
                               case SYNTAX_STATUS_NORMAL:
                                   P.currentbody = PolicyAppendBody(P.policy, P.current_namespace, P.blockid, P.blocktype, P.useargs, P.filename);
                                   P.currentbody->offset.line = CURRENT_BLOCKID_LINE;
                                   P.currentbody->offset.start = P.offsets.last_block_id;
                                   break;

                               case SYNTAX_STATUS_REMOVED:
                                   ParseWarning(PARSER_WARNING_REMOVED, "Removed body '%s' of type '%s'", P.blockid, body_syntax->body_type);
                                   INSTALL_SKIP = true;
                                   break;
                               }
                           }
                           else
                           {
                               ParseError("Invalid body type '%s'", P.blocktype);
                               INSTALL_SKIP = true;
                           }

                           RlistDestroy(P.useargs);
                           P.useargs = NULL;

                           strcpy(P.currentid,"");
                       }
#line 2017 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 72:
#line 698 "cf3parse.y" /* yacc.c:1646  */
    {
                           P.offsets.last_id = -1;
                           P.offsets.last_string = -1;
                           P.offsets.last_class_id = -1;
                           if (P.currentbody)
                           {
                               P.currentbody->offset.end = P.offsets.current;
                           }
                       }
#line 2031 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 78:
#line 722 "cf3parse.y" /* yacc.c:1646  */
    {
                          ParseError("Expected ';' check previous statement, got '%s'", yytext);
                       }
#line 2039 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 79:
#line 731 "cf3parse.y" /* yacc.c:1646  */
    {

                           if (!INSTALL_SKIP)
                           {
                               const BodySyntax *body_syntax = BodySyntaxGet(P.blocktype);
                               assert(body_syntax);

                               const ConstraintSyntax *constraint_syntax = BodySyntaxGetConstraintSyntax(body_syntax->constraints, P.lval);
                               if (constraint_syntax)
                               {
                                   switch (constraint_syntax->status)
                                   {
                                   case SYNTAX_STATUS_DEPRECATED:
                                       ParseWarning(PARSER_WARNING_DEPRECATED, "Deprecated constraint '%s' in body type '%s'", constraint_syntax->lval, body_syntax->body_type);
                                       // Intentional fall
                                   case SYNTAX_STATUS_NORMAL:
                                       {
                                           SyntaxTypeMatch err = CheckSelection(P.blocktype, P.blockid, P.lval, P.rval);
                                           if (err != SYNTAX_TYPE_MATCH_OK && err != SYNTAX_TYPE_MATCH_ERROR_UNEXPANDED)
                                           {
                                               yyerror(SyntaxTypeMatchToString(err));
                                           }

                                           if (P.rval.type == RVAL_TYPE_SCALAR && strcmp(P.lval, "ifvarclass") == 0)
                                           {
                                               ValidateClassLiteral(P.rval.item);
                                           }

                                           Constraint *cp = NULL;
                                           if (P.currentclasses == NULL)
                                           {
                                               cp = BodyAppendConstraint(P.currentbody, P.lval, RvalCopy(P.rval), "any", P.references_body);
                                           }
                                           else
                                           {
                                               cp = BodyAppendConstraint(P.currentbody, P.lval, RvalCopy(P.rval), P.currentclasses, P.references_body);
                                           }
                                           cp->offset.line = P.line_no;
                                           cp->offset.start = P.offsets.last_id;
                                           cp->offset.end = P.offsets.current;
                                           cp->offset.context = P.offsets.last_class_id;
                                           break;
                                       }
                                   case SYNTAX_STATUS_REMOVED:
                                       ParseWarning(PARSER_WARNING_REMOVED, "Removed constraint '%s' in promise type '%s'", constraint_syntax->lval, body_syntax->body_type);
                                       break;
                                   }
                               }
                           }
                           else
                           {
                               RvalDestroy(P.rval);
                               P.rval = RvalNew(NULL, RVAL_TYPE_NOPROMISEE);
                           }

                           if (strcmp(P.blockid,"control") == 0 && strcmp(P.blocktype,"file") == 0)
                           {
                               if (strcmp(P.lval,"namespace") == 0)
                               {
                                   if (P.rval.type != RVAL_TYPE_SCALAR)
                                   {
                                       yyerror("namespace must be a constant scalar string");
                                   }
                                   else
                                   {
                                       free(P.current_namespace);
                                       P.current_namespace = xstrdup(P.rval.item);
                                   }
                               }
                           }
                           
                           RvalDestroy(P.rval);
                           P.rval = RvalNew(NULL, RVAL_TYPE_NOPROMISEE);
                       }
#line 2118 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 80:
#line 809 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s attribute = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentid);

                           if (!INSTALL_SKIP)
                           {
                               const BodySyntax *body_syntax = BodySyntaxGet(P.currentbody->type);

                               if (!body_syntax || !BodySyntaxGetConstraintSyntax(body_syntax->constraints, P.currentid))
                               {
                                   ParseError("Unknown selection '%s' for body type '%s'", P.currentid, P.currentbody->type);
                                   INSTALL_SKIP = true;
                               }

                               strncpy(P.lval,P.currentid,CF_MAXVARSIZE);
                           }
                           RlistDestroy(P.currentRlist);
                           P.currentRlist = NULL;
                       }
#line 2141 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 81:
#line 828 "cf3parse.y" /* yacc.c:1646  */
    {
                          ParserDebug("P:selection_id:idsyntax:error yychar = %d\n", yychar);

                          if ( yychar == BUNDLE || yychar == BODY || yychar == YYEOF )
                          {
                             ParseError("Expected '}', got '%s'", yytext);
                             /*
                             YYABORT;
                             */
                          }
                          else
                          {
                             ParseError("Expected attribute, got '%s'", yytext);
                          }

                          yyclearin;
                       }
#line 2163 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 82:
#line 849 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:=>\n");
                       }
#line 2171 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 83:
#line 853 "cf3parse.y" /* yacc.c:1646  */
    {
                          yyclearin;
                          ParseError("Expected '=>', got '%s'", yytext);
                       }
#line 2180 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 84:
#line 861 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:->\n");
                       }
#line 2188 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 85:
#line 875 "cf3parse.y" /* yacc.c:1646  */
    {
                           P.offsets.last_class_id = P.offsets.current - strlen(P.currentclasses) - 2;
                           ParserDebug("\tP:%s:%s:%s:%s class = %s\n", P.block, P.blocktype, P.blockid, P.currenttype, yytext);

                           /* class literal includes terminating :: */
                           /* Warning : AIX does not like yylen     */
                           char *literal = xstrndup(yytext, strlen(yytext) - 2);

                           ValidateClassLiteral(literal);

                           free(literal);
                       }
#line 2205 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 86:
#line 895 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s id rval, %s = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.lval, P.currentid);
                           RvalDestroy(P.rval);
                           P.rval = (Rval) { xstrdup(P.currentid), RVAL_TYPE_SCALAR };
                           P.references_body = true;
                       }
#line 2216 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 87:
#line 902 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s blockid rval, %s = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.lval, P.currentid);
                           RvalDestroy(P.rval);
                           P.rval = (Rval) { xstrdup(P.currentid), RVAL_TYPE_SCALAR };
                           P.references_body = true;
                       }
#line 2227 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 88:
#line 909 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s qstring rval, %s = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.lval, P.currentstring);
                           RvalDestroy(P.rval);
                           P.rval = (Rval) { P.currentstring, RVAL_TYPE_SCALAR };

                           P.currentstring = NULL;
                           P.references_body = false;

                           if (P.currentpromise)
                           {
                               if (LvalWantsBody(P.currentpromise->parent_promise_type->name, P.lval))
                               {
                                   yyerror("An rvalue is quoted, but we expect an unquoted body identifier");
                               }
                           }
                       }
#line 2248 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 89:
#line 926 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s nakedvar rval, %s = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.lval, P.currentstring);
                           RvalDestroy(P.rval);
                           P.rval = (Rval) { P.currentstring, RVAL_TYPE_SCALAR };

                           P.currentstring = NULL;
                           P.references_body = false;
                       }
#line 2261 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 90:
#line 935 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s install list =  %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.lval);
                           if (RlistLen(P.currentRlist) == 0)
                           {
                               RlistAppendScalar(&P.currentRlist, CF_NULL_VALUE);
                           }
                           RvalDestroy(P.rval);
                           P.rval = (Rval) { RlistCopy(P.currentRlist), RVAL_TYPE_LIST };
                           RlistDestroy(P.currentRlist);
                           P.currentRlist = NULL;
                           P.references_body = false;
                       }
#line 2278 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 91:
#line 948 "cf3parse.y" /* yacc.c:1646  */
    {
                           RvalDestroy(P.rval);
                           P.rval = (Rval) { P.currentfncall[P.arg_nesting+1], RVAL_TYPE_FNCALL };
                           P.currentfncall[P.arg_nesting+1] = NULL;
                           P.references_body = false;
                       }
#line 2289 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 92:
#line 956 "cf3parse.y" /* yacc.c:1646  */
    {
                           yyclearin;
                           ParseError("Invalid r-value type '%s'", yytext);
                       }
#line 2298 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 97:
#line 971 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("P:rval:list:error yychar = %d\n", yychar);
                           if ( yychar ==';' )
                           {
                               ParseError("Expected '}', wrong input '%s'", yytext);
                           }
                           else if ( yychar == ASSIGN )
                           {
                               ParseError("Check list statement  previous line, Expected '}', wrong input '%s'", yytext);
                           }
                           else
                           {
                               ParseError("Expected ',', wrong input '%s'", yytext);
                           }
                           yyclearin;
                       }
#line 2319 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 98:
#line 991 "cf3parse.y" /* yacc.c:1646  */
    { 
                           ParserDebug("\tP:%s:%s:%s:%s list append; id = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentid);
                           RlistAppendScalar((Rlist **)&P.currentRlist, P.currentid);
                       }
#line 2328 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 99:
#line 997 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s list append: qstring = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentstring);
                           RlistAppendScalar((Rlist **)&P.currentRlist,(void *)P.currentstring);
                           free(P.currentstring);
                           P.currentstring = NULL;
                       }
#line 2339 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1005 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s list append: nakedvar = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentstring);
                           RlistAppendScalar((Rlist **)&P.currentRlist,(void *)P.currentstring);
                           free(P.currentstring);
                           P.currentstring = NULL;
                       }
#line 2350 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1013 "cf3parse.y" /* yacc.c:1646  */
    {
                           RlistAppend(&P.currentRlist, P.currentfncall[P.arg_nesting+1], RVAL_TYPE_FNCALL);
                           FnCallDestroy(P.currentfncall[P.arg_nesting+1]);
                           P.currentfncall[P.arg_nesting+1] = NULL;
                       }
#line 2360 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1020 "cf3parse.y" /* yacc.c:1646  */
    {
                          yyclearin;
                          ParseError("Invalid input for a list item, got '%s'", yytext);
                       }
#line 2369 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1028 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s function id = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentid);
                       }
#line 2377 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1032 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s function blockid = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentid);
                       }
#line 2385 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1036 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s function nakedvar = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentstring);
                           strncpy(P.currentid,P.currentstring,CF_MAXVARSIZE); // Make a var look like an ID
                           free(P.currentstring);
                           P.currentstring = NULL;
                       }
#line 2396 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1049 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s Finished with function, now at level %d\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.arg_nesting);
                       }
#line 2404 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1056 "cf3parse.y" /* yacc.c:1646  */
    {
                           if (++P.arg_nesting >= CF_MAX_NESTING)
                           {
                               fatal_yyerror("Nesting of functions is deeper than recommended");
                           }
                           P.currentfnid[P.arg_nesting] = xstrdup(P.currentid);
                           ParserDebug("\tP:%s:%s:%s begin givearglist for function %s, level %d\n", P.block,P.blocktype,P.blockid, P.currentfnid[P.arg_nesting], P.arg_nesting );
                       }
#line 2417 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1068 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s end givearglist for function %s, level %d\n", P.block,P.blocktype,P.blockid, P.currentfnid[P.arg_nesting], P.arg_nesting );
                           P.currentfncall[P.arg_nesting] = FnCallNew(P.currentfnid[P.arg_nesting], P.giveargs[P.arg_nesting]);
                           P.giveargs[P.arg_nesting] = NULL;
                           strcpy(P.currentid,"");
                           free(P.currentfnid[P.arg_nesting]);
                           P.currentfnid[P.arg_nesting] = NULL;
                           P.arg_nesting--;
                       }
#line 2431 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1085 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParseError("Expected ',', wrong input '%s'", yytext);
                           yyclearin;
                       }
#line 2440 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1093 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("\tP:%s:%s:%s:%s function %s, id arg = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentfnid[P.arg_nesting], P.currentid);
                           /* currently inside a use function */
                           RlistAppendScalar(&P.giveargs[P.arg_nesting],P.currentid);
                       }
#line 2450 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1100 "cf3parse.y" /* yacc.c:1646  */
    {
                           /* currently inside a use function */
                           ParserDebug("\tP:%s:%s:%s:%s function %s, qstring arg = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentfnid[P.arg_nesting], P.currentstring);
                           RlistAppendScalar(&P.giveargs[P.arg_nesting],P.currentstring);
                           free(P.currentstring);
                           P.currentstring = NULL;
                       }
#line 2462 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1109 "cf3parse.y" /* yacc.c:1646  */
    {
                           /* currently inside a use function */
                           ParserDebug("\tP:%s:%s:%s:%s function %s, nakedvar arg = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentfnid[P.arg_nesting], P.currentstring);
                           RlistAppendScalar(&P.giveargs[P.arg_nesting],P.currentstring);
                           free(P.currentstring);
                           P.currentstring = NULL;
                       }
#line 2474 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1118 "cf3parse.y" /* yacc.c:1646  */
    {
                           /* Careful about recursion */
                           ParserDebug("\tP:%s:%s:%s:%s function %s, nakedvar arg = %s\n", P.block, P.blocktype, P.blockid, P.currentclasses ? P.currentclasses : "any", P.currentfnid[P.arg_nesting], P.currentstring);
                           RlistAppend(&P.giveargs[P.arg_nesting], P.currentfncall[P.arg_nesting+1], RVAL_TYPE_FNCALL);
                           RvalDestroy((Rval) { P.currentfncall[P.arg_nesting+1], RVAL_TYPE_FNCALL });
                           P.currentfncall[P.arg_nesting+1] = NULL;
                       }
#line 2486 "cf3parse.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1127 "cf3parse.y" /* yacc.c:1646  */
    {
                           ParserDebug("P:rval:function:gaitem:error yychar = %d\n", yychar);
                           if (yychar == ';')
                           {
                              ParseError("Expected ')', wrong input '%s'", yytext);
                           }
                           else if (yychar == ASSIGN )
                           {
                              ParseError("Check function statement  previous line, Expected ')', wrong input '%s'", yytext);
                           }
                           else
                           {
                              ParseError("Invalid function argument, wrong input '%s'", yytext);
                           }
                           yyclearin;
                       }
#line 2507 "cf3parse.c" /* yacc.c:1646  */
    break;


#line 2511 "cf3parse.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 1144 "cf3parse.y" /* yacc.c:1906  */


/*****************************************************************/

static void ParseErrorVColumnOffset(int column_offset, const char *s, va_list ap)
{
    char *errmsg = StringVFormat(s, ap);
    fprintf(stderr, "%s:%d:%d: error: %s\n", P.filename, P.line_no, P.line_pos + column_offset, errmsg);
    free(errmsg);

    /* FIXME: why this might be NULL? */
    if (P.current_line)
    {
        fprintf(stderr, "%s\n", P.current_line);
        fprintf(stderr, "%*s\n", P.line_pos + column_offset, "^");

        P.error_count++;

        if (P.error_count > 12)
        {
            fprintf(stderr, "Too many errors\n");
            exit(EXIT_FAILURE);
        }
    }

}

static void ParseErrorColumnOffset(int column_offset, const char *s, ...)
{
    va_list ap;
    va_start(ap, s);
    ParseErrorVColumnOffset(column_offset, s, ap);
    va_end(ap);
}

static void ParseErrorV(const char *s, va_list ap)
{
    ParseErrorVColumnOffset(0, s, ap);
}

static void ParseError(const char *s, ...)
{
    va_list ap;
    va_start(ap, s);
    ParseErrorV(s, ap);
    va_end(ap);
}

static void ParseWarningV(unsigned int warning, const char *s, va_list ap)
{
    if (((P.warnings | P.warnings_error) & warning) == 0)
    {
        return;
    }

    char *errmsg = StringVFormat(s, ap);
    const char *warning_str = ParserWarningToString(warning);

    fprintf(stderr, "%s:%d:%d: warning: %s [-W%s]\n", P.filename, P.line_no, P.line_pos, errmsg, warning_str);
    fprintf(stderr, "%s\n", P.current_line);
    fprintf(stderr, "%*s\n", P.line_pos, "^");

    free(errmsg);

    P.warning_count++;

    if ((P.warnings_error & warning) != 0)
    {
        P.error_count++;
    }

    if (P.error_count > 12)
    {
        fprintf(stderr, "Too many errors\n");
        exit(EXIT_FAILURE);
    }
}

static void ParseWarning(unsigned int warning, const char *s, ...)
{
    va_list ap;
    va_start(ap, s);
    ParseWarningV(warning, s, ap);
    va_end(ap);
}

void yyerror(const char *str)
{
    ParseError("%s", str);
}

static void fatal_yyerror(const char *s)
{
    char *sp = yytext;
    /* Skip quotation mark */
    if (sp && *sp == '\"' && sp[1])
    {
        sp++;
    }

    fprintf(stderr, "%s: %d,%d: Fatal error during parsing: %s, near token \'%.20s\'\n", P.filename, P.line_no, P.line_pos, s, sp ? sp : "NULL");
    exit(EXIT_FAILURE);
}

static int RelevantBundle(const char *agent, const char *blocktype)
{
    if ((strcmp(agent, CF_AGENTTYPES[AGENT_TYPE_COMMON]) == 0) || (strcmp(CF_COMMONC, blocktype) == 0))
    {
        return true;
    }

/* Here are some additional bundle types handled by cfAgent */

    Item *ip = SplitString("edit_line,edit_xml", ',');

    if (strcmp(agent, CF_AGENTTYPES[AGENT_TYPE_AGENT]) == 0)
    {
        if (IsItemIn(ip, blocktype))
        {
            DeleteItemList(ip);
            return true;
        }
    }

    DeleteItemList(ip);
    return false;
}

static bool LvalWantsBody(char *stype, char *lval)
{
    for (int i = 0; i < CF3_MODULES; i++)
    {
        const PromiseTypeSyntax *promise_type_syntax = CF_ALL_PROMISE_TYPES[i];
        if (!promise_type_syntax)
        {
            continue;
        }

        for (int j = 0; promise_type_syntax[j].promise_type != NULL; j++)
        {
            const ConstraintSyntax *bs = promise_type_syntax[j].constraints;
            if (!bs)
            {
                continue;
            }

            if (strcmp(promise_type_syntax[j].promise_type, stype) != 0)
            {
                continue;
            }

            for (int l = 0; bs[l].lval != NULL; l++)
            {
                if (strcmp(bs[l].lval, lval) == 0)
                {
                    if (bs[l].dtype == CF_DATA_TYPE_BODY)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
    }

    return false;
}

static SyntaxTypeMatch CheckSelection(const char *type, const char *name, const char *lval, Rval rval)
{
    // Check internal control bodies etc
    if (strcmp("control", name) == 0)
    {
        for (int i = 0; CONTROL_BODIES[i].body_type != NULL; i++)
        {
            if (strcmp(type, CONTROL_BODIES[i].body_type) == 0)
            {
                const ConstraintSyntax *bs = CONTROL_BODIES[i].constraints;

                for (int l = 0; bs[l].lval != NULL; l++)
                {
                    if (strcmp(lval, bs[l].lval) == 0)
                    {
                        if (bs[l].dtype == CF_DATA_TYPE_BODY)
                        {
                            return SYNTAX_TYPE_MATCH_OK;
                        }
                        else if (bs[l].dtype == CF_DATA_TYPE_BUNDLE)
                        {
                            return SYNTAX_TYPE_MATCH_OK;
                        }
                        else
                        {
                            return CheckConstraintTypeMatch(lval, rval, bs[l].dtype, bs[l].range.validation_string, 0);
                        }
                    }
                }

            }
        }
    }

    // Now check the functional modules - extra level of indirection
    for (int i = 0; i < CF3_MODULES; i++)
    {
        const PromiseTypeSyntax *promise_type_syntax =  CF_ALL_PROMISE_TYPES[i];
        if (!promise_type_syntax)
        {
            continue;
        }

        for (int j = 0; promise_type_syntax[j].promise_type != NULL; j++)
        {
            const ConstraintSyntax *bs = bs = promise_type_syntax[j].constraints;

            if (!bs)
            {
                continue;
            }

            for (int l = 0; bs[l].lval != NULL; l++)
            {
                if (bs[l].dtype == CF_DATA_TYPE_BODY)
                {
                    const ConstraintSyntax *bs2 = bs[l].range.body_type_syntax->constraints;

                    if (bs2 == NULL || bs2 == (void *) CF_BUNDLE)
                    {
                        continue;
                    }

                    for (int k = 0; bs2[k].dtype != CF_DATA_TYPE_NONE; k++)
                    {
                        /* Either module defined or common */

                        if (strcmp(promise_type_syntax[j].promise_type, type) == 0 && strcmp(promise_type_syntax[j].promise_type, "*") != 0)
                        {
                            char output[CF_BUFSIZE];
                            snprintf(output, CF_BUFSIZE, "lval %s belongs to promise type '%s': but this is '%s'\n",
                                     lval, promise_type_syntax[j].promise_type, type);
                            yyerror(output);
                            return SYNTAX_TYPE_MATCH_OK;
                        }

                        if (strcmp(lval, bs2[k].lval) == 0)
                        {
                            return CheckConstraintTypeMatch(lval, rval, bs2[k].dtype, bs2[k].range.validation_string, 0);
                        }
                    }
                }
            }
        }
    }

    char output[CF_BUFSIZE];
    snprintf(output, CF_BUFSIZE, "Constraint lvalue \"%s\" is not allowed in \'%s\' constraint body", lval, type);
    yyerror(output);

    return SYNTAX_TYPE_MATCH_OK; // TODO: OK?
}

static SyntaxTypeMatch CheckConstraint(const char *type, const char *lval, Rval rval, const PromiseTypeSyntax *promise_type_syntax)
{
    assert(promise_type_syntax);

    if (promise_type_syntax->promise_type != NULL)     /* In a bundle */
    {
        if (strcmp(promise_type_syntax->promise_type, type) == 0)
        {
            const ConstraintSyntax *bs = promise_type_syntax->constraints;

            for (int l = 0; bs[l].lval != NULL; l++)
            {

                if (strcmp(lval, bs[l].lval) == 0)
                {
                    /* If we get here we have found the lval and it is valid
                       for this promise_type */

                    /* For bodies and bundles definitions can be elsewhere, so
                       they are checked in PolicyCheckRunnable(). */
                    if (bs[l].dtype != CF_DATA_TYPE_BODY &&
                        bs[l].dtype != CF_DATA_TYPE_BUNDLE)
                    {
                        return CheckConstraintTypeMatch(lval, rval, bs[l].dtype, bs[l].range.validation_string, 0);
                    }
                }
            }
        }
    }

    return SYNTAX_TYPE_MATCH_OK;
}

static void ValidateClassLiteral(const char *class_literal)
{
    ParseResult res = ParseExpression(class_literal, 0, strlen(class_literal));

    if (!res.result)
    {
        ParseErrorColumnOffset(res.position - strlen(class_literal), "Syntax error in context string");
    }

    FreeExpression(res.result);
}
