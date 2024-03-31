#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct No{
    int valor;
    No* proximo;
};

struct Pilha{
  No* topo;
};

Pilha* cria(){
    Pilha* p = malloc(sizeof(Pilha));
    if(p == NULL) {
        printf("A alocacao nao foi feita.");
        return NULL;
    }
    p->topo = NULL;
    return p;
}

void push(int A, Pilha* p){
    No* n = malloc(sizeof(No));

    n->valor = A;
    n->proximo = p->topo;
    p->topo = n;
}

int pop(Pilha* p){
    if(p->topo == NULL){
        printf("A pilha esta vazia.\n");
        return -1;
    } else {
        No* temp = p->topo;
        int valor_return = temp->valor;
        p->topo = temp->proximo;

        free(temp);

        return valor_return;
    }
}