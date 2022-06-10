#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
#include "Funciones.h"

int main(){

    char NombreBar[40];
    int CantidadProductos;
    char NombreProducto;
    int PrecioProducto;
    char NombreBarModificado[50];

    FILE * arch = fopen("modificador.txt", "w");

    saludo();

    ConsultaNombreBar();
    scanf("%s", NombreBar);

    fprintf(arch, "Lista_");
    fprintf(arch, "%s", NombreBar);
    fprintf(arch, ".txt\n");
    fclose(arch);

    arch = fopen("modificador.txt", "r");
    fscanf(arch, "%s", NombreBarModificado);

    FILE * arch2 = fopen(NombreBarModificado, "a+");
    fclose(arch2);



    ConsultaCantidadProductos();
    scanf("%d", CantidadProductos);

    for( int i = 0 ; i == CantidadProductos ; i = i + 1){

        AgregaNombreProductos();
        scanf("%s", NombreProducto);
        AgregaPrecioProductos();
        scanf("%d", PrecioProducto);

        fprintf(arch, "%s\n", NombreProducto);
        fprintf(arch, "%d\n", PrecioProducto);
    }

    despedida();

    return 0;
}
