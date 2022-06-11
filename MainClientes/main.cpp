#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

struct Cliente{                                                                 //creamos la estructura del cliente
    char nombre[30];
    char mail[50];
    long telefono;
};

int montoFinal;                                                                 //Declaramos las funciones

void ingresarCliente(Cliente* a);
void cuenta();

int main(){                                                                     //Desarrollamos el MAIN
   
    remove("Lista.txt");                                                        //Nos aseguramos de eliminar algún rastro del ejecutable anterior
    FILE* arch = fopen ("Lista.txt", "a+");                                     //Iniciamos el .txt

    printf("Bienvenidx a Tertulia\n");                                          //Comenzamos a imprimir en la terminal

    int cantidadClientes;                                                       //Definimos la variable utilizada en la línea 31

    Cliente cliente;

    printf("Ingrese la cantidad de personas:\n");                               //Consultamos por la cantidad de clientes a utiliza r la aplicación, ya sea para continuar con el programa e iterar la cantidad de veces que sea necesario, o para tirar error

    scanf("%d", &cantidadClientes);                                             //Agregamos el valor de la variable de la línea 27

    if(cantidadClientes > 1){                                                   //Evaluamos la cantidad de clientes

    int cont = 1;
   
    for (int i = 1; i < cantidadClientes+1; i++) {
   
        system("cls");                                                          //Limpiamos la terminal
        cout<<"Ingrese al compa numero " << cont<<"\n";                         //agregamos un COUT porque no estábamos logrando imprimir bien con PRINTF y nuestro companero Marks nos ayudó con otra librería con la que trabajó anteriormente.
   
        ingresarCliente(&cliente);                                              //Ingresamos al cliente

        cuenta();                                                               //consultamos por su consumo

        fprintf(arch, "Nombre:  %s \nMail:    %s \nCelular: %lu\n$%d CLP\n\n",
        cliente.nombre, cliente.mail, cliente.telefono, montoFinal);            //Imprimimos en el .txt los datos relevantes

        cont++;
    }

    }   else if (cantidadClientes == 1){

            printf("mejor solo que mal acompañado, eso si, este programa no te va a servir de nada :c");

    }       else {

                printf("si los compas restan, entonces no deberian ser compas");

    }

    fclose (arch);                                                              //Cerramos el archivo por buenas prácticas

    return 0;                                                                   //Retornamos a 0 finalizando así el MAIN
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
    montoFinal = ((montoPorPersona / 100) * porcentajePropina) + montoPorPersona;
    printf("Usted debe pagar %d CLP\n", montoFinal);
    printf("\n-------------------------------\n");

}
