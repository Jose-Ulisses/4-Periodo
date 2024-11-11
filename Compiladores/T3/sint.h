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

#ifndef YY_YY_SINT_H_INCLUDED
# define YY_YY_SINT_H_INCLUDED
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
    NUM = 258,                     /* NUM  */
    ID = 259,                      /* ID  */
    IF = 260,                      /* IF  */
    FOR = 261,                     /* FOR  */
    WHILE = 262,                   /* WHILE  */
    AND = 263,                     /* AND  */
    OR = 264,                      /* OR  */
    EQ = 265,                      /* EQ  */
    LT = 266,                      /* LT  */
    LE = 267,                      /* LE  */
    GT = 268,                      /* GT  */
    GE = 269,                      /* GE  */
    INT = 270,                     /* INT  */
    FLOAT = 271,                   /* FLOAT  */
    OPAR = 272,                    /* OPAR  */
    CPAR = 273,                    /* CPAR  */
    OKEY = 274,                    /* OKEY  */
    CKEY = 275,                    /* CKEY  */
    PV = 276,                      /* PV  */
    VIR = 277,                     /* VIR  */
    ATR = 278,                     /* ATR  */
    ELSE = 279,                    /* ELSE  */
    PLUS = 280,                    /* PLUS  */
    MINUS = 281,                   /* MINUS  */
    RTRN = 282,                    /* RTRN  */
    NOT = 283,                     /* NOT  */
    PER = 284,                     /* PER  */
    AST = 285,                     /* AST  */
    OB = 286,                      /* OB  */
    CB = 287,                      /* CB  */
    QUOTE = 288,                   /* QUOTE  */
    INVSLASH = 289,                /* INVSLASH  */
    MULT = 290,                    /* MULT  */
    STRING = 291,                  /* STRING  */
    VOID = 292,                    /* VOID  */
    CHAR = 293                     /* CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define ID 259
#define IF 260
#define FOR 261
#define WHILE 262
#define AND 263
#define OR 264
#define EQ 265
#define LT 266
#define LE 267
#define GT 268
#define GE 269
#define INT 270
#define FLOAT 271
#define OPAR 272
#define CPAR 273
#define OKEY 274
#define CKEY 275
#define PV 276
#define VIR 277
#define ATR 278
#define ELSE 279
#define PLUS 280
#define MINUS 281
#define RTRN 282
#define NOT 283
#define PER 284
#define AST 285
#define OB 286
#define CB 287
#define QUOTE 288
#define INVSLASH 289
#define MULT 290
#define STRING 291
#define VOID 292
#define CHAR 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SINT_H_INCLUDED  */
