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

void listarPCs(struct compu pcs[], int cantidad) {
    printf("Listado de PCs:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("PC #%d:\n", i + 1);
        printf("  Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("  Año: %d\n", pcs[i].anio);
        printf("  Nucleo: %d\n", pcs[i].cantidad_nucleos);
        printf("  Tipo de CPU: %s\n\n", pcs[i].tipo_cpu);
    }
}

void mostrarMasVieja(struct compu pcs[], int cantidad) {
    int indice_mas_vieja = 0;

    for (int i = 1; i < cantidad; i++) {
        if (pcs[i].anio < pcs[indice_mas_vieja].anio) {
            indice_mas_vieja = i;
        }
    }

    printf("PC mas vieja:\n");
    printf("  Velocidad: %d GHz\n", pcs[indice_mas_vieja].velocidad);
    printf("  Año: %d\n", pcs[indice_mas_vieja].anio);
    printf("  Nucleos: %d\n", pcs[indice_mas_vieja].cantidad_nucleos);
    printf("  Tip de CPU: %s\n\n", pcs[indice_mas_vieja].tipo_cpu);
}

void mostrarMasVeloz(struct compu pcs[], int cantidad) {
    int indice_mas_veloz = 0;

    for (int i = 1; i < cantidad; i++) {
        if (pcs[i].velocidad > pcs[indice_mas_veloz].velocidad) {
            indice_mas_veloz = i;
        }
    }
    printf("PC mas veloz:\n");
    printf("  Velocidad: %d GHz\n", pcs[indice_mas_veloz].velocidad);
    printf("  Año: %d\n", pcs[indice_mas_veloz].anio);
    printf("  Nucleos: %d\n", pcs[indice_mas_veloz].cantidad_nucleos);
    printf("  Tipo de CPU: %s\n\n", pcs[indice_mas_veloz].tipo_cpu);
}

    int main() {
        srand(time(NULL));
        struct compu pcs[CANTIDAD_PCS];

        generarPCs(pcs, CANTIDAD_PCS);
        listarPCs(pcs, CANTIDAD_PCS);
        mostrarMasVieja(pcs, CANTIDAD_PCS);
        mostrarMasVeloz(pcs, CANTIDAD_PCS);

        return 0;
    }