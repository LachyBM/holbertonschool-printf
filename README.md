## _printf

A simplified printf from <stdlib>.

##Description

_printf is an integer function which takes variadic input, and writes buffered and formatted output to stdout.

## Return Value

Returns the total number of characters written.
Returns (-1) on error.

## Supported Conversion Specifiers

| Specifier | Description                                      | Example Input                                          | Example Output                              |
|-----------|--------------------------------------------------|--------------------------------------------------------|---------------------------------------------|
| `%c`      | Prints a single character                        | `_printf("Character:[%c]\n", 'H');`                    | `Character:[H]`                             |
| `%s`      | Prints a string of characters                    | `_printf("String:[%s]\n", "I am a string !");`         | `String:[I am a string !]`                  |
| `%%`      | Prints a literal percent sign                    | `_printf("Percent:[%%]\n");`                           | `Percent:[%]`                               |
| `%d`      | Prints a signed decimal integer                  | `_printf("Negative:[%d]\n", -762534);`                 | `Negative:[-762534]`                        |
| `%i`      | Prints a signed integer (identical to `%d`)      | `_printf("Length:[%d, %i]\n", len, len);`              | `Length:[39, 39]`                           |
| `%u`      | Prints a signed integer (identical to `%u`)      | `_printf("Unsigned:[%u]\n", ui);`                      | `Unsigned:[2147484671]`                     |
| `%x, %X`      | Prints a signed integer (identical to `%x`)  | `_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);`  | `Unsigned hexadecimal:[800003ff, 800003FF]` |
***| `%b`      | Prints a signed integer (identical to `%b`)   | `_printf("%b", -7);`                                   | `-7`                                        |
| `%o`      | Prints a signed integer (identical to `%o`)      | `_printf("Unsigned octal:[%o]\n", ui);`                | `Unsigned octal:[20000001777]`              |
| `%p`      | Prints a signed integer (identical to `%p`)      | `_printf("Address:[%p]\n", addr);`                     | `Address:[0x7ffe637541f0]`                  |
***| `%S`      | Prints a signed integer (identical to `%S`)   | `_printf("%S", -7);`                                   | `-7`                                        |
***| `%R`      | Prints a signed integer (identical to `%R`)   | `_printf("%R", -7);`                                   | `-7`                                        |
| `%r`      | Prints a signed integer (identical to `%r`)      | `_printf("Unknown:[%r]\n");`                           | `Unknown:[%r]`                              |
***| `\0`      | Prints a signed integer (identical to `\0`)   | `_printfUnknown:[%r];`                                 | `Unknown:[%r]`                              |