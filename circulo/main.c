#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Circulo cir1 = circ_cria(3, 4, 5);
    Circulo cir2 = circ_cria(3, 3, 6);
    Circulo *c1 = malloc(sizeof(Circulo));
    Circulo *c2 = malloc(sizeof(Circulo));
    c1 = &cir1;
    c2 = &cir2;
    printf("A area do circulo e %.2f \n", circ_area(c1));
    if (circ_concentricos(c1, c2))
    {
        printf("Os circulos sao concentricos\n");
    }
    else
    {
        printf("Os circulos nao sao concentricos\n");
    }
    printf("O raio do ciculo e %.2f\n", circ_raio(c1));
    printf("O raio do ciculo e %.2f\n", circ_raio(c2));

    circ_libera(c1);
    circ_libera(c2);
}