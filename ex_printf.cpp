#include <stdio.h>
int main(int argc, char *argv[]) {
char *nome= "Joao da Silva ";
int prova = 8;
float media = 8.5f;
printf("%-20s\tNota\tMedia\n%-20s\t%3d\t%3.2f\n",
 "Nome do aluno",
 nome,prova,media);
}
