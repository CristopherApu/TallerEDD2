#ifndef TALLER2EDD_FUNCIONES_H
#define TALLER2EDD_FUNCIONES_H

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
    }Lista;

#endif
