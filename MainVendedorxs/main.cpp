#include <cstdio>
//#include <iostream>
//#include <fstream>
//#include <cstring>
using namespace std;
#include "Funciones.h"

int main(){

    saludo();
    ConsultaNombreBar();
    modificador();

    printf("Ingrese el primer producto:\n");

    do {

        AgregaNombreProductos();
        AgregaPrecioProductos();
        ConsultaSiQuiereAgregarOtroProducto();

    } while (Productos.QuiereAgregarOtroProducto == 1);

    despedida();

    return 0;
}
