#include <stdio.h>

void impulso_vet( int a[10], int total ){
    int i;
    for( i=0; i < total; i++ ){
        a[i] = 1;
        printf("[impulso]:%d = %d %ld bytes\n", i, a[i], (unsigned long)sizeof( a[i] ) );
    }
}
int main( ) {

    int DIM = 10;
    int sinal[ DIM ];
    impulso_vet( sinal, DIM );
    return 0;
}