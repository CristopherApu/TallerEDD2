#include "Funciones.h"
#include <stdio.h>
#include <string.h>

void ingresarCliente(Cliente* a){                                               // Desarrollo de funciones
    printf("Nombre o apodo:\n");
    scanf("%s", a->nombre);
    printf("Direccion de correo electronico:\n");
    scanf("%s", a->mail);
    printf("Numero de celular:\n+ 56 9 ");
    scanf("%lu", &(a->telefono));
    printf("--------------------------------\n");
}

int montoFinal;

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
    montoFinal = ((montoPorPersona / 100) * porcentajePropina) + montoPorPersona;
    printf("Usted debe pagar %d CLP\n", montoFinal);
    printf("\n-------------------------------\n");

}
