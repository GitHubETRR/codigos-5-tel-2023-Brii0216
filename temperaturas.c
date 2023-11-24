#include <stdio.h>
#define cant 10
#define rangomaximo 20
#define rangominimo 10

    void ingrese_temps(int[]);
    int calcu_promedio(int[]);
    int calcu_minimo(int[]);
    int calcu_maximo(int[]);
    int calcu_rango(int[]);
    void print_resultados(int, int, int, int);
    
    int main(void){
        int temp[cant];
        ingrese_temps(temp);
        int promedio=calcu_promedio(temp);
        int minimo=calcu_minimo(temp);
        int maximo=calcu_maximo(temp);
        int rango=calcu_rango(temp);
        print_resultados(promedio, minimo, maximo, rango);
        
    }
    void ingrese_temps(int temp[]){
    for(int i=0; i<cant; i++){
        printf("ingrese la temperatura numero %d: ",i+1);
        scanf("%d", &temp[i]);
    }
}
    int calcu_promedio(int temp[]){
    int promedio=0;
    for(int i=0; i<cant; i++){
        promedio+=temp[i]; //sumar el siguiente valor
    }
    promedio/=cant; //dividir
    return promedio;
    
}
int calcu_minimo(int temp[]){
    int minimo=temp[0];
    for(int i=0; i<cant; i++){
        if(temp[i]<minimo){
            minimo=temp[i];
        }
    }
    return minimo;
}
    
    int calcu_maximo(int temp[]){
    int maximo=temp[0];
    for(int i=0; i<cant; i++){
        if(temp[i]>maximo){
            maximo=temp[i];
        }
    }
    return maximo;
}
int calcu_rango(int temp[]){
    int rango=0;
    for(int i=0; i<cant; i++){
        if(temp[i]>=rangominimo && temp[i]<=rangomaximo){
            rango++;
        }
    }
    return rango;
}
    void print_resultados(int promedio, int minimo, int maximo, int rango){
    printf("el promedio es de: %d\n", promedio);
    printf("la temperatura minima fue de: %dc y la temperatura maxima de: %dc\n", minimo, maximo);
    printf("hay %d temperaturas entre %d y %d\n", rango, rangominimo, rangomaximo);
}
