#include <cstdio>
#include <iostream>
//#include <stdlib.h>
//#include <fstream>
//#include <cstring>
using namespace std;
#include "Funciones.h"

int main(){
    Saludo();
    ConsultaNombreBar();
    Modificador();
    printf("Ingrese el primer producto:\n");
    do {
        AgregaNombreProductos();
        AgregaPrecioProductos();
        ConsultaSiQuiereAgregarOtroProducto();
        system("cls");
    } while (Productos.cero == 0);
    Despedida();
    return 0;
}
