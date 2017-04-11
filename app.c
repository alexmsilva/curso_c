#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char c; // default signed
    signed char c2;
    unsigned char c3;
    bool b;

    printf("O tamanho de c eh: %zu\n", sizeof c);
    printf("O tamanho de do tipo (char) eh: %zu\n", sizeof (char));

    c = 10;
    c = 0xA;
    c = '\n';

    printf("O valor de c eh: %d\n", c);

    c2 = 200;
    c3 = 200;
    
    printf("O valor de c2 eh: %d\n", c2);
    printf("O valor de c3 eh: %d\n", c3);

    b = true;
    b = false;

    printf("O tamanho de b (bool) eh: %zu\n", sizeof b);
    printf("O valor de b eh: %i\n", b);

    return 0;
}

