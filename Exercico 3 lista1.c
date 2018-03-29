#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char l,c;
    int s;

    printf(" ");
    for(c=0; c<16 ; c++ ); {
        printf (" %x",c);
    }
    s=0;
    printf("\n");
    for(l=0 ; l<16 ; l++ ) {
        printf("%x",l);
        for(c=0 ; c<16 ; c++ ) {
            printf (" %c", s<32 ? 32 : s);
            s++;
        }
        printf("\n");
    }
    return 0;
}
