#include <stdio.h>
#ifndef _WIN32
#include <ncurses.h>
#else
#include <conio.h>
#endif
int main( void )
{
 int c;
 char str[100];
 puts("Entre com UM simbolo (caractere): ");
 c=getchar();
#ifndef _WIN32
 __fpurge(stdin);
#else
 fflush(stdin);
#endif
 puts("Voce informou ");
 putchar(c);
 puts("Qual seu nome?");
 gets(str);
 puts("foi informado:");
 puts(str);
}

