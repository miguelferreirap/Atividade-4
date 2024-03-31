#include <stdio.h>
#include "lista.h"

void main() {
    Pilha* minhaPilha = cria();

    push(5, minhaPilha);
    push(10, minhaPilha);
    push(15, minhaPilha);

    printf("%d\n", pop(minhaPilha)); // Saída: 15
    printf("%d\n", pop(minhaPilha)); // Saída: 10
    printf("%d\n", pop(minhaPilha)); // Saída: 5
    printf("%d\n", pop(minhaPilha)); // A pilha está vazia.
}