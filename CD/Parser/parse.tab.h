/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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
    INT_TYPE = 258,                /* INT_TYPE  */
    FLOAT_TYPE = 259,              /* FLOAT_TYPE  */
    BOOL_TYPE = 260,               /* BOOL_TYPE  */
    STRING_TYPE = 261,             /* STRING_TYPE  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    WHILE = 264,                   /* WHILE  */
    FOR = 265,                     /* FOR  */
    PRINT = 266,                   /* PRINT  */
    MAIN_KEYWORD = 267,            /* MAIN_KEYWORD  */
    INTEGER = 268,                 /* INTEGER  */
    FLOAT = 269,                   /* FLOAT  */
    BOOLEAN = 270,                 /* BOOLEAN  */
    STRING = 271,                  /* STRING  */
    EQUAL = 272,                   /* EQUAL  */
    NOT_EQUAL = 273,               /* NOT_EQUAL  */
    LESS_THAN = 274,               /* LESS_THAN  */
    LESS_THAN_OR_EQUAL = 275,      /* LESS_THAN_OR_EQUAL  */
    GREATER_THAN = 276,            /* GREATER_THAN  */
    GREATER_THAN_OR_EQUAL = 277,   /* GREATER_THAN_OR_EQUAL  */
    ADD = 278,                     /* ADD  */
    SUBTRACT = 279,                /* SUBTRACT  */
    MULTIPLY = 280,                /* MULTIPLY  */
    DIVIDE = 281,                  /* DIVIDE  */
    ASSIGN = 282,                  /* ASSIGN  */
    LEFT_PAREN = 283,              /* LEFT_PAREN  */
    RIGHT_PAREN = 284,             /* RIGHT_PAREN  */
    LEFT_BRACE = 285,              /* LEFT_BRACE  */
    RIGHT_BRACE = 286,             /* RIGHT_BRACE  */
    SEMICOLON = 287,               /* SEMICOLON  */
    IDENTIFIER = 288,              /* IDENTIFIER  */
    UNKNOWN = 289                  /* UNKNOWN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
