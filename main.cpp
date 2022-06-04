#include <cstdio>
using namespace std;
#include "Funciones.h"

int main(){

    char NombreBar[12];
    int CantidadProductos;
    char NombreListaBar;
    char NombreProducto;
    int PrecioProducto;

    FILE * arch = fopen("Lista_Locales_Disponibles.txt", "a+");

    saludo();

    ConsultaNombreBar();
    scanf("%s", NombreBar);

    fprintf(arch, "Lista_");
    fprintf(arch, "%s", NombreBar);
    fprintf(arch, ".txt\n");

    fgets();

    FILE * arch2 = fopen("%s", NombreListaBar, "a+");

    ConsultaProductos();
    scanf("%d",CantidadProductos);

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