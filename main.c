#include <stdio.h>
#include <stdlib.h>
#include "controller.h"

int main()
{
    eGenerica listadoGenerico[CANTIDAD];
    eGen_init(listadoGenerico,CANTIDAD);
    int opcion;

    do{
        opcion=menu();
        switch(opcion){
            case 1:
                printf("Ingresada la opcion 1.\n");
                break;
            case 2:
                printf("Ingresada la opcion 2.\n");
                break;
            case 3:
                printf("Ingresada la opcion 3.\n");
                break;
            case 4:
                printf("Ingresada la opcion 4.\n");
                break;
            default:
                printf("\nIngrese una opcion v%clida\n", 160);
                break;
        }

    system("pause");
    system("cls");

    }while(opcion != 5);

    return 0;
}
