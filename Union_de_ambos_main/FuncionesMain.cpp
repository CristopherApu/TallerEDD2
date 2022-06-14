#include <cstdio>
#include <iostream>
#include <cstring>
#include "FuncionesMain.h"
using namespace std;

void Iniciar(){
    printf("Hola, que desea funcion desea utilizar?\n");
    printf("[1] Usuario\n[2] Vendedorx\n");
}
void main1(){
    remove("Lista.txt");
    FILE* arch = fopen ("Lista.txt", "a+");
    FILE * arch3 = fopen("ListaDeBaresDisponibles.txt", "a+");
    arch3 = fopen("ListaDeBaresDisponibles.txt", "r");
    fscanf(arch3, "%s", Lista.BarEscogido);
    printf("Bienvenidx a %s\n", Lista.BarEscogido);
    fclose(arch3);
    int cantidadClientes;
    Cliente cliente;
    printf("Ingrese la cantidad de personas:\n");
    scanf("%d", &cantidadClientes);
    if(cantidadClientes > 1){
        int cont = 1;
        for (int i = 1; i < cantidadClientes+1; i++) {
            system("cls");
            cout<<"Ingrese al compa numero " << cont<<"\n";
            ingresarCliente(&cliente);
            cuenta();
            fprintf(arch, "Nombre:  %s \nMail:    %s \nCelular: %lu\n$%d CLP\n\n",
                    cliente.nombre, cliente.mail, cliente.telefono, Monto.montoFinal);
            cont++;
        }
    }   else if (cantidadClientes == 1){
        printf("mejor solo que mal acompa�ado, eso si, este programa no te va a servir de nada :c");
    }       else {
        printf("si los compas restan, entonces no deberian ser compas");
    }
    fclose (arch);
}
void main2(){
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
}
void Saludo(){
    printf("Hola, bienvenidx\n");
}
void ConsultaNombreBar(){
    FILE * arch3 = fopen("ListaDeBaresDisponibles.txt", "a++");
    printf("Como se llama el local?         (hasta 80 caracteres)\n");
    scanf("%s", Lista.NombreBar);
    fprintf(arch3, "%s\n", Lista.NombreBar);
    fclose(arch3);
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
    printf("Cual es el precio del producto?\n$");
    scanf("%s", Productos.PrecioProducto);
    fprintf(arch2, "%s\n", Productos.PrecioProducto);
    fclose(arch2);
}
void ConsultaSiQuiereAgregarOtroProducto(){
    printf("Quiere agregar otro producto?\n[1] Si\n[2] No\n");
    scanf("%s", Productos.QuiereAgregarOtroProducto);
    Productos.cero = strcmp(Productos.QuiereAgregarOtroProducto, Productos.respuesta);
    printf("\n%s\n", Productos.cero);
}
void Despedida(){
    printf("Lista creada!");
}
void ingresarCliente(Cliente* a){                                               // Desarrollo de funciones
    printf("Nombre o apodo:\n");
    scanf("%s", a->nombre);
    printf("Direccion de correo electronico:\n");
    scanf("%s", a->mail);
    printf("Numero de celular:\n+ 56 9 ");
    scanf("%lu", &(a->telefono));
    printf("--------------------------------\n");
}
void cuenta(){

    int hora = 0;
    int consumioMas = 1;
    int queConsumio;
    int montoPorPersona = 0;
    int porcentajePropina = 0;

    printf("Hola , que consumiste? (favor ingresar de a uno)\n");

    while (consumioMas == 1){

        printf("Ingrese el numero a la izquierda del consumible por favor\n\n");
        printf("1    Mojito\n2    Caipirinha\n3    Laguna Azul\n4    Blue Orange\n5    Daikiri\n6    Shot de Tequila\n7    Piscola\n8    Roncola\n9    Papas Bravas\n10   Pizza\n11   Completo\n\n");

        scanf("%d", &queConsumio);

        switch (queConsumio){

            case 1 : case 2 : case 3 : case 4 : case 5 : case 7 : case 8:

                montoPorPersona = montoPorPersona + 3000;

                printf("Favor ingrese la hora en la que pidio el consumible\n");
                scanf("%d", &hora);

                if(hora < 19000){

                    montoPorPersona = montoPorPersona - 1500;

                }

                break;



            case 6:

                montoPorPersona = montoPorPersona + 5000;

                printf("Favor ingrese la hora en la que pidio el consumible\n");
                scanf("%d", &hora);

                if(hora < 19000){

                    montoPorPersona = montoPorPersona - 2500;

                }

                break;



            case 9:

                montoPorPersona = montoPorPersona + 6000;

                break;



            case 10:

                montoPorPersona = montoPorPersona + 12000;

                break;// Desarrollo de funciones
            case 11:

                montoPorPersona = montoPorPersona + 1500;

                break;



            default:

                printf("\nError al ingresar Consumible\n");

                break;
        }

        printf("\nConsumiste algo mas?\n");
        printf("ingrese el numero a la izquierda de la respuesta por favor\n");
        printf("1   Si\n2   No\n");
        scanf("%d", &consumioMas);
    }

    printf("De cuanto es la propina a agregar?\n%%");
    scanf("%d", &porcentajePropina);
    Monto.montoFinal = ((montoPorPersona / 100) * porcentajePropina) + montoPorPersona;
    printf("Usted debe pagar %d CLP\n", Monto.montoFinal);
    printf("\n-------------------------------\n");

}
