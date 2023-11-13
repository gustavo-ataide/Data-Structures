#include <stdio.h>

struct ponto{
    int x;
    int y;
};


int main(void){
    struct ponto v1;
    struct ponto v2;
    struct ponto v3;
    struct ponto v4;


    v1.x = -3; v1.y = -3;
    v2.x = 3; v2.y = 3;
    v3.x = -(v1.x); v3.y = -(v2.y);
    v4.x = -(v2.x); v4.y = -(v1.y);
    if
}