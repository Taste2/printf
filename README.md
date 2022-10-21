0. a function that produces output according to a format.
1. Handle the following conversion specifiers: d, i, donot handle flag characters, field width, precision and lenght modifiers
2. Handle the following custom conversion specifiers, b: the unsigned int argument is converted to binary
3. Handle the following conversion specifiers: u, o, x, X, dobot handle flag char, field width, precision and lenght modifiers
4. Use a local buffer of 1024 chars in order to call write as little as possible
5. Handle the following custom conversion specifier: s, prints the string
6. Handle the following conversion specifier: p
7. Handle the following flag characters for non-custom conversion specifiers: +, space, and #
8. Handle the following length modifiers for non-custom conversion specifiers: l, h, handle conversion specifiers d, i, u, o, x, X
9. Handle the field width for non-custom conversion specifiers
10. Handle the precision for non-custom conversion specifiers.
11. Handle the 0 flag character for non-custom conversion specifiers
12. Handle the - flag character for non-custom conversion specifiers
13. Handle the following custom conversion specifier: r : prints the reversed string
14. Handle the following custom conversion specifier: R: prints the rot13'ed string
All the above options work well together.
