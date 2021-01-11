#define printfln(...) function_printfln(__VA_ARGS__)

// appends "\n" to printf
void function_printfln(const char *format, ...);
