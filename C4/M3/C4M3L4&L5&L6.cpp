/*
# Lookahead algorithm

- Is a technique often used in parsing and decision-making problems, particularly in scenarios where you need to make
decisions based on upcoming elements. In C++, the lookahead approach involves peeking ahead in the input data(like a string or stream)
to see what comes next before actually consumint it.

# Example scenario

- Consider a simple expression parser that needs to handle numbers and addition
- Input: "1+2+3"
- Goal: Parse this inout to evaluate the expression. 

# Code explanation

- Lookahead Character: The lookahead variable holds the current character being considered but not yet consumed.
- Next Character: The nextChar() function returns the next character from the input and updates the pos pointer.
- Match: The match() function checks if the current lookahead character matches the expected one, then advances to the next character.
- Expression Parsing: The expr() function handles addition by checking for a '+' sign using lookahead, calling term() to get the number, and then recursively evaluating the rest of the expression.

*/

#include <iostream>
#include <string>
#include <cctype>

class Parser {
    std::string input;
    size_t pos;
    char lookahead;

public:
    Parser(const std::string &str) : input(str), pos(0), lookahead(0) {
        lookahead = nextChar();
    }

    // Function to get the next character in the input
    char nextChar() {
        if (pos < input.length())
            return input[pos++];
        return '\0';  // End of input
    }

    // Function to match the current lookahead character and move to the next one
    void match(char expected) {
        if (lookahead == expected)
            lookahead = nextChar();
        else
            std::cerr << "Error: expected " << expected << " but got " << lookahead << "\n";
    }

    // Recursive function to parse and evaluate the expression
    int expr() {
        int result = term();
        while (lookahead == '+') {
            match('+');
            result += term();
        }
        return result;
    }

    // Function to parse a term (in this case, just a number)
    int term() {
        int result = 0;
        if (isdigit(lookahead)) {
            result = lookahead - '0';
            match(lookahead);
        } else {
            std::cerr << "Error: expected a digit but got " << lookahead << "\n";
        }
        return result;
    }
};

int main() {
    std::string input = "1+2+3";
    Parser parser(input);
    int result = parser.expr();
    std::cout << "Result: " << result << std::endl;  // Output should be 6
    return 0;
}
