#define PI 3.14159265358979323846

typedef struct {
    float x; 
    float y;
    float r;
} Circulo;

Circulo circ_cria (float x, float y, float r){
    Circulo c;
    c.x = x;
    c.y = y;
    c.r = r;
    return c;
};

void circ_libera (Circulo *c){
    free(c);
}

float circ_area (Circulo *c){
    float area = c->r * PI;
    return area;
}

int circ_concentricos (Circulo *c1, Circulo *c2){
    
    if(c1->x == c2->x && c1->y == c2->y){
        return 1;
    }else{
        return 0;
    }
}

/* Obtem o raio de um circulo */ 
float circ_raio (Circulo *c){
    return c->r;
}