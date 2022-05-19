#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10



int main(){
    int i, j;
    int ord_vector[SIZE];
    int aux;

    srand(time(NULL));
    printf("Generación de números aleatorios:");
    
    for(i=0; i<SIZE;i++){
        ord_vector[i]=100+rand()%101;
        printf("\n");
        printf("%d",ord_vector[i]);
        
    }

    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE-i-1;j++){
            if(ord_vector[j]>ord_vector[j+i]){
                aux=ord_vector[j];
                ord_vector[j]=ord_vector[j+1];
                ord_vector[j+1]=aux;

            }
        }
    }

    printf("\n");
    printf("el vector ordenado: ");
    for(i=0;i<SIZE;i++){
        printf("\n");
        printf("%d",ord_vector[i]);
    }
    printf("prueba");
    printf("\n");
    printf("prueba");
    printf("\n");printf("prueba");
    printf("\n");



}