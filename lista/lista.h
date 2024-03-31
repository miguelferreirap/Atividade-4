#include <stdio.h>

typedef struct No No;

typedef struct Pilha Pilha;

Pilha* cria();

void push(int A, Pilha* p);

int pop(Pilha* p);