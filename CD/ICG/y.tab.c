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
#line 1 "icg.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>
  int top=-1;
  void yyerror(char *);
  extern FILE *yyin;
  #define YYSTYPE char*
  typedef struct quadruples
  {
    char *op;
    char *arg1;
    char *arg2;
    char *res;
  }quad;
  int quadlen = 0;
  quad q[100];

#line 91 "y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    NUM = 259,                     /* NUM  */
    T_lt = 260,                    /* T_lt  */
    T_gt = 261,                    /* T_gt  */
    T_lteq = 262,                  /* T_lteq  */
    T_gteq = 263,                  /* T_gteq  */
    T_neq = 264,                   /* T_neq  */
    T_noteq = 265,                 /* T_noteq  */
    T_eqeq = 266,                  /* T_eqeq  */
    T_and = 267,                   /* T_and  */
    T_or = 268,                    /* T_or  */
    T_incr = 269,                  /* T_incr  */
    T_decr = 270,                  /* T_decr  */
    T_not = 271,                   /* T_not  */
    T_eq = 272,                    /* T_eq  */
    WHILE = 273,                   /* WHILE  */
    INT = 274,                     /* INT  */
    CHAR = 275,                    /* CHAR  */
    FLOAT = 276,                   /* FLOAT  */
    VOID = 277,                    /* VOID  */
    H = 278,                       /* H  */
    MAINTOK = 279,                 /* MAINTOK  */
    INCLUDE = 280,                 /* INCLUDE  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    IF = 283,                      /* IF  */
    ELSE = 284,                    /* ELSE  */
    COUT = 285,                    /* COUT  */
    STRING = 286,                  /* STRING  */
    FOR = 287,                     /* FOR  */
    ENDL = 288,                    /* ENDL  */
    T_ques = 289,                  /* T_ques  */
    T_colon = 290,                 /* T_colon  */
    T_pl = 291,                    /* T_pl  */
    T_min = 292,                   /* T_min  */
    T_mul = 293,                   /* T_mul  */
    T_div = 294                    /* T_div  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define NUM 259
#define T_lt 260
#define T_gt 261
#define T_lteq 262
#define T_gteq 263
#define T_neq 264
#define T_noteq 265
#define T_eqeq 266
#define T_and 267
#define T_or 268
#define T_incr 269
#define T_decr 270
#define T_not 271
#define T_eq 272
#define WHILE 273
#define INT 274
#define CHAR 275
#define FLOAT 276
#define VOID 277
#define H 278
#define MAINTOK 279
#define INCLUDE 280
#define BREAK 281
#define CONTINUE 282
#define IF 283
#define ELSE 284
#define COUT 285
#define STRING 286
#define FOR 287
#define ENDL 288
#define T_ques 289
#define T_colon 290
#define T_pl 291
#define T_min 292
#define T_mul 293
#define T_div 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_T_lt = 5,                       /* T_lt  */
  YYSYMBOL_T_gt = 6,                       /* T_gt  */
  YYSYMBOL_T_lteq = 7,                     /* T_lteq  */
  YYSYMBOL_T_gteq = 8,                     /* T_gteq  */
  YYSYMBOL_T_neq = 9,                      /* T_neq  */
  YYSYMBOL_T_noteq = 10,                   /* T_noteq  */
  YYSYMBOL_T_eqeq = 11,                    /* T_eqeq  */
  YYSYMBOL_T_and = 12,                     /* T_and  */
  YYSYMBOL_T_or = 13,                      /* T_or  */
  YYSYMBOL_T_incr = 14,                    /* T_incr  */
  YYSYMBOL_T_decr = 15,                    /* T_decr  */
  YYSYMBOL_T_not = 16,                     /* T_not  */
  YYSYMBOL_T_eq = 17,                      /* T_eq  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_INT = 19,                       /* INT  */
  YYSYMBOL_CHAR = 20,                      /* CHAR  */
  YYSYMBOL_FLOAT = 21,                     /* FLOAT  */
  YYSYMBOL_VOID = 22,                      /* VOID  */
  YYSYMBOL_H = 23,                         /* H  */
  YYSYMBOL_MAINTOK = 24,                   /* MAINTOK  */
  YYSYMBOL_INCLUDE = 25,                   /* INCLUDE  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_COUT = 30,                      /* COUT  */
  YYSYMBOL_STRING = 31,                    /* STRING  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_ENDL = 33,                      /* ENDL  */
  YYSYMBOL_T_ques = 34,                    /* T_ques  */
  YYSYMBOL_T_colon = 35,                   /* T_colon  */
  YYSYMBOL_T_pl = 36,                      /* T_pl  */
  YYSYMBOL_T_min = 37,                     /* T_min  */
  YYSYMBOL_T_mul = 38,                     /* T_mul  */
  YYSYMBOL_T_div = 39,                     /* T_div  */
  YYSYMBOL_40_ = 40,                       /* "\""  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_42_ = 42,                       /* '}'  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_S = 47,                         /* S  */
  YYSYMBOL_START = 48,                     /* START  */
  YYSYMBOL_MAIN = 49,                      /* MAIN  */
  YYSYMBOL_BODY = 50,                      /* BODY  */
  YYSYMBOL_C = 51,                         /* C  */
  YYSYMBOL_LOOPS = 52,                     /* LOOPS  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_54_2 = 54,                      /* $@2  */
  YYSYMBOL_55_3 = 55,                      /* $@3  */
  YYSYMBOL_56_4 = 56,                      /* $@4  */
  YYSYMBOL_57_5 = 57,                      /* $@5  */
  YYSYMBOL_58_6 = 58,                      /* $@6  */
  YYSYMBOL_59_7 = 59,                      /* $@7  */
  YYSYMBOL_60_8 = 60,                      /* $@8  */
  YYSYMBOL_TERNARY_EXPR = 61,              /* TERNARY_EXPR  */
  YYSYMBOL_62_9 = 62,                      /* $@9  */
  YYSYMBOL_63_10 = 63,                     /* $@10  */
  YYSYMBOL_LOOPBODY = 64,                  /* LOOPBODY  */
  YYSYMBOL_LOOPC = 65,                     /* LOOPC  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_TERNARY_COND = 67,              /* TERNARY_COND  */
  YYSYMBOL_68_11 = 68,                     /* $@11  */
  YYSYMBOL_69_12 = 69,                     /* $@12  */
  YYSYMBOL_T_B = 70,                       /* T_B  */
  YYSYMBOL_71_13 = 71,                     /* $@13  */
  YYSYMBOL_72_14 = 72,                     /* $@14  */
  YYSYMBOL_73_15 = 73,                     /* $@15  */
  YYSYMBOL_74_16 = 74,                     /* $@16  */
  YYSYMBOL_75_17 = 75,                     /* $@17  */
  YYSYMBOL_76_18 = 76,                     /* $@18  */
  YYSYMBOL_T_F = 77,                       /* T_F  */
  YYSYMBOL_78_19 = 78,                     /* $@19  */
  YYSYMBOL_COND = 79,                      /* COND  */
  YYSYMBOL_80_20 = 80,                     /* $@20  */
  YYSYMBOL_81_21 = 81,                     /* $@21  */
  YYSYMBOL_B = 82,                         /* B  */
  YYSYMBOL_83_22 = 83,                     /* $@22  */
  YYSYMBOL_84_23 = 84,                     /* $@23  */
  YYSYMBOL_85_24 = 85,                     /* $@24  */
  YYSYMBOL_86_25 = 86,                     /* $@25  */
  YYSYMBOL_87_26 = 87,                     /* $@26  */
  YYSYMBOL_88_27 = 88,                     /* $@27  */
  YYSYMBOL_F = 89,                         /* F  */
  YYSYMBOL_90_28 = 90,                     /* $@28  */
  YYSYMBOL_V = 91,                         /* V  */
  YYSYMBOL_T_V = 92,                       /* T_V  */
  YYSYMBOL_ASSIGN_EXPR = 93,               /* ASSIGN_EXPR  */
  YYSYMBOL_94_29 = 94,                     /* $@29  */
  YYSYMBOL_95_30 = 95,                     /* $@30  */
  YYSYMBOL_96_31 = 96,                     /* $@31  */
  YYSYMBOL_97_32 = 97,                     /* $@32  */
  YYSYMBOL_EXP = 98,                       /* EXP  */
  YYSYMBOL_99_33 = 99,                     /* $@33  */
  YYSYMBOL_100_34 = 100,                   /* $@34  */
  YYSYMBOL_ADDSUB = 101,                   /* ADDSUB  */
  YYSYMBOL_102_35 = 102,                   /* $@35  */
  YYSYMBOL_103_36 = 103,                   /* $@36  */
  YYSYMBOL_TERM = 104,                     /* TERM  */
  YYSYMBOL_105_37 = 105,                   /* $@37  */
  YYSYMBOL_106_38 = 106,                   /* $@38  */
  YYSYMBOL_FACTOR = 107,                   /* FACTOR  */
  YYSYMBOL_PRINT = 108,                    /* PRINT  */
  YYSYMBOL_LIT = 109,                      /* LIT  */
  YYSYMBOL_TYPE = 110                      /* TYPE  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   227

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    35,    36,    40,    41,    45,    49,    50,
      51,    52,    56,    56,    56,    57,    57,    57,    57,    58,
      58,    58,    59,    59,    62,    62,    62,    66,    67,    68,
      72,    73,    74,    75,    79,    80,    81,    82,    85,    86,
      86,    87,    87,    88,    91,    91,    91,    92,    92,    93,
      93,    94,    94,    94,    95,    96,    99,    99,   100,   103,
     104,   104,   105,   105,   106,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   112,   113,   114,   117,   117,   118,
     121,   123,   126,   126,   126,   127,   127,   127,   131,   132,
     132,   133,   133,   137,   138,   138,   139,   139,   143,   144,
     144,   145,   145,   149,   150,   154,   155,   158,   159,   162,
     163,   164
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUM", "T_lt",
  "T_gt", "T_lteq", "T_gteq", "T_neq", "T_noteq", "T_eqeq", "T_and",
  "T_or", "T_incr", "T_decr", "T_not", "T_eq", "WHILE", "INT", "CHAR",
  "FLOAT", "VOID", "H", "MAINTOK", "INCLUDE", "BREAK", "CONTINUE", "IF",
  "ELSE", "COUT", "STRING", "FOR", "ENDL", "T_ques", "T_colon", "T_pl",
  "T_min", "T_mul", "T_div", "\"\\\"\"", "'{'", "'}'", "';'", "'('", "')'",
  "$accept", "S", "START", "MAIN", "BODY", "C", "LOOPS", "$@1", "$@2",
  "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "TERNARY_EXPR", "$@9", "$@10",
  "LOOPBODY", "LOOPC", "statement", "TERNARY_COND", "$@11", "$@12", "T_B",
  "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "T_F", "$@19", "COND",
  "$@20", "$@21", "B", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "F",
  "$@28", "V", "T_V", "ASSIGN_EXPR", "$@29", "$@30", "$@31", "$@32", "EXP",
  "$@33", "$@34", "ADDSUB", "$@35", "$@36", "TERM", "$@37", "$@38",
  "FACTOR", "PRINT", "LIT", "TYPE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,    12,     6,  -120,   -13,    -7,  -120,    24,    -8,    -1,
      -1,    10,    26,  -120,  -120,    -5,    -5,   141,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,    16,    49,    36,    35,
       5,  -120,  -120,    13,  -120,   169,  -120,   142,  -120,  -120,
      73,   191,    52,    11,    96,    25,    99,     4,    37,    58,
     184,   114,   127,  -120,  -120,  -120,    62,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,    92,  -120,    11,  -120,     9,     9,
      67,   186,   123,    86,  -120,  -120,  -120,     4,  -120,    80,
    -120,  -120,   133,  -120,  -120,  -120,  -120,  -120,  -120,    39,
      39,    39,    39,    39,    39,  -120,   137,   113,  -120,   125,
    -120,  -120,   155,  -120,  -120,  -120,  -120,   174,   139,  -120,
     150,    56,    56,   107,   107,   171,   175,    39,   169,   112,
     148,   142,   142,  -120,  -120,    39,  -120,  -120,  -120,   146,
     146,    11,    11,   110,   110,   187,   192,   181,    11,    54,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   169,    39,
     146,   141,  -120,  -120,   172,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,   179,  -120,  -120,   191,   191,   191,
     169,  -120,  -120,    74,   173,   188,  -120,   191,   191,   191,
    -120,   176,   183,  -120,  -120,  -120,  -120,  -120,   177,  -120,
     146,  -120,  -120,  -120,    54,    54,  -120,  -120,  -120,  -120,
     178,   146,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     3,     4,     0,     0,     0,     6,     5,
     107,   108,    12,   109,   110,   111,     0,     0,     0,     0,
       0,    11,    36,     0,    34,    35,    88,    93,    98,    37,
     103,     0,     0,     0,     0,     0,    81,     0,     0,     0,
      38,    55,     0,   103,     7,     9,     0,    10,    89,    91,
      94,    96,    99,   101,     0,    85,     0,    80,     0,     0,
       0,    59,    76,     0,    15,    82,    81,     0,    43,     0,
      24,    39,     0,    49,    47,    51,    44,   104,     8,     0,
       0,     0,     0,     0,     0,    83,     0,     0,    64,     0,
      19,    60,     0,    70,    68,    72,    65,   105,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      88,    95,    97,   100,   102,     0,    86,    13,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    42,    56,    50,    58,    48,    52,    45,    84,     0,
       0,     0,    28,    20,     0,    23,    61,    63,    77,    71,
      79,    69,    73,    66,     0,    16,    25,     0,     0,     0,
      87,    14,    33,     0,     0,     0,    29,     0,     0,     0,
     106,     0,     0,    57,    53,    46,    27,    31,     0,    32,
       0,    78,    74,    67,     0,     0,    30,    21,    17,    26,
       0,     0,    18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   211,   206,  -120,   -25,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -119,  -120,
     -17,    89,  -120,  -120,    38,  -120,  -120,  -120,  -120,  -120,
    -120,   111,  -120,   -62,  -120,  -120,   134,  -120,  -120,  -120,
    -120,  -120,  -120,    90,  -120,  -120,  -120,   182,  -120,  -120,
    -120,  -120,   -28,  -120,  -120,   118,  -120,  -120,   119,  -120,
    -120,   120,  -120,   -26,  -120
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    13,    18,    30,    31,    42,   150,   108,
     181,   200,   129,   175,   130,    32,   110,   182,   153,   173,
     154,    49,   111,    82,    50,   116,   169,   114,   113,   115,
     168,   143,   167,    70,   131,   102,    71,   136,   179,   134,
     133,   135,   178,   159,   177,    72,    51,    34,    64,   125,
      96,   149,    35,    89,    90,    36,    91,    92,    37,    93,
      94,    38,    39,    40,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    52,     1,    53,    97,    55,     6,    76,    20,    21,
       7,   155,    67,    56,    67,    65,     8,     4,    11,    75,
      52,    12,    53,    22,    23,    24,    25,    68,    20,    21,
       9,   171,    10,    26,    15,    27,    17,    28,    46,    21,
      46,    21,    20,    21,    23,    24,    25,    54,    77,    29,
      16,    47,     5,    69,    44,    69,    57,    20,    21,    76,
      43,   118,   118,    53,    53,    53,    53,    53,    53,   156,
     157,   197,    47,    23,    24,    25,   165,    20,    21,    48,
      45,    48,   202,   117,    27,    78,    79,   144,   144,    52,
     -82,    53,    22,    23,    24,    25,    66,   148,    29,    53,
      77,    73,    26,    80,    27,    88,    28,   160,   160,    95,
      20,    21,   100,    20,    21,    79,   186,   107,    29,    83,
      84,   170,   166,    53,   142,   109,   172,   158,   103,   104,
      85,    86,    58,    59,   174,  -107,  -107,  -107,  -107,   105,
     106,   183,   184,   185,    20,    21,   112,   -90,   187,    20,
      21,   191,   192,   193,   126,   -90,   188,   -90,   127,    22,
      23,    24,    25,    60,    61,    23,    24,    25,   132,    26,
     128,    27,    87,    28,    58,    59,    27,   198,   199,   137,
      62,    63,   138,   -92,   139,    29,   164,   151,   146,   152,
      29,   -92,   147,   -92,    20,    21,    81,   -41,   101,   -62,
     140,   141,    98,    99,   162,    60,    61,   119,   120,   163,
     121,   122,   180,   123,   124,   176,   189,   190,   195,   194,
     196,    14,    19,   201,   161,   145,     0,    74
};

static const yytype_int16 yycheck[] =
{
      17,    29,    25,    29,    66,    30,     0,     3,     3,     4,
      23,   130,     3,    30,     3,    41,    23,     5,    19,    45,
      48,    22,    48,    18,    19,    20,    21,    16,     3,     4,
       6,   150,    40,    28,    24,    30,    41,    32,     3,     4,
       3,     4,     3,     4,    19,    20,    21,    42,    44,    44,
      24,    16,    40,    44,     5,    44,    43,     3,     4,     3,
      44,    89,    90,    89,    90,    91,    92,    93,    94,   131,
     132,   190,    16,    19,    20,    21,   138,     3,     4,    44,
      44,    44,   201,    44,    30,    47,    48,   113,   114,   117,
      17,   117,    18,    19,    20,    21,    44,   125,    44,   125,
      44,     5,    28,    45,    30,    43,    32,   133,   134,    17,
       3,     4,    45,     3,     4,    77,    42,    31,    44,     5,
       6,   149,   139,   149,    17,    45,   151,    17,     5,     6,
      16,    17,     5,     6,   151,    36,    37,    38,    39,    16,
      17,   167,   168,   169,     3,     4,    13,    35,   173,     3,
       4,   177,   178,   179,    17,    43,   173,    45,    45,    18,
      19,    20,    21,    36,    37,    19,    20,    21,    13,    28,
      45,    30,    45,    32,     5,     6,    30,   194,   195,     5,
      38,    39,    43,    35,    34,    44,     5,    41,    17,    43,
      44,    43,    17,    45,     3,     4,    12,    13,    12,    13,
     111,   112,    68,    69,    17,    36,    37,    89,    90,    17,
      91,    92,    33,    93,    94,    43,    43,    29,    35,    43,
      43,    10,    16,    45,   134,   114,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    47,    48,     5,    40,     0,    23,    23,     6,
      40,    19,    22,    49,    49,    24,    24,    41,    50,    50,
       3,     4,    18,    19,    20,    21,    28,    30,    32,    44,
      51,    52,    61,    66,    93,    98,   101,   104,   107,   108,
     109,   110,    53,    44,     5,    44,     3,    16,    44,    67,
      70,    92,    98,   109,    42,    52,    66,    43,     5,     6,
      36,    37,    38,    39,    94,   109,    44,     3,    16,    44,
      79,    82,    91,     5,    93,   109,     3,    44,    70,    70,
      45,    12,    69,     5,     6,    16,    17,    45,    43,    99,
     100,   102,   103,   105,   106,    17,    96,    79,    82,    82,
      45,    12,    81,     5,     6,    16,    17,    31,    55,    45,
      62,    68,    13,    74,    73,    75,    71,    44,    98,   101,
     101,   104,   104,   107,   107,    95,    17,    45,    45,    58,
      60,    80,    13,    86,    85,    87,    83,     5,    43,    34,
      67,    67,    17,    77,   109,    77,    17,    17,    98,    97,
      54,    41,    43,    64,    66,    64,    79,    79,    17,    89,
     109,    89,    17,    17,     5,    79,    66,    78,    76,    72,
      98,    64,    52,    65,    66,    59,    43,    90,    88,    84,
      33,    56,    63,   109,   109,   109,    42,    52,    66,    43,
      29,   109,   109,   109,    43,    35,    43,    64,    66,    66,
      57,    45,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    51,    51,
      51,    51,    53,    54,    52,    55,    56,    57,    52,    58,
      59,    52,    60,    52,    62,    63,    61,    64,    64,    64,
      65,    65,    65,    65,    66,    66,    66,    66,    67,    68,
      67,    69,    67,    67,    71,    72,    70,    73,    70,    74,
      70,    75,    76,    70,    70,    70,    78,    77,    77,    79,
      80,    79,    81,    79,    79,    83,    84,    82,    85,    82,
      86,    82,    87,    88,    82,    82,    82,    90,    89,    89,
      91,    92,    94,    95,    93,    96,    97,    93,    98,    99,
      98,   100,    98,   101,   102,   101,   103,   101,   104,   105,
     104,   106,   104,   107,   107,   108,   108,   109,   109,   110,
     110,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     5,     3,     3,     3,     3,     2,
       2,     1,     0,     0,     7,     0,     0,     0,    12,     0,
       0,     9,     0,     6,     0,     0,     9,     3,     1,     2,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     4,     2,     0,     0,     6,     0,     4,     0,
       4,     0,     0,     6,     3,     1,     0,     3,     1,     1,
       0,     4,     0,     4,     2,     0,     0,     6,     0,     4,
       0,     4,     0,     0,     6,     3,     1,     0,     3,     1,
       1,     1,     0,     0,     5,     0,     0,     6,     1,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     1,     0,
       4,     0,     4,     1,     3,     4,     7,     1,     1,     1,
       1,     1
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
  case 2: /* S: START  */
#line 31 "icg.y"
              {printf("Input accepted.\n");}
#line 1454 "y.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 56 "icg.y"
              {while1();}
#line 1460 "y.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 56 "icg.y"
                                      {while2();}
#line 1466 "y.tab.c"
    break;

  case 14: /* LOOPS: WHILE $@1 '(' COND ')' $@2 LOOPBODY  */
#line 56 "icg.y"
                                                          {while3();}
#line 1472 "y.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 57 "icg.y"
                           {for1();}
#line 1478 "y.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 57 "icg.y"
                                             {for2();}
#line 1484 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 57 "icg.y"
                                                                    {for3();}
#line 1490 "y.tab.c"
    break;

  case 18: /* LOOPS: FOR '(' ASSIGN_EXPR $@3 ';' COND $@4 ';' statement $@5 ')' LOOPBODY  */
#line 57 "icg.y"
                                                                                          {for4();}
#line 1496 "y.tab.c"
    break;

  case 19: /* $@6: %empty  */
#line 58 "icg.y"
                        {ifelse1();}
#line 1502 "y.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 58 "icg.y"
                                             {ifelse2();}
#line 1508 "y.tab.c"
    break;

  case 21: /* LOOPS: IF '(' COND ')' $@6 LOOPBODY $@7 ELSE LOOPBODY  */
#line 58 "icg.y"
                                                                       {ifelse3();}
#line 1514 "y.tab.c"
    break;

  case 22: /* $@8: %empty  */
#line 59 "icg.y"
                        {if1();}
#line 1520 "y.tab.c"
    break;

  case 23: /* LOOPS: IF '(' COND ')' $@8 LOOPBODY  */
#line 59 "icg.y"
                                         {if3();}
#line 1526 "y.tab.c"
    break;

  case 24: /* $@9: %empty  */
#line 62 "icg.y"
                              {ternary1();}
#line 1532 "y.tab.c"
    break;

  case 25: /* $@10: %empty  */
#line 62 "icg.y"
                                                            {ternary2();}
#line 1538 "y.tab.c"
    break;

  case 26: /* TERNARY_EXPR: '(' TERNARY_COND ')' $@9 T_ques statement $@10 T_colon statement  */
#line 62 "icg.y"
                                                                                           {ternary3();}
#line 1544 "y.tab.c"
    break;

  case 38: /* TERNARY_COND: T_B  */
#line 85 "icg.y"
                    {codegen_assigna();}
#line 1550 "y.tab.c"
    break;

  case 39: /* $@11: %empty  */
#line 86 "icg.y"
                         {codegen_assigna();}
#line 1556 "y.tab.c"
    break;

  case 41: /* $@12: %empty  */
#line 87 "icg.y"
                    {codegen_assigna();}
#line 1562 "y.tab.c"
    break;

  case 43: /* TERNARY_COND: T_not T_B  */
#line 88 "icg.y"
                         {codegen_assigna();}
#line 1568 "y.tab.c"
    break;

  case 44: /* $@13: %empty  */
#line 91 "icg.y"
              {push();}
#line 1574 "y.tab.c"
    break;

  case 45: /* $@14: %empty  */
#line 91 "icg.y"
                           {push();}
#line 1580 "y.tab.c"
    break;

  case 47: /* $@15: %empty  */
#line 92 "icg.y"
            {push();}
#line 1586 "y.tab.c"
    break;

  case 49: /* $@16: %empty  */
#line 93 "icg.y"
            {push();}
#line 1592 "y.tab.c"
    break;

  case 51: /* $@17: %empty  */
#line 94 "icg.y"
             {push();}
#line 1598 "y.tab.c"
    break;

  case 52: /* $@18: %empty  */
#line 94 "icg.y"
                           {push();}
#line 1604 "y.tab.c"
    break;

  case 55: /* T_B: T_V  */
#line 96 "icg.y"
        {pushab();}
#line 1610 "y.tab.c"
    break;

  case 56: /* $@19: %empty  */
#line 99 "icg.y"
         {push();}
#line 1616 "y.tab.c"
    break;

  case 58: /* T_F: LIT  */
#line 100 "icg.y"
      {pusha();}
#line 1622 "y.tab.c"
    break;

  case 59: /* COND: B  */
#line 103 "icg.y"
          {codegen_assigna();}
#line 1628 "y.tab.c"
    break;

  case 60: /* $@20: %empty  */
#line 104 "icg.y"
               {codegen_assigna();}
#line 1634 "y.tab.c"
    break;

  case 62: /* $@21: %empty  */
#line 105 "icg.y"
          {codegen_assigna();}
#line 1640 "y.tab.c"
    break;

  case 64: /* COND: T_not B  */
#line 106 "icg.y"
               {codegen_assigna();}
#line 1646 "y.tab.c"
    break;

  case 65: /* $@22: %empty  */
#line 109 "icg.y"
          {push();}
#line 1652 "y.tab.c"
    break;

  case 66: /* $@23: %empty  */
#line 109 "icg.y"
                       {push();}
#line 1658 "y.tab.c"
    break;

  case 68: /* $@24: %empty  */
#line 110 "icg.y"
          {push();}
#line 1664 "y.tab.c"
    break;

  case 70: /* $@25: %empty  */
#line 111 "icg.y"
          {push();}
#line 1670 "y.tab.c"
    break;

  case 72: /* $@26: %empty  */
#line 112 "icg.y"
           {push();}
#line 1676 "y.tab.c"
    break;

  case 73: /* $@27: %empty  */
#line 112 "icg.y"
                         {push();}
#line 1682 "y.tab.c"
    break;

  case 76: /* B: V  */
#line 114 "icg.y"
      {pushab();}
#line 1688 "y.tab.c"
    break;

  case 77: /* $@28: %empty  */
#line 117 "icg.y"
       {push();}
#line 1694 "y.tab.c"
    break;

  case 79: /* F: LIT  */
#line 118 "icg.y"
      {pusha();}
#line 1700 "y.tab.c"
    break;

  case 80: /* V: ID  */
#line 121 "icg.y"
      {push();}
#line 1706 "y.tab.c"
    break;

  case 81: /* T_V: ID  */
#line 123 "icg.y"
        {pushx();}
#line 1712 "y.tab.c"
    break;

  case 82: /* $@29: %empty  */
#line 126 "icg.y"
            {push();}
#line 1718 "y.tab.c"
    break;

  case 83: /* $@30: %empty  */
#line 126 "icg.y"
                           {push();}
#line 1724 "y.tab.c"
    break;

  case 84: /* ASSIGN_EXPR: LIT $@29 T_eq $@30 EXP  */
#line 126 "icg.y"
                                         {codegen_assign();}
#line 1730 "y.tab.c"
    break;

  case 85: /* $@31: %empty  */
#line 127 "icg.y"
                 {push();}
#line 1736 "y.tab.c"
    break;

  case 86: /* $@32: %empty  */
#line 127 "icg.y"
                                {push();}
#line 1742 "y.tab.c"
    break;

  case 87: /* ASSIGN_EXPR: TYPE LIT $@31 T_eq $@32 EXP  */
#line 127 "icg.y"
                                              {codegen_assign();}
#line 1748 "y.tab.c"
    break;

  case 89: /* $@33: %empty  */
#line 132 "icg.y"
                     {push();}
#line 1754 "y.tab.c"
    break;

  case 90: /* EXP: EXP T_lt $@33 ADDSUB  */
#line 132 "icg.y"
                                      {codegen();}
#line 1760 "y.tab.c"
    break;

  case 91: /* $@34: %empty  */
#line 133 "icg.y"
                     {push();}
#line 1766 "y.tab.c"
    break;

  case 92: /* EXP: EXP T_gt $@34 ADDSUB  */
#line 133 "icg.y"
                                      {codegen();}
#line 1772 "y.tab.c"
    break;

  case 94: /* $@35: %empty  */
#line 138 "icg.y"
                 {push();}
#line 1778 "y.tab.c"
    break;

  case 95: /* ADDSUB: EXP T_pl $@35 TERM  */
#line 138 "icg.y"
                                {codegen();}
#line 1784 "y.tab.c"
    break;

  case 96: /* $@36: %empty  */
#line 139 "icg.y"
                  {push();}
#line 1790 "y.tab.c"
    break;

  case 97: /* ADDSUB: EXP T_min $@36 TERM  */
#line 139 "icg.y"
                                 {codegen();}
#line 1796 "y.tab.c"
    break;

  case 99: /* $@37: %empty  */
#line 144 "icg.y"
                   {push();}
#line 1802 "y.tab.c"
    break;

  case 100: /* TERM: TERM T_mul $@37 FACTOR  */
#line 144 "icg.y"
                                    {codegen();}
#line 1808 "y.tab.c"
    break;

  case 101: /* $@38: %empty  */
#line 145 "icg.y"
                   {push();}
#line 1814 "y.tab.c"
    break;

  case 102: /* TERM: TERM T_div $@38 FACTOR  */
#line 145 "icg.y"
                                    {codegen();}
#line 1820 "y.tab.c"
    break;

  case 107: /* LIT: ID  */
#line 158 "icg.y"
           {push();}
#line 1826 "y.tab.c"
    break;

  case 108: /* LIT: NUM  */
#line 159 "icg.y"
            {push();}
#line 1832 "y.tab.c"
    break;


#line 1836 "y.tab.c"

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

#line 189 "icg.y"


#include "lex.yy.c"
#include<ctype.h>
char st[100][100];

char i_[2]="0";
int temp_i=0;
char tmp_i[3];
char temp[2]="t";
int label[20];
int lnum=0;
int ltop=0;
int abcd=0;
int l_while=0;
int l_for=0;
int flag_set = 1;

int main(int argc,char *argv[])
{

  yyin = fopen("input.c","r");
  if(!yyparse())  //yyparse-> 0 if success
  {
    printf("Parsing Complete\n");
    printf("---------------------Quadruples-------------------------\n\n");
    printf("Operator \t Arg1 \t\t Arg2 \t\t Result \n");
    int i;
    for(i=0;i<quadlen;i++)
    {
        printf("%-8s \t %-8s \t %-8s \t %-6s \n",q[i].op,q[i].arg1,q[i].arg2,q[i].res);
    }
  }
  else
  {
    printf("Parsing failed\n");
  }

  fclose(yyin);
  return 0;
}

void yyerror(char *s)
{
  printf("Error :%s at %d \n",yytext,yylineno);
}

push()
{
strcpy(st[++top],yytext);
}
pusha()
{
strcpy(st[++top],"  ");
}
pushx()
{
strcpy(st[++top],"x ");
}
pushab()
{
strcpy(st[++top],"  ");
strcpy(st[++top],"  ");
strcpy(st[++top],"  ");
}
codegen()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,st[top-1]);
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    top-=2;
    strcpy(st[top],temp);

temp_i++;
}
codegen_assigna()
{
strcpy(temp,"T");
sprintf(tmp_i, "%d", temp_i);
strcat(temp,tmp_i);
printf("%s = %s %s %s %s\n",temp,st[top-3],st[top-2],st[top-1],st[top]);
//printf("%d\n",strlen(st[top]));
if(strlen(st[top])==1)
{
	//printf("hello");
	
    char t[20];
	//printf("hello");
	strcpy(t,st[top-2]);
	strcat(t,st[top-1]);
	q[quadlen].op = (char*)malloc(sizeof(char)*strlen(t));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,t);
    strcpy(q[quadlen].arg1,st[top-3]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    
}
else
{
	q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,st[top-2]);
    strcpy(q[quadlen].arg1,st[top-3]);
    strcpy(q[quadlen].arg2,st[top-1]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
}
top-=4;

temp_i++;
strcpy(st[++top],temp);
}

codegen_umin()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("%s = -%s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"-");
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    top--;
    strcpy(st[top],temp);
    temp_i++;
}
codegen_assign()
{
    printf("%s = %s\n",st[top-3],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    strcpy(q[quadlen].op,"=");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,st[top-3]);
    quadlen++;
    top-=2;
}

if1()
{
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,st[top-2]);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 quadlen++;

 temp_i++;
 label[++ltop]=lnum;
}

if3()
{
    int y;
    y=label[ltop--];
    printf("L%d: \n",y);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}

ifelse1()
{
    lnum++;
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
    temp_i++;
    label[++ltop]=lnum;
}

ifelse2()
{
    int x;
    lnum++;
    x=label[ltop--];
    printf("goto L%d\n",lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;
    printf("L%d: \n",x);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");

    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
    label[++ltop]=lnum;
}

ifelse3()
{
int y;
y=label[ltop--];
printf("L%d: \n",y);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
lnum++;
}

ternary1()
{
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

 temp_i++;
 label[++ltop]=lnum;
}

ternary2()
{
int x;
lnum++;
x=label[ltop--];
printf("goto L%d\n",lnum);
q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;
printf("L%d: \n",x);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
    label[++ltop]=lnum;
}

ternary3()
{
int y;
y=label[ltop--];
printf("L%d: \n",y);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
lnum++;
}

while1()
{

    l_while = lnum;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}

while2()
{
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

 temp_i++;
 }

while3()
{

printf("goto L%d \n",l_while);
q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(l_while+2));
    strcpy(q[quadlen].op,"goto");
    char x[10];
    sprintf(x,"%d",l_while);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x1[10];
    sprintf(x1,"%d",lnum-1);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
    quadlen++;
}

for1()
{
    l_for = lnum;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}
for2()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

    temp_i++;
    label[++ltop]=lnum;
    lnum++;
    printf("goto L%d\n",lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char x1[10];
    sprintf(x1,"%d",lnum);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
    quadlen++;
    label[++ltop]=lnum;
    printf("L%d: \n",++lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x2[10];
    sprintf(x2,"%d",lnum);
    char l2[]="L";
    strcpy(q[quadlen].res,strcat(l2,x2));
    quadlen++;
 }
for3()
{
    int x;
    x=label[ltop--];
    printf("goto L%d \n",l_for);

    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",l_for);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;


    printf("L%d: \n",x);

    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;

}

for4()
{
    int x;
    x=label[ltop--];
    printf("goto L%d \n",lnum);

    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;

    printf("L%d: \n",x);

    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
}
