#include <stdio.h>
#include <stdlib.h> 

#define N 20

int main() {
    int i;
    double vt[N];

    for(i = 0; i < N; i++) {
        *(vt + i) = 1 + rand() % 100; 
    }

    for(i = 0; i < N; i++) {
        printf("%f ", *(vt + i));
    }

    return 0;
}


// No se puede ver el archivo tp2_1_2 porque este fue realizado en la rama Opcion2, no en la rama main.