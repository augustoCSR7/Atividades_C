#include "lista.h"


void imprimirLista(no *lista){
    while (lista!=NULL){
        printf(" : %d", lista->conteudo);
        lista = lista->prox;
    }
}

void imprimeListaRecursiva(no *lista)
{
    if (lista != NULL)   {
        printf(" : %d", lista->conteudo);
        imprimeListaRecursiva(lista->prox);
    }
}

void imprimirReverse(no *lista){
    if (lista!=NULL){
        imprimirReverse(lista->prox);
        printf(" : %d", lista->conteudo);
    }
}