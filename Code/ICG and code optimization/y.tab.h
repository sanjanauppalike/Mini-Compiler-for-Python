/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    DOT = 258,
    LINE = 259,
    FALSE = 260,
    NONE = 261,
    TRUE = 262,
    LAND = 263,
    BREAK = 264,
    CONTINUE = 265,
    ELIF = 266,
    DEL = 267,
    ELSE = 268,
    IF = 269,
    IN = 270,
    NOT = 271,
    LOR = 272,
    INPUT = 273,
    PRINT = 274,
    INT = 275,
    FLOAT = 276,
    STR = 277,
    LIST = 278,
    SPLIT = 279,
    MAP = 280,
    APPEND = 281,
    POP = 282,
    INSERT = 283,
    LEN = 284,
    ID = 285,
    CINT = 286,
    CFLOAT = 287,
    SEMI = 288,
    COMMA = 289,
    CSTR = 290,
    EPOP = 291,
    MUL = 292,
    DIV = 293,
    FDIV = 294,
    MOD = 295,
    ADD = 296,
    SUB = 297,
    ASOP = 298,
    G = 299,
    L = 300,
    GE = 301,
    LE = 302,
    EOP = 303,
    NEOP = 304,
    XOR = 305,
    BAND = 306,
    BOR = 307,
    LBRACE = 308,
    RBRACE = 309,
    LPAREN = 310,
    RPAREN = 311,
    LBRACKET = 312,
    RBRACKET = 313,
    RANGE = 314,
    COLON = 315,
    INDENT = 316
  };
#endif
/* Tokens.  */
#define DOT 258
#define LINE 259
#define FALSE 260
#define NONE 261
#define TRUE 262
#define LAND 263
#define BREAK 264
#define CONTINUE 265
#define ELIF 266
#define DEL 267
#define ELSE 268
#define IF 269
#define IN 270
#define NOT 271
#define LOR 272
#define INPUT 273
#define PRINT 274
#define INT 275
#define FLOAT 276
#define STR 277
#define LIST 278
#define SPLIT 279
#define MAP 280
#define APPEND 281
#define POP 282
#define INSERT 283
#define LEN 284
#define ID 285
#define CINT 286
#define CFLOAT 287
#define SEMI 288
#define COMMA 289
#define CSTR 290
#define EPOP 291
#define MUL 292
#define DIV 293
#define FDIV 294
#define MOD 295
#define ADD 296
#define SUB 297
#define ASOP 298
#define G 299
#define L 300
#define GE 301
#define LE 302
#define EOP 303
#define NEOP 304
#define XOR 305
#define BAND 306
#define BOR 307
#define LBRACE 308
#define RBRACE 309
#define LPAREN 310
#define RPAREN 311
#define LBRACKET 312
#define RBRACKET 313
#define RANGE 314
#define COLON 315
#define INDENT 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 250 "python.y"
 struct{char value[1024]; int type;struct Node *node;char lhs[1024]  ;char code[1024];char begin[1024]; char end[1024];}ctype; char val[1024]; 

#line 182 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
