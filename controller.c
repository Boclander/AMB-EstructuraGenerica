#include "controller.h"

int menu (void){

    int opcion;
    int retorno;

    printf("=========================================================\n");
    printf("\n");
    printf("    Opcion 1.\n");
    printf("    Opcion 2.\n");
    printf("    Opcion 3.\n");
    printf("    Opcion 4.\n");
    printf("\n");
    printf("=========================================================\n");

    retorno=getInt("Ingrese una opcion: ", "La opcion ingresada no es valida.", 1, 5, 2, opcion);

    if(retorno=-1)
    {
        printf("ERROR");
    }

    return opcion;
}
