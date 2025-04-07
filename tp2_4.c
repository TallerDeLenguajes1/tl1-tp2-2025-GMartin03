#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANTIDAD_PCS 5

struct compu {
    int velocidad;         
    int anio;              
    int cantidad_nucleos; 
    char *tipo_cpu;  
};

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

void generarPCs(struct compu pcs[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 10;
        pcs[i].cantidad_nucleos = 1 + rand() % 8;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
}