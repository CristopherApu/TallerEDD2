#ifndef FINALTALLER_FUNCIONESMAIN_H
#define FINALTALLER_FUNCIONESMAIN_H

void Iniciar();
void main1();
void main2();

struct {
    int Respuesta;
}Inicio;
void Saludo();
void ConsultaNombreBar();
void Modificador();
void AgregaNombreProductos();
void AgregaPrecioProductos();
void ConsultaSiQuiereAgregarOtroProducto();
void Despedida();

struct {
    char NombreProducto [50];
    char PrecioProducto [8];
    char QuiereAgregarOtroProducto [1];
    int cero;
    const char *respuesta = "1";
}Productos;
struct {
    char NombreBar[80];
    char NombreBarModificado[90];
    char BarEscogido[80];
}Lista;
struct Cliente{                                                                 //creamos la estructura del cliente
    char nombre[30];
    char mail[50];
    long telefono;
};
void ingresarCliente(Cliente* a);
void cuenta();
struct {
    int montoFinal;
}Monto;

#endif //FINALTALLER_FUNCIONESMAIN_H
