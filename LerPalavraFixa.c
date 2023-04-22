#include <stdio.h>
int main ()
{
    char caractere1,caractere2,caractere3;
    caractere1 = getc(stdin);
    caractere2 = getc(stdin);
    caractere3 = getc(stdin);
    putc(caractere1, stdout);
    putc(caractere2, stdout);
    putc(caractere3, stdout);
    return(0);
}

