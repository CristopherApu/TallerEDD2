#include <cstdio>
//#include <string.h>
#include <iostream>
#include "Funciones.h"
#include "Funciones.cpp"
#include "Funciones.h"
#include "Funciones.cpp"
using namespace std;

int main(){                                                                     //Desarrollamos el MAIN


    remove("Lista.txt");                                                        //Nos aseguramos de eliminar alg�n rastro del ejecutable anterior
    FILE* arch = fopen ("Lista.txt", "a+");                                     //Iniciamos el .txt

    printf("Bienvenidx a TertuliaSD\n");                                          //Comenzamos a imprimir en la terminal

    int cantidadClientes;                                                       //Definimos la variable utilizada en la l�nea 31

    Cliente cliente;

    printf("Ingrese la cantidad de personas:\n");                               //Consultamos por la cantidad de clientes a utiliza r la aplicaci�n, ya sea para continuar con el programa e iterar la cantidad de veces que sea necesario, o para tirar error

    scanf("%d", &cantidadClientes);                                             //Agregamos el valor de la variable de la l�nea 27

    if(cantidadClientes > 1){                                                   //Evaluamos la cantidad de clientes

        int cont = 1;

        for (int i = 1; i < cantidadClientes+1; i++) {

            system("cls");                                                          //Limpiamos la terminal
            cout<<"Ingrese al compa numero " << cont<<"\n";                         //agregamos un COUT porque no est�bamos logrando imprimir bien con PRINTF y nuestro companero Marks nos ayud� con otra librer�a con la que trabaj� anteriormente.

            ingresarCliente(&cliente);                                              //Ingresamos al cliente

            cuenta();                                                               //consultamos por su consumo

            fprintf(arch, "Nombre:  %s \nMail:    %s \nCelular: %lu\n$%d CLP\n\n",
                    cliente.nombre, cliente.mail, cliente.telefono, montoFinal);            //Imprimimos en el .txt los datos relevantes

            cont++;
        }

    }   else if (cantidadClientes == 1){

        printf("mejor solo que mal acompa�ado, eso si, este programa no te va a servir de nada :c");

    }       else {

        printf("si los compas restan, entonces no deberian ser compas");

    }

    fclose (arch);                                                              //Cerramos el archivo por buenas pr�cticas

    return 0;                                                                   //Retornamos a 0 finalizando as� el MAIN
}
