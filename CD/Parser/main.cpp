#include <iostream>
#include "lex.yy.c" // Include your lexer
#include "parse.tab.c" // Include your parser
#include "intermediate_code.cpp" // Include other necessary files

int main() {
    int result = yyparse(); // Call the parser

    if (result == 0) {
        std::cout << "Parsing was successful." << std::endl;
        // You can perform additional actions here if needed.
    } else {
        std::cout << "Parsing failed." << std::endl;
        // You can handle the error or provide additional error messages here.
    }

    return result; // Return the result to the caller
}

