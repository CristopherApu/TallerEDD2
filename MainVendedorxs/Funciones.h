#ifndef TALLER2EDD_FUNCIONES_H
#define TALLER2EDD_FUNCIONES_H

    void saludo();
    void ConsultaNombreBar();
    void modificador();
    void AgregaNombreProductos();
    void AgregaPrecioProductos();
    void ConsultaSiQuiereAgregarOtroProducto();
    void despedida();

    struct {

        char NombreProducto;
        int PrecioProducto;
        int QuiereAgregarOtroProducto;

    }Productos;

    struct {

        char NombreBar[80];
        char NombreBarModificado[90];

    }Lista;

#endif
