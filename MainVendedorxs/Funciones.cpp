#include "Funciones.h"
#include <cstdio>
//#include <iostream>
//#include <fstream>
//#include <cstring>

void saludo(){

    printf("Hola, bienvenidx\n");

}

void ConsultaNombreBar(){

    printf("Como se llama el local?         (hasta 80 caracteres)\n");

}

void AgregaNombreProductos(){

    FILE * arch2 = fopen(Lista.NombreBarModificado, "a+");
    printf("Cual es el nombre del producto?\n");
    scanf("%s", Productos.NombreProducto);
    fprintf(arch2, "%s\n", Productos.NombreProducto);
    fclose(arch2);

}

void AgregaPrecioProductos(){

    FILE * arch2 = fopen(Lista.NombreBarModificado, "a+");
    printf("Cual es el precio del producto?\n");
    scanf("%d", Productos.PrecioProducto);
    fprintf(arch2, "%d\n", Productos.PrecioProducto);
    fclose(arch2);

}

void ConsultaSiQuiereAgregarOtroProducto(){

    printf("Quiere agregar otro producto?\n[1] Si\n[2] No\n");
    scanf("%d", Productos.QuiereAgregarOtroProducto);

}

void despedida(){

    printf("Lista creada!");

}
