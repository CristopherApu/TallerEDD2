#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

struct Cliente{                                                                 //creamos la estructura del cliente
    char nombre[30];
    char mail[50];
    long telefono;
};



void ingresarCliente(Cliente* a);                                               //Declaramos las funciones
void cuenta();



#endif // FUNCIONES_H_INCLUDED
