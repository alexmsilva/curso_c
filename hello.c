#include <stdio.h>

int main(void)
{
    int ret = 0;

    ret = printf("Aula para configuração do ambiente apenas.\n");
    printf("Retorno da printf anterior: %d\n", ret);
    printf("%d - %d - %d\n", 10, 0xA, 'A');
    
    return 0;
}
