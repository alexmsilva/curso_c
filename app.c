#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
    int i = INT_MAX;
    unsigned int ui = UINT_MAX;
    uint8_t i8 = UCHAR_MAX; // = aka unsigned char
    short si = SHRT_MAX;
    long li = LONG_MAX;
    size_t szi = 0;
    register int ri = 0; // very fast

    printf("O tamanho de i (int) eh: %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
    printf("O valor de i eh: %d\n", i);

    printf("O tamanho de ui (unsigned int) eh: %zu bytes / %zu bits\n", sizeof ui, sizeof ui * 8);
    printf("O valor de ui eh: %u\n", ui);

    printf("O tamanho de i8 (int8_t) eh: %zu bytes / %zu bits\n", sizeof i8, sizeof i8 * 8);
    printf("O valor de i8 eh: %u\n", i8);

    printf("O tamanho de si (short int) eh: %zu bytes / %zu bits\n", sizeof si, sizeof si * 8);
    printf("O valor de si eh: %u\n", si);

    printf("O tamanho de li (long int) eh: %zu bytes / %zu bits\n", sizeof li, sizeof li * 8);
    printf("O valor de li eh: %lu\n", li);

    printf("O tamanho de szi (size_t int) eh: %zu bytes / %zu bits\n", sizeof szi, sizeof szi * 8);
    printf("O valor de szi eh: %zu\n", szi);

    printf("O tamanho de ri (register int) eh: %zu bytes / %zu bits\n", sizeof ri, sizeof ri * 8);
    printf("O valor de ri eh: %d\n", ri);

    return 0;
}

