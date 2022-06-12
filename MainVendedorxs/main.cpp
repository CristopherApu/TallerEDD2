#include <cstdio>
//#include <iostream>
//#include <fstream>
#include <cstring>
using namespace std;
#include "Funciones.h"

int main(){

    char NombreBar[80];
    int QuiereAgregarOtroProducto;
    char NombreProducto;
    int PrecioProducto;
    char NombreBarModificado[90];
    //char ruta[] = "./Listas_Disponibles/";

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

    //printf(strcat(ruta, NombreBarModificado));

    FILE * arch2 = fopen(/*strcat(ruta, */NombreBarModificado/*)*/, "a+");

    printf("Ingrese el primer producto:\n");

    do {

        AgregaNombreProductos();
        scanf("%s", NombreProducto);
        AgregaPrecioProductos();
        scanf("%d", PrecioProducto);

        fprintf(arch2, "%s\n", NombreProducto);
        fprintf(arch2, "%d\n", PrecioProducto);

        printf("Quiere agregar otro producto?\n[1] Si\n[2] No\n");
        scanf("%d", QuiereAgregarOtroProducto);

    } while (QuiereAgregarOtroProducto == 1);

    fclose(arch2);

    despedida();

    return 0;
}
