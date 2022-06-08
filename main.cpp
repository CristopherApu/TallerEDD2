#include <cstdio>
#include <iostream>
#include <fstream>
using namespace std;
#include "Funciones.h"


char NombreBar[40];
int CantidadProductos;
char NombreProducto;
int PrecioProducto;
char NombreBarModificado[50];

int main(){

    FILE * arch = fopen("modificador.txt", "w");

    saludo();

    ConsultaNombreBar();
    scanf("%s", NombreBar);

    fprintf(arch, "Lista_");
    fprintf(arch, "%s", NombreBar);
    fprintf(arch, ".txt\n");
    
    //gets(char NombreBarModificado , sizeof(NombreBar) + 10 , FILE * arch);
    
    fclose(arch);
    
    
    FILE * arch2 = fopen(NombreBarModificado, "a+");

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
