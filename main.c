#include "main.h"
#include <stdio.h>
#include <string.h>

int main() {
    int a = _printf("% \n");
    int b = printf("% \n");
    printf("%i %i",a, b);
    return 0;
}
