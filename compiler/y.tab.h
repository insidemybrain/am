/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BLOCK_INIT = 258,
    BLOCK_END = 259,
    SEMI_COLON = 260,
    INTEGER = 261,
    FLOAT = 262,
    BOOLEAN = 263,
    CHARACTER = 264,
    ARITHMETIC_1 = 265,
    ARITHMETIC_2 = 266,
    BOOLEAN_LOGIC = 267,
    EQUALITY_TEST = 268,
    ORDER_RELATION = 269,
    ASSIGNMENT = 270,
    NOT = 271,
    COLON = 272,
    QUESTION = 273,
    VAR = 274,
    CONST = 275,
    EXPLICIT_TYPE = 276,
    END_LINE = 277
  };
#endif
/* Tokens.  */
#define BLOCK_INIT 258
#define BLOCK_END 259
#define SEMI_COLON 260
#define INTEGER 261
#define FLOAT 262
#define BOOLEAN 263
#define CHARACTER 264
#define ARITHMETIC_1 265
#define ARITHMETIC_2 266
#define BOOLEAN_LOGIC 267
#define EQUALITY_TEST 268
#define ORDER_RELATION 269
#define ASSIGNMENT 270
#define NOT 271
#define COLON 272
#define QUESTION 273
#define VAR 274
#define CONST 275
#define EXPLICIT_TYPE 276
#define END_LINE 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
