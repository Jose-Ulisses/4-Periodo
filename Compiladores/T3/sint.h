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
    ENDIF = 261,                   /* ENDIF  */
    FOR = 262,                     /* FOR  */
    WHILE = 263,                   /* WHILE  */
    AND = 264,                     /* AND  */
    OR = 265,                      /* OR  */
    EQ = 266,                      /* EQ  */
    LT = 267,                      /* LT  */
    LE = 268,                      /* LE  */
    GT = 269,                      /* GT  */
    GE = 270,                      /* GE  */
    NEQ = 271,                     /* NEQ  */
    INT = 272,                     /* INT  */
    FLOAT = 273,                   /* FLOAT  */
    OPAR = 274,                    /* OPAR  */
    CPAR = 275,                    /* CPAR  */
    OKEY = 276,                    /* OKEY  */
    CKEY = 277,                    /* CKEY  */
    PV = 278,                      /* PV  */
    VIR = 279,                     /* VIR  */
    ATR = 280,                     /* ATR  */
    ELSE = 281,                    /* ELSE  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    RETURN = 284,                  /* RETURN  */
    NOT = 285,                     /* NOT  */
    PER = 286,                     /* PER  */
    AST = 287,                     /* AST  */
    OB = 288,                      /* OB  */
    CB = 289,                      /* CB  */
    QUOTE = 290,                   /* QUOTE  */
    INVSLASH = 291,                /* INVSLASH  */
    MULT = 292,                    /* MULT  */
    STRING = 293,                  /* STRING  */
    VOID = 294,                    /* VOID  */
    CHAR = 295,                    /* CHAR  */
    ARG_ARQ = 296,                 /* ARG_ARQ  */
    PH = 297                       /* PH  */
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
#define ENDIF 261
#define FOR 262
#define WHILE 263
#define AND 264
#define OR 265
#define EQ 266
#define LT 267
#define LE 268
#define GT 269
#define GE 270
#define NEQ 271
#define INT 272
#define FLOAT 273
#define OPAR 274
#define CPAR 275
#define OKEY 276
#define CKEY 277
#define PV 278
#define VIR 279
#define ATR 280
#define ELSE 281
#define PLUS 282
#define MINUS 283
#define RETURN 284
#define NOT 285
#define PER 286
#define AST 287
#define OB 288
#define CB 289
#define QUOTE 290
#define INVSLASH 291
#define MULT 292
#define STRING 293
#define VOID 294
#define CHAR 295
#define ARG_ARQ 296
#define PH 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SINT_H_INCLUDED  */
