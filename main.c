#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
#include "libreria.c"

void mostrarListaL(nodo* lista);
nodoL* agregarAlFinal(nodoL*lista, nodoL* nuevo);
nodoL*buscarUltimoL(nodoL*lista);
Persona cargarPersonaL();

typedef struct
{
    char nombre[30];
    int edad;
}Persona;

typedef struct nodoL
{
    Persona dato;
    struct nodoL* siguiente;
}nodoL;

int main()
{

    return 0;
}

Persona cargarPersonaL()
{
  Persona aux;
    printf("Ingrese el nombre\n");
    fflush(stdin);
    gets(aux.nombre);
    printf("Ingrese la edad\n");
    scanf("%d",&aux.edad);
    
    return aux;

}
/*
void mostrarPersonaL(Persona dato)
{
    printf("-----------------\n");
    printf()
}*/
void mostrarListaL(nodo* lista)
{
    nodo* seguidora= lista; //ver si vacia p mensaje

    while(seguidora!=NULL)
    {
        mostrarPersonaL(seguidora->dato); //o mod: mostrar nodo
        seguidora= seguidora -> siguiente;
    }
}

nodoL* agregarAlFinal(nodoL*lista, nodoL* nuevo)
{

    nodoL* ultimo = buscarUltimoL(lista);
    ultimo ->siguiente = nuevo;

    return lista;

}

nodoL*buscarUltimoL(nodoL*lista)
{
    nodoL* ultimo= lista;

    while(ultimo->siguiente !=NULL)
    {
        ultimo = ultimo ->siguiente;
    }


    return ultimo;
}


nodoL*buscarUltimoL(nodoL*lista)
{
    if(lista==  NULL)
    {
        lista=nuevo;
    }

    else
    {
        nodo*ultimo = buscarUltimoL(lista);
        ultimo->siguiente = nuevo;
    }
    return lista;
}

nodoL* buscarDato(nodoL* lista, char nombreBusc[])
{
    nodoL* seguidora = lista;

    while(seguidora!=NULL && strcmpi(seguidora ->dato.nombre, nombreBusc)!=0)
    {
        seguidora = seguidora ->siguiente;
    }

    return seguidora;
}

insertarEnOrden()
