#include "FuncionesMain.h"
#include <cstdio>

int main() {
    Iniciar();
    scanf("%d", &Inicio.Respuesta);
    switch (Inicio.Respuesta) {
        case 1:
            main1();
            break;
        case 2:
            main2();
            break;
        default:
            printf("\nERROR");
            break;
    }
    return 0;
}
