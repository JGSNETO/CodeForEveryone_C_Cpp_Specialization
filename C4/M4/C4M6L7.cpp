/*
# Static Assert 

- A static assert is a compile-time assertion that checks conditions during the compilation process rather than at runtime. Unlike regulat assert,
which is used to check conditions at runtime and can be disabled in producion builds, static aseerts are used to validate conditions
during compile time, preventing the program from compiling if condition is false. 

This is useful for catching errors early in the development process, ensuring that certain conditions or constraints are met, and
providing meaningful error messages if they aren't. 

## Syntax
static_assert(constexpr-condition, error-message);

1. constexpr-condition: A constant expression that can be evaluated at compile-time
2. error-message: A string literal that will be displayed if the assertion fails. 
*/