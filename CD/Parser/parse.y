%{
#include <iostream>
#include <cstdlib>
#include"lex.yy.c"
using namespace std;

extern int line_number;
extern int yylex();

void yyerror(const char* s);
%}

%token INT_TYPE FLOAT_TYPE BOOL_TYPE STRING_TYPE
%token IF ELSE WHILE FOR PRINT MAIN_KEYWORD
%token INTEGER FLOAT BOOLEAN STRING
%token EQUAL NOT_EQUAL LESS_THAN LESS_THAN_OR_EQUAL GREATER_THAN GREATER_THAN_OR_EQUAL
%token ADD SUBTRACT MULTIPLY DIVIDE ASSIGN
%token LEFT_PAREN RIGHT_PAREN LEFT_BRACE RIGHT_BRACE SEMICOLON
%token IDENTIFIER
%token UNKNOWN

%left '+' '-'
%left '*' '/'

%%

program:
    declaration_list MAIN_KEYWORD compound_statement

declaration_list:
    /* Empty, or a list of declarations */

declaration:
    type_specifier IDENTIFIER SEMICOLON

type_specifier:
    INT_TYPE
    | FLOAT_TYPE
    | BOOL_TYPE
    | STRING_TYPE

compound_statement:
    LEFT_BRACE statement_list RIGHT_BRACE

statement_list:
    /* Empty, or a list of statements */

statement:
    expression_statement
    | declaration
    | if_statement
    | while_statement
    | for_statement
    | print_statement

expression_statement:
    expression SEMICOLON

expression:
    assignment_expression

assignment_expression:
    logical_or_expression
    | logical_or_expression ASSIGN assignment_expression

logical_or_expression:
    logical_and_expression
    | logical_or_expression "||" logical_and_expression

logical_and_expression:
    equality_expression
    | logical_and_expression "&&" equality_expression

equality_expression:
    relational_expression
    | equality_expression EQUAL relational_expression
    | equality_expression NOT_EQUAL relational_expression

relational_expression:
    additive_expression
    | relational_expression LESS_THAN additive_expression
    | relational_expression LESS_THAN_OR_EQUAL additive_expression
    | relational_expression GREATER_THAN additive_expression
    | relational_expression GREATER_THAN_OR_EQUAL additive_expression

additive_expression:
    multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression

multiplicative_expression:
    primary_expression
    | multiplicative_expression '*' primary_expression
    | multiplicative_expression '/' primary_expression

primary_expression:
    IDENTIFIER
    | INTEGER
    | FLOAT
    | BOOLEAN
    | STRING
    | '(' expression ')'

if_statement:
    IF '(' expression ')' statement
    | IF '(' expression ')' statement ELSE statement

while_statement:
    WHILE '(' expression ')' statement

for_statement:
    FOR '(' expression_statement expression_statement ')' statement

print_statement:
    PRINT expression SEMICOLON

%%

void yyerror(const char* s) {
    cout << "Parsing successful " << endl;
    exit(1);
}

int main() {
    if (yyparse() == 0) {
        cout << "Parsing successful." << endl;
    } else {
        cout << "Parsing failed." << endl;
    }
    return 0;
}
