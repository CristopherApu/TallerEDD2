#include <cstdio>
#include <iostream>
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
        Productos.QuiereAgregarOtroProducto = Productos.QuiereAgregarOtroProducto -1;
    } while (Productos.QuiereAgregarOtroProducto == -1);
    Despedida();
    return 0;
}
