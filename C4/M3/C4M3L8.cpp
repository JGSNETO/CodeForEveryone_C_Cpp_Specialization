/*
# Polish notation

- Also known as Prefix Notation, is a way of writing arithmetic expressions where the operator precedes the operands.
In this notation, parentheses are not needed to indicate the order of operations as the order is strictly defined by the position of
the operators and operands. 

- Normal expression: 3 + 4
- Polish expression: + 3 4
- Reverse polish notation: 3 4 +

*/

#include <iostream>
#include <stack>
#include <string>
#include <cctype>  // For isdigit function

// Function to check if the character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to perform basic operations
int performOperation(char operation, int operand1, int operand2) {
    switch (operation) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        default: return 0;
    }
}

// Function to evaluate a prefix expression
int evaluatePrefix(const std::string& expression) {
    std::stack<int> stack;

    // Traverse the expression from right to left
    for (int i = expression.size() - 1; i >= 0; --i) {
        char current = expression[i];

        // If the character is a digit (operand), push it to the stack
        if (isdigit(current)) {
            stack.push(current - '0');  // Convert char to int
        }
        // If the character is an operator, pop two operands and apply the operation
        else if (isOperator(current)) {
            int operand1 = stack.top(); stack.pop();
            int operand2 = stack.top(); stack.pop();
            int result = performOperation(current, operand1, operand2);
            stack.push(result);  // Push the result back to the stack
        }
    }

    // The result is the top of the stack
    return stack.top();
}

int main() {
    std::string prefixExpression = "+9*26";
    int result = evaluatePrefix(prefixExpression);
    std::cout << "Result of prefix expression " << prefixExpression << " is: " << result << std::endl;
    return 0;
}
