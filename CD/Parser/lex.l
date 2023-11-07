%{
#include <iostream>
#include <cstdlib>
using namespace std;

extern int line_number;
extern int yylex();  // Define the yylex() function
%}

%option noyywrap

%{
int line_number = 1;
%}

%%

[ \t\r\n]        /* Ignore whitespace and tabs */
    ;

"int"            { cout << "INT_TYPE" << endl; }
"float"          { cout << "FLOAT_TYPE" << endl; }
"bool"           { cout << "BOOL_TYPE" << endl; }
"string"         { cout << "STRING_TYPE" << endl; }
"if"             { cout << "IF" << endl; }
"else"           { cout << "ELSE" << endl; }
"while"          { cout << "WHILE" << endl; }
"for"            { cout << "FOR" << endl; }
"print"          { cout << "PRINT" << endl; }
"main"           { cout << "MAIN_KEYWORD" << endl; } // Changed "main" to "MAIN_KEYWORD"
[0-9]+           { cout << "INTEGER: " << yytext << endl; }
[0-9]+"."[0-9]+  { cout << "FLOAT: " << yytext << endl; }
"true|false"     { cout << "BOOLEAN: " << yytext << endl; }
\"[^\"]*\"       { cout << "STRING: " << yytext << endl; }
"=="             { cout << "EQUAL" << endl; }
"!="             { cout << "NOT_EQUAL" << endl; }
"<"              { cout << "LESS_THAN" << endl; }
"<="             { cout << "LESS_THAN_OR_EQUAL" << endl; }
">"              { cout << "GREATER_THAN" << endl; }
">="             { cout << "GREATER_THAN_OR_EQUAL" << endl; }
"+"              { cout << "ADD" << endl; }
"-"              { cout << "SUBTRACT" << endl; }
"*"              { cout << "MULTIPLY" << endl; }
"/"              { cout << "DIVIDE" << endl; }
"="              { cout << "ASSIGN" << endl; }
"("              { cout << "LEFT_PAREN" << endl; }
")"              { cout << "RIGHT_PAREN" << endl; }
"{"              { cout << "LEFT_BRACE" << endl; }
"}"              { cout << "RIGHT_BRACE" << endl; }
";"              { cout << "SEMICOLON" << endl; }

[a-zA-Z_][a-zA-Z0-9_]* {
    cout << "IDENTIFIER: " << yytext << endl;
}

.                { cout << "UNKNOWN: " << yytext << endl; }

%%
 

