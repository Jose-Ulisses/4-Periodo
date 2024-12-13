/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "semantic.y"
 
	/* Para simplificar a notação, S é para sintetizar. A atualizar. V verificar */
    #include <string.h>
	#ifndef  ANALEX
	#include "analex.c"
	#define ANALEX
	#endif 
    #ifndef  CODIGO
	#include "codigo.h"
    #define CODIGO
    #endif
    #ifndef TIPOS
    #include "tipos.h"
    #define TIPOS
    #endif

#line 88 "semantic.c"

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

#include "semantic.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_ENDIF = 8,                      /* ENDIF  */
  YYSYMBOL_CHAR = 9,                       /* CHAR  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_FLOAT = 11,                     /* FLOAT  */
  YYSYMBOL_VOID = 12,                      /* VOID  */
  YYSYMBOL_OR = 13,                        /* OR  */
  YYSYMBOL_AND = 14,                       /* AND  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_GE = 16,                        /* GE  */
  YYSYMBOL_LE = 17,                        /* LE  */
  YYSYMBOL_EQ = 18,                        /* EQ  */
  YYSYMBOL_NEQ = 19,                       /* NEQ  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_STRING = 21,                    /* STRING  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_23_ = 23,                       /* '='  */
  YYSYMBOL_24_ = 24,                       /* '>'  */
  YYSYMBOL_25_ = 25,                       /* '<'  */
  YYSYMBOL_26_ = 26,                       /* '+'  */
  YYSYMBOL_27_ = 27,                       /* '-'  */
  YYSYMBOL_28_ = 28,                       /* '*'  */
  YYSYMBOL_29_ = 29,                       /* '/'  */
  YYSYMBOL_30_ = 30,                       /* '%'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* '}'  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_ProgL = 40,                     /* ProgL  */
  YYSYMBOL_Prog = 41,                      /* Prog  */
  YYSYMBOL_Function = 42,                  /* Function  */
  YYSYMBOL_FunctionCall = 43,              /* FunctionCall  */
  YYSYMBOL_ArgList = 44,                   /* ArgList  */
  YYSYMBOL_ParamList = 45,                 /* ParamList  */
  YYSYMBOL_Decl = 46,                      /* Decl  */
  YYSYMBOL_IDs = 47,                       /* IDs  */
  YYSYMBOL_TypeF = 48,                     /* TypeF  */
  YYSYMBOL_Type = 49,                      /* Type  */
  YYSYMBOL_Statement_Seq = 50,             /* Statement_Seq  */
  YYSYMBOL_Statement = 51,                 /* Statement  */
  YYSYMBOL_Compound_Stt = 52,              /* Compound_Stt  */
  YYSYMBOL_If = 53,                        /* If  */
  YYSYMBOL_While = 54,                     /* While  */
  YYSYMBOL_DoWhile = 55,                   /* DoWhile  */
  YYSYMBOL_Atribuicao = 56,                /* Atribuicao  */
  YYSYMBOL_Exp = 57                        /* Exp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    30,     2,     2,
      31,    33,    28,    26,    36,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
      25,    23,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    87,    92,    99,   106,   116,   129,   142,
     158,   169,   184,   197,   212,   220,   231,   242,   250,   255,
     269,   270,   274,   275,   276,   280,   285,   293,   305,   310,
     315,   320,   325,   333,   334,   338,   341,   347,   353,   360,
     372,   385,   389,   393,   397,   401,   405,   409,   413,   417,
     421,   425,   429,   433,   437,   444,   453,   465,   473
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "ID", "WHILE",
  "IF", "ELSE", "ENDIF", "CHAR", "INT", "FLOAT", "VOID", "OR", "AND",
  "NOT", "GE", "LE", "EQ", "NEQ", "DO", "STRING", "FOR", "'='", "'>'",
  "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "'['", "')'", "'{'",
  "'}'", "','", "']'", "';'", "$accept", "ProgL", "Prog", "Function",
  "FunctionCall", "ArgList", "ParamList", "Decl", "IDs", "TypeF", "Type",
  "Statement_Seq", "Statement", "Compound_Stt", "If", "While", "DoWhile",
  "Atribuicao", "Exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-66)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      62,   -66,   -66,   -66,   -66,    27,    62,   -66,    25,   -66,
     -66,   -66,     4,    50,    21,    45,    59,   191,    34,     6,
     -66,   -13,    46,    48,     2,    44,    75,    80,    52,   191,
     -66,   -66,   -66,    77,   191,    90,    49,    -1,   113,    49,
      49,   191,   -66,   109,   -66,   -66,     5,    87,   -66,   -66,
     -66,   -66,    96,   -66,   -66,   100,    49,   -66,    49,   165,
     -66,   101,    72,   104,    93,   111,    98,   118,   148,   146,
     -66,   149,   -66,   129,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,   -66,    49,   136,     2,
       2,   -66,    49,   130,    35,   -66,   131,   -66,   189,   203,
      76,    76,   217,   217,    76,    76,    64,    64,   -66,   -66,
     -66,    49,   -66,    26,   147,   136,   166,   -66,   165,     2,
     -66,   132,   140,   177,   -66,   136,   -66
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    23,    22,    24,    20,     0,     2,     4,     0,    21,
       1,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,    31,    32,    18,    13,    19,     6,
      25,    27,     0,    11,    55,    57,     0,    58,     0,    40,
       8,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       5,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,    34,     0,     0,    14,    15,     0,    54,    51,    52,
      47,    48,    49,    50,    45,    46,    41,    42,    43,    44,
       9,     0,    37,     0,     0,    17,     0,    56,    39,     0,
      35,     0,     0,     0,    38,    16,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -66,   -66,   -66,   180,   -66,   112,   -66,   -66,   -66,   -66,
      56,    -3,   -24,   -65,   -66,   -66,   -66,   -18,   -35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    25,    61,    15,    26,    47,     8,
      27,    28,    29,    43,    30,    31,    32,    33,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    59,    54,    55,    64,    65,    21,    22,    23,    48,
      36,     1,     2,     3,    56,     1,     2,     3,    37,    38,
      57,    72,    24,    73,   112,   113,    50,    10,    36,    12,
      58,    52,    60,   119,   120,    13,    41,    68,    66,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    95,    54,    55,   123,    17,     9,   114,    36,     1,
       2,     3,     9,    20,    56,    42,    42,   116,    34,    16,
      57,     1,     2,     3,     4,    35,   118,    39,    18,    40,
      58,    19,    44,    14,    46,    74,    75,    49,    76,    77,
      78,    79,    84,    85,    53,    42,    80,    81,    82,    83,
      84,    85,    82,    83,    84,    85,    74,    75,    87,    76,
      77,    78,    79,    45,    67,    51,    63,    80,    81,    82,
      83,    84,    85,    69,    74,    75,    89,    76,    77,    78,
      79,    70,    71,    91,    86,    80,    81,    82,    83,    84,
      85,    88,    74,    75,    90,    76,    77,    78,    79,    92,
      94,    93,    96,    80,    81,    82,    83,    84,    85,   111,
      74,    75,    97,    76,    77,    78,    79,   115,   117,   122,
     124,    80,    81,    82,    83,    84,    85,   125,    74,    75,
     121,    76,    77,    78,    79,   126,    11,     0,     0,    80,
      81,    82,    83,    84,    85,    21,    22,    23,     0,   110,
       1,     2,     3,    75,     0,    76,    77,    78,    79,     0,
       0,    24,     0,    80,    81,    82,    83,    84,    85,    76,
      77,    78,    79,     0,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    76,    77,    -1,    -1,     0,     0,     0,
       0,    80,    81,    82,    83,    84,    85
};

static const yytype_int8 yycheck[] =
{
      24,    36,     3,     4,    39,    40,     4,     5,     6,    27,
      23,     9,    10,    11,    15,     9,    10,    11,    31,    32,
      21,    56,    20,    58,    89,    90,    29,     0,    23,     4,
      31,    34,    33,     7,     8,    31,    34,    32,    41,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    69,     3,     4,   119,    34,     0,    92,    23,     9,
      10,    11,     6,     4,    15,    89,    90,    32,    34,    13,
      21,     9,    10,    11,    12,    19,   111,    31,    33,    31,
      31,    36,    38,    33,     4,    13,    14,    35,    16,    17,
      18,    19,    28,    29,     4,   119,    24,    25,    26,    27,
      28,    29,    26,    27,    28,    29,    13,    14,    36,    16,
      17,    18,    19,    38,     5,    38,     3,    24,    25,    26,
      27,    28,    29,    36,    13,    14,    33,    16,    17,    18,
      19,    35,    32,    35,    33,    24,    25,    26,    27,    28,
      29,    37,    13,    14,    33,    16,    17,    18,    19,    31,
       4,     3,     3,    24,    25,    26,    27,    28,    29,    23,
      13,    14,    33,    16,    17,    18,    19,    37,    37,     3,
      38,    24,    25,    26,    27,    28,    29,    37,    13,    14,
      33,    16,    17,    18,    19,     8,     6,    -1,    -1,    24,
      25,    26,    27,    28,    29,     4,     5,     6,    -1,    87,
       9,    10,    11,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    20,    -1,    24,    25,    26,    27,    28,    29,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    10,    11,    12,    40,    41,    42,    48,    49,
       0,    42,     4,    31,    33,    45,    49,    34,    33,    36,
       4,     4,     5,     6,    20,    43,    46,    49,    50,    51,
      53,    54,    55,    56,    34,    49,    23,    31,    32,    31,
      31,    34,    51,    52,    38,    38,     4,    47,    56,    35,
      50,    38,    50,     4,     3,     4,    15,    21,    31,    57,
      33,    44,    57,     3,    57,    57,    50,     5,    32,    36,
      35,    32,    57,    57,    13,    14,    16,    17,    18,    19,
      24,    25,    26,    27,    28,    29,    33,    36,    37,    33,
      33,    35,    31,     3,     4,    56,     3,    33,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      44,    23,    52,    52,    57,    37,    32,    37,    57,     7,
       8,    33,     3,    52,    38,    37,     8
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    43,    44,
      44,    45,    45,    46,    47,    47,    47,    47,    47,    47,
      48,    48,    49,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    52,    52,    53,    53,    54,    55,    56,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     8,     7,     4,     3,     3,
       1,     4,     2,     2,     3,     3,     6,     4,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     2,     2,     1,     3,     6,     8,     5,     7,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     4,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* ProgL: Prog  */
#line 82 "semantic.y"
             {
		printf("%s",(yyvsp[0].node).code);
	}
#line 1229 "semantic.c"
    break;

  case 3: /* Prog: Prog Function  */
#line 87 "semantic.y"
                     {
		create_cod(&(yyval.node).code); 
		insert_cod(&(yyval.node).code,(yyvsp[-1].node).code); 
		insert_cod(&(yyval.node).code,(yyvsp[0].node).code);
	}
#line 1239 "semantic.c"
    break;

  case 4: /* Prog: Function  */
#line 92 "semantic.y"
                   {
        create_cod(&(yyval.node).code); 
		insert_cod(&(yyval.node).code,(yyvsp[0].node).code); 
    }
#line 1248 "semantic.c"
    break;

  case 5: /* Function: TypeF ID '(' ParamList ')' '{' Statement_Seq '}'  */
#line 99 "semantic.y"
                                                     { 
        adiciona_funcao_tabela(obtemNome((yyvsp[-6].val)), (yyvsp[-7].val), &(yyvsp[-4].id_list));
        create_cod(&(yyval.node).code);
        if((yyvsp[-1].node).code != NULL)
            insert_cod(&(yyval.node).code, (yyvsp[-1].node).code);
        Funct(&(yyval.node), (yyvsp[-6].val), (yyvsp[-1].node));        
    }
#line 1260 "semantic.c"
    break;

  case 6: /* Function: TypeF ID '(' ')' '{' Statement_Seq '}'  */
#line 106 "semantic.y"
                                            {
        adiciona_funcao_tabela(obtemNome((yyvsp[-5].val)), (yyvsp[-6].val), NULL); 
        create_cod(&(yyval.node).code);
        if((yyvsp[-1].node).code != NULL)
            insert_cod(&(yyval.node).code, (yyvsp[-1].node).code);
        Funct(&(yyval.node), (yyvsp[-5].val), (yyvsp[-1].node));                
    }
#line 1272 "semantic.c"
    break;

  case 7: /* FunctionCall: ID '(' ArgList ')'  */
#line 116 "semantic.y"
                       {
        int funcPos = (yyvsp[-3].val); 
        if (getTipo(funcPos) == -1)
            yyerror("Uso de identificador nao declarado");
        else if (Tabela[funcPos].tam_arg_list != (yyvsp[-1].id_list).tam) 
            yyerror("Número de argumentos incompatível!");
    
        create_cod(&(yyval.node).code);
        if((yyvsp[-1].id_list).code != NULL)
            insert_cod(&(yyval.node).code, (yyvsp[-1].id_list).code);
        Call(&(yyval.node), funcPos, (yyvsp[-1].id_list));

    }
#line 1290 "semantic.c"
    break;

  case 8: /* FunctionCall: ID '(' ')'  */
#line 129 "semantic.y"
                 {
        int funcPos = procura(obtemNome((yyvsp[-2].val)));
        if (funcPos == -1)
            yyerror("Uso de identificador nao declarado");
         else if (Tabela[funcPos].tam_arg_list != 0)
            yyerror("Número de argumentos incompatível!");
        
        Call_blank(&(yyval.node));
    }
#line 1304 "semantic.c"
    break;

  case 9: /* ArgList: Exp ',' ArgList  */
#line 142 "semantic.y"
                    {
        create_cod(&(yyval.id_list).code);
        (yyval.id_list).tam = (yyvsp[0].id_list).tam;
        for (int i = 0; i < (yyvsp[0].id_list).tam; i++) 
            (yyval.id_list).ids[i] = (yyvsp[0].id_list).ids[i];

        (yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[-2].node).place;
        create_cod(&(yyval.id_list).code);
        if((yyvsp[-2].node).code != NULL)
            insert_cod(&(yyval.id_list).code, (yyvsp[-2].node).code);

        if((yyvsp[0].id_list).code != NULL)
            insert_cod(&(yyval.id_list).code, (yyvsp[0].id_list).code);
        
        (yyval.id_list).tam++;
    }
#line 1325 "semantic.c"
    break;

  case 10: /* ArgList: Exp  */
#line 158 "semantic.y"
          {
        create_cod(&(yyval.id_list).code);
        (yyval.id_list).tam = 1;
        (yyval.id_list).ids[0] = (yyvsp[0].node).place;
        if((yyvsp[0].node).code != NULL)
            insert_cod(&(yyval.id_list).code, (yyvsp[0].node).code);
    }
#line 1337 "semantic.c"
    break;

  case 11: /* ParamList: ParamList ',' Type ID  */
#line 169 "semantic.y"
                          {
        (yyval.id_list).tam = (yyvsp[-3].id_list).tam;
        for (int i = 0; i < (yyvsp[-3].id_list).tam; i++) 
            (yyval.id_list).ids[i] = (yyvsp[-3].id_list).ids[i];
        
        (yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[0].val);
        if(getTipo((yyvsp[0].val)) == -1)
            set_type((yyval.id_list).ids[(yyval.id_list).tam], (yyvsp[-1].val));
        
        else 
            if(getTipo((yyvsp[0].val)) != (yyvsp[-1].val))
                yyerror("Tipos de argumentos incompatíveis!");
        
        (yyval.id_list).tam++;
    }
#line 1357 "semantic.c"
    break;

  case 12: /* ParamList: Type ID  */
#line 184 "semantic.y"
              {
        (yyval.id_list).tam = 1;
        (yyval.id_list).ids[0] = (yyvsp[0].val);
        if(getTipo((yyvsp[0].val)) == -1)
            set_type((yyval.id_list).ids[0], (yyvsp[-1].val));
        
        else 
            if(getTipo((yyvsp[0].val)) != (yyvsp[-1].val))
                yyerror("Tipos de argumentos incompatíveis!");
        }
#line 1372 "semantic.c"
    break;

  case 13: /* Decl: Type IDs  */
#line 197 "semantic.y"
             {
        int tipo = -5;
        create_cod(&(yyval.node).code);
        if ((yyvsp[0].id_list).code != NULL)
            insert_cod(&(yyval.node).code, (yyvsp[0].id_list).code);

        for (int i = 0; i < (yyvsp[0].id_list).tam; i++){
            tipo = getTipo((yyvsp[0].id_list).ids[i]);
            set_type((yyvsp[0].id_list).ids[i], (yyvsp[-1].val));
        }
    }
#line 1388 "semantic.c"
    break;

  case 14: /* IDs: IDs ',' ID  */
#line 212 "semantic.y"
               {
        (yyval.id_list).tam = (yyvsp[-2].id_list).tam;
        for (int i = 0; i < (yyvsp[-2].id_list).tam; i++) 
            (yyval.id_list).ids[i] = (yyvsp[-2].id_list).ids[i];
        
        (yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[0].val);
        (yyval.id_list).tam++; 
    }
#line 1401 "semantic.c"
    break;

  case 15: /* IDs: IDs ',' Atribuicao  */
#line 220 "semantic.y"
                         {
        (yyval.id_list).tam = (yyvsp[-2].id_list).tam;
        for (int i = 0;i < (yyvsp[-2].id_list).tam; i++) 
            (yyval.id_list).ids[i] = (yyvsp[-2].id_list).ids[i];
        
        int pos = (yyvsp[0].node).place;
        create_cod(&(yyval.id_list).code);
        insert_cod(&(yyval.id_list).code, (yyvsp[0].node).code);
        (yyval.id_list).ids[(yyval.id_list).tam] = pos;
        (yyval.id_list).tam++;
    }
#line 1417 "semantic.c"
    break;

  case 16: /* IDs: IDs ',' ID '[' NUM ']'  */
#line 231 "semantic.y"
                             {
        if(yy_tipo != INT)
            yyerror("Indices de vetor não inteiro");
        
        (yyval.id_list).tam = (yyvsp[-5].id_list).tam;
        for (int i = 0;i < (yyvsp[-5].id_list).tam; i++)     
            (yyval.id_list).ids[i] = (yyvsp[-5].id_list).ids[i];
    
        (yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[-3].val);
        (yyval.id_list).tam++;
    }
#line 1433 "semantic.c"
    break;

  case 17: /* IDs: ID '[' NUM ']'  */
#line 243 "semantic.y"
    {
        if(yy_tipo != INT)
            yyerror("Indices de vetor não inteiro");
        
        (yyval.id_list).tam = 1;
        (yyval.id_list).ids[0] = (yyvsp[-3].val);
    }
#line 1445 "semantic.c"
    break;

  case 18: /* IDs: ID  */
#line 251 "semantic.y"
    {
        (yyval.id_list).tam = 1;
        (yyval.id_list).ids[0] = (yyvsp[0].val);
    }
#line 1454 "semantic.c"
    break;

  case 19: /* IDs: Atribuicao  */
#line 256 "semantic.y"
    {
        int pos = (yyvsp[0].node).place;
        create_cod(&(yyval.id_list).code);
        insert_cod(&(yyval.id_list).code, (yyvsp[0].node).code);
        (yyval.id_list).tam = 1;
        (yyval.id_list).ids[0] = pos;
    }
#line 1466 "semantic.c"
    break;

  case 20: /* TypeF: VOID  */
#line 269 "semantic.y"
               {(yyval.val) = VOID;}
#line 1472 "semantic.c"
    break;

  case 21: /* TypeF: Type  */
#line 270 "semantic.y"
               {(yyval.val) = (yyvsp[0].val);}
#line 1478 "semantic.c"
    break;

  case 22: /* Type: INT  */
#line 274 "semantic.y"
              {(yyval.val) = INT;}
#line 1484 "semantic.c"
    break;

  case 23: /* Type: CHAR  */
#line 275 "semantic.y"
           {(yyval.val) = CHAR;}
#line 1490 "semantic.c"
    break;

  case 24: /* Type: FLOAT  */
#line 276 "semantic.y"
                {(yyval.val) = FLOAT;}
#line 1496 "semantic.c"
    break;

  case 25: /* Statement_Seq: Statement Statement_Seq  */
#line 280 "semantic.y"
                            {
        create_cod(&(yyval.node).code);
        insert_cod(&(yyval.node).code, (yyvsp[-1].node).code);
        insert_cod(&(yyval.node).code, (yyvsp[0].node).code);
    }
#line 1506 "semantic.c"
    break;

  case 26: /* Statement_Seq: Statement  */
#line 285 "semantic.y"
                {
        create_cod(&(yyval.node).code);
        insert_cod(&(yyval.node).code, (yyvsp[0].node).code);
    }
#line 1515 "semantic.c"
    break;

  case 27: /* Statement: Atribuicao ';'  */
#line 293 "semantic.y"
                         {
        if(getTipo((yyvsp[-1].node).place) == -1)
        {
            yyerror("Uso de variável não declarada");
        }
        if(tipos_inconsistentes_atrib(getTipo((yyvsp[-1].node).place), (yyvsp[-1].node).tipo) == -1)
        {
            yyerror("Tipos incompatíveis");
        }
        create_cod(&(yyval.node).code);
        insert_cod(&(yyval.node).code, (yyvsp[-1].node).code);
    }
#line 1532 "semantic.c"
    break;

  case 28: /* Statement: If  */
#line 306 "semantic.y"
    {
        create_cod(&(yyval.node).code);
        insert_cod(&(yyval.node).code, (yyvsp[0].node).code);
    }
#line 1541 "semantic.c"
    break;

  case 29: /* Statement: While  */
#line 311 "semantic.y"
    {
        create_cod(&(yyval.node).code);
        insert_cod(&(yyval.node).code, (yyvsp[0].node).code);
    }
#line 1550 "semantic.c"
    break;

  case 30: /* Statement: DoWhile  */
#line 316 "semantic.y"
    {
        create_cod(&(yyval.node).code);
        insert_cod(&(yyval.node).code, (yyvsp[0].node).code);
    }
#line 1559 "semantic.c"
    break;

  case 31: /* Statement: FunctionCall ';'  */
#line 321 "semantic.y"
    {
        create_cod(&(yyval.node).code);
        insert_cod(&(yyval.node).code, (yyvsp[-1].node).code);
    }
#line 1568 "semantic.c"
    break;

  case 32: /* Statement: Decl ';'  */
#line 326 "semantic.y"
    {
        create_cod(&(yyval.node).code);
        insert_cod(&(yyval.node).code, (yyvsp[-1].node).code);
    }
#line 1577 "semantic.c"
    break;

  case 33: /* Compound_Stt: Statement  */
#line 333 "semantic.y"
                    {(yyval.node) = (yyvsp[0].node);}
#line 1583 "semantic.c"
    break;

  case 34: /* Compound_Stt: '{' Statement_Seq '}'  */
#line 334 "semantic.y"
                                {(yyval.node) = (yyvsp[-1].node);}
#line 1589 "semantic.c"
    break;

  case 35: /* If: IF '(' Exp ')' Compound_Stt ENDIF  */
#line 338 "semantic.y"
                                            { 
		If(&(yyval.node), (yyvsp[-3].node),(yyvsp[-1].node));
	}
#line 1597 "semantic.c"
    break;

  case 36: /* If: IF '(' Exp ')' Compound_Stt ELSE Compound_Stt ENDIF  */
#line 341 "semantic.y"
                                                              {
		IfElse(&(yyval.node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
	}
#line 1605 "semantic.c"
    break;

  case 37: /* While: WHILE '(' Exp ')' Compound_Stt  */
#line 347 "semantic.y"
                                   {
        While(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1613 "semantic.c"
    break;

  case 38: /* DoWhile: DO Compound_Stt WHILE '(' Exp ')' ';'  */
#line 353 "semantic.y"
                                          {
        DoWhile(&(yyval.node), (yyvsp[-5].node), (yyvsp[-2].node));
    }
#line 1621 "semantic.c"
    break;

  case 39: /* Atribuicao: ID '[' NUM ']' '=' Exp  */
#line 361 "semantic.y"
    {
        if(tipos_inconsistentes_atrib(getTipo((yyvsp[-5].val)), (yyvsp[0].node).tipo) == -1)
            yyerror("Tipos incompatíveis");
    
        if(yy_tipo != INT)
            yyerror("Indices de vetor não inteiro");
        
        (yyval.node).place = (yyvsp[-5].val);
        Atrib(&(yyval.node), (yyvsp[0].node));
        (yyval.node).tipo = (yyvsp[0].node).tipo;
    }
#line 1637 "semantic.c"
    break;

  case 40: /* Atribuicao: ID '=' Exp  */
#line 373 "semantic.y"
    {
        if(tipos_inconsistentes_atrib(getTipo((yyvsp[-2].val)), (yyvsp[0].node).tipo) == -1)        
            yyerror("Tipos incompatíveis");

        (yyval.node).place = (yyvsp[-2].val);
        Atrib(&(yyval.node), (yyvsp[0].node));
        (yyval.node).tipo = retorna_maior_tipo(getTipo((yyvsp[-2].val)), (yyvsp[0].node).tipo);
    }
#line 1650 "semantic.c"
    break;

  case 41: /* Exp: Exp '+' Exp  */
#line 385 "semantic.y"
                      {
        (yyval.node).tipo = retorna_maior_tipo((yyvsp[-2].node).tipo, (yyvsp[0].node).tipo);
        ExpAri(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "add");
        }
#line 1659 "semantic.c"
    break;

  case 42: /* Exp: Exp '-' Exp  */
#line 389 "semantic.y"
                      {
        (yyval.node).tipo = retorna_maior_tipo((yyvsp[-2].node).tipo, (yyvsp[0].node).tipo);
        ExpAri(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "sub");
        }
#line 1668 "semantic.c"
    break;

  case 43: /* Exp: Exp '*' Exp  */
#line 393 "semantic.y"
                      {        
        (yyval.node).tipo = retorna_maior_tipo((yyvsp[-2].node).tipo, (yyvsp[0].node).tipo);
        ExpAri(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "mul");
        }
#line 1677 "semantic.c"
    break;

  case 44: /* Exp: Exp '/' Exp  */
#line 397 "semantic.y"
                      {
        (yyval.node).tipo = retorna_maior_tipo((yyvsp[-2].node).tipo, (yyvsp[0].node).tipo);
        ExpAri(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "div");
        }
#line 1686 "semantic.c"
    break;

  case 45: /* Exp: Exp '>' Exp  */
#line 401 "semantic.y"
                      {
		(yyval.node).tipo = INT;
		Bgt(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "bgt");
		}
#line 1695 "semantic.c"
    break;

  case 46: /* Exp: Exp '<' Exp  */
#line 405 "semantic.y"
                      {
		(yyval.node).tipo = INT;
		Bgt(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "blt");
		}
#line 1704 "semantic.c"
    break;

  case 47: /* Exp: Exp GE Exp  */
#line 409 "semantic.y"
                      {
		(yyval.node).tipo = INT;
		Bgt(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "blt");
		}
#line 1713 "semantic.c"
    break;

  case 48: /* Exp: Exp LE Exp  */
#line 413 "semantic.y"
                      {
		(yyval.node).tipo = INT;
		Bgt(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "bgt");
		}
#line 1722 "semantic.c"
    break;

  case 49: /* Exp: Exp EQ Exp  */
#line 417 "semantic.y"
                      {
		(yyval.node).tipo = INT;
		Bgt(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "beq");
		}
#line 1731 "semantic.c"
    break;

  case 50: /* Exp: Exp NEQ Exp  */
#line 421 "semantic.y"
                      {
		(yyval.node).tipo = INT;
		Bgt(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "bnq");
	}
#line 1740 "semantic.c"
    break;

  case 51: /* Exp: Exp OR Exp  */
#line 425 "semantic.y"
                     {
		(yyval.node).tipo = INT;
		Explog(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "or");
	}
#line 1749 "semantic.c"
    break;

  case 52: /* Exp: Exp AND Exp  */
#line 429 "semantic.y"
                      {
		(yyval.node).tipo = INT;
		Explog(&(yyval.node), (yyvsp[-2].node), (yyvsp[0].node), "and");
	}
#line 1758 "semantic.c"
    break;

  case 53: /* Exp: NOT Exp  */
#line 433 "semantic.y"
                  {
        create_cod(&(yyval.node).code);
		(yyval.node).tipo = INT;
	}
#line 1767 "semantic.c"
    break;

  case 54: /* Exp: '(' Exp ')'  */
#line 437 "semantic.y"
                      {
        create_cod(&(yyval.node).code);
        if((yyvsp[-1].node).code != NULL)
            insert_cod(&(yyval.node).code, (yyvsp[-1].node).code);
		(yyval.node).tipo = (yyvsp[-1].node).tipo;
        (yyval.node) = (yyvsp[-1].node);
	}
#line 1779 "semantic.c"
    break;

  case 55: /* Exp: NUM  */
#line 444 "semantic.y"
              {
        if (yy_tipo == INT) {
            (yyval.node).tipo = INT;
            Li(&(yyval.node), yylval.ival);
        } else {
            (yyval.node).tipo = FLOAT;
            Li(&(yyval.node), yylval.fval);
        }
	}
#line 1793 "semantic.c"
    break;

  case 56: /* Exp: ID '[' NUM ']'  */
#line 453 "semantic.y"
                         {
        if(getTipo((yyvsp[-3].val)) == -1)
            yyerror("Uso de variável não declarada");
        
        if(yy_tipo != INT)
            yyerror("Indices de vetor não inteiro");
        
        create_cod(&(yyval.node).code);
        if((yyvsp[-1].node).code != NULL)
            insert_cod(&(yyval.node).code, (yyvsp[-1].node).code);
        (yyval.node).tipo = getTipo((yyvsp[-3].val));
    }
#line 1810 "semantic.c"
    break;

  case 57: /* Exp: ID  */
#line 465 "semantic.y"
              {
        int tipo = getTipo((yyvsp[0].val));
        if(tipo == -1)
            yyerror("Uso de variável não declarada");

        create_cod(&(yyval.node).code);
        (yyval.node).tipo = tipo;
    }
#line 1823 "semantic.c"
    break;

  case 58: /* Exp: STRING  */
#line 473 "semantic.y"
                 {}
#line 1829 "semantic.c"
    break;


#line 1833 "semantic.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 476 "semantic.y"
  
int main(int argc, char **argv) {   
    yyin = fopen(argv[1], "r");
    yyparse();      
} 
