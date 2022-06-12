#include "Funciones.h"
#include <cstdio>
//#include <iostream>
//#include <fstream>
//#include <cstring>

void Saludo(){
    printf("Hola, bienvenidx\n");
}

void ConsultaNombreBar(){
    printf("Como se llama el local?         (hasta 80 caracteres)\n");
    scanf("%s", Lista.NombreBar);
}

void Modificador(){
    FILE * arch = fopen("modificador.txt", "w");
    fprintf(arch, "Lista_");
    fprintf(arch, "%s", Lista.NombreBar);
    fprintf(arch, ".txt\n");
    fclose(arch);
    arch = fopen("modificador.txt", "r");
    fscanf(arch, "%s", Lista.NombreBarModificado);
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

void Despedida(){
    printf("Lista creada!");
}
