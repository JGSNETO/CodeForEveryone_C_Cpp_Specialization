/*

- Enum class is a type-safe, better form of enumeration type.
Example:

enum class Color{RED, GREEN, BLUE};
enum class Stoplight{RED, YELLOW, GREEN};

- With simple enums these shared enumerators would be ambiguous. In C++ 11 they constitute separate type Stoplight::RED is different in 
type from Color::RED; both can be used in the same scope.

- The underlying type of enum classes is by default an int; this can be specified to be a different integral type.
- enum class Color :  short {RED, BLUE, GREEN};
- enum class identifier : Integral_Type {enumerator list};

Example:
- Define an enum class that models three logical values- yes, no, maybe- whose underlying type is unsigned and where yes>maybe>no. 
Yes is worth 2 maybes.
*/

#include <iostream>

enum class LogicalValue : unsigned {
    No = 0,
    Maybe = 1,
    Yes = 2
};

int main(){

    LogicalValue lv1 = LogicalValue::Yes;
    LogicalValue lv2 = LogicalValue::Maybe;
    LogicalValue lv3 = LogicalValue::Yes;
    /*You can perform comparisons and arithmetic operations using static_cast to convert the enum values to their underlying type.*/
    /*The main function demonstrates how to use and display these values by casting them to unsigned for printing.*/
    std::cout << "Yes is " << static_cast<unsigned>(lv1) << "\n";
    std::cout << "Maybe is " << static_cast<unsigned>(lv2) << "\n";
    std::cout << "No is " << static_cast<unsigned>(lv3) << "\n";

    return 0;

}