#include "main.h"
#include <stdio.h>
#include <string.h>

int main() {
    int a = _printf("%");
    int b = printf("%");
    printf("%i %i",a, b);
    return 0;
}
