#include <stdio.h>

int p[100],v[100],s[100], cont=0;

int main(void){
    // fazendo vetor p
    for (int i = 2;i<=20;i++){
        if (i%2==0){
            p[cont] = i;
            cont+=1;
        }
    }
    // fazendo vetor v
    for (int i=10,cont =0;i<20;i++,cont++){
        v[cont] = i;
    }
    //fazendo vetor s
    for (int i =0; i<10;i++){
        s[i] = p[i]+v[i];
    }

    //printando os 3:
    for (int i=0; i<10;i++){
        printf("P: %d  V: %d  S: %d\n", p[i], v[i], s[i]);
    }
    
}