#include <cstdio>
//#include <iostream>
//#include <fstream>
//#include <cstring>
using namespace std;
#include "Funciones.h"

int main(){

    FILE * arch = fopen("modificador.txt", "w");

    saludo();

    ConsultaNombreBar();
    scanf("%s", Lista.NombreBar);

    fprintf(arch, "Lista_");
    fprintf(arch, "%s", Lista.NombreBar);
    fprintf(arch, ".txt\n");
    fclose(arch);

    arch = fopen("modificador.txt", "r");
    fscanf(arch, "%s", Lista.NombreBarModificado);

    FILE * arch2 = fopen(Lista.NombreBarModificado, "a+");

    printf("Ingrese el primer producto:\n");

    do {

        AgregaNombreProductos();
        AgregaPrecioProductos();
        ConsultaSiQuiereAgregarOtroProducto();

    } while (Productos.QuiereAgregarOtroProducto == 1);

    fclose(arch2);

    despedida();

    return 0;
}
