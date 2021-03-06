#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EstructuraGenerica.h"
#define TAMANIO 10
#define OCUPADO 0
#define LIBRE -1



int eGen_init( eGenerica listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idGenerica= 0;
        }
    }
    return retorno;
}

int eGen_buscarLugarLibre(eGenerica listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int eGen_siguienteId(eGenerica listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                if(listado[i].idGenerica>retorno)
                {
                    retorno=listado[i].idGenerica;
                }

            }
        }
    }

    return retorno+1;
}


int eGen_buscarPorId(eGenerica listado[],int limite, int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].idGenerica == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}



int eGen_mostrarUno(eGenerica parametro)
{
    printf("\n %20s  %4d  %4d",parametro.nombre,parametro.idGenerica,parametro.estado);

}

int eGen_mostrarListado(eGenerica listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {

                eGen_mostrarUno(listado[i]);
            }
        }
    }
    return retorno;
}


int eGen_mostrarListadoConBorrados(eGenerica listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==LIBRE)
            {
                printf("\n[LIBRE]");
            }
            eGen_mostrarUno(listado[i]);
        }
    }
    return retorno;
}


int eGen_alta(eGenerica  listado[],int limite)
{
    int retorno = -1;
    char nombre[50];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eGen_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;
            id = eGen_siguienteId(listado,limite);


            retorno = 0;
            printf("Ingrese nombre: ");
            gets(listado[indice].nombre);           //AGREGAR VARIABLES NECESARIAS.
            listado[indice].idGenerica = id;
            listado[indice].estado = OCUPADO;
        }
    }
    return retorno;
}

int eGen_ordenarNombre(eGenerica listado[], int limite)
{
    int retorno = -1;
    int i;
    int j;
    eGenerica aux;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0; i<limite-1; i++)
        {
            for(j=i+1; j<limite; j++)
            {
                if(strcmp(listado[i].nombre, listado[j].nombre) > 0)
                    aux = listado[i];
                listado[i] = listado[j];
                listado[j] = aux;
            }
        }
    }
}
