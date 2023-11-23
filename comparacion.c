    #include <stdio.h>
    #define cant 10 //cantidad de caracteres
    
    void ingrese_sus_textos (char[],char[]);
    int comparacion (char[],char[]);
    void imprimir_resultado (int);
    
    int main (){
        char texto1[cant];
        char texto2[cant];
        ingrese_sus_textos(texto1,texto2);
        int resultado = comparacion (texto1,texto2);
        imprimir_resultado(resultado);
    }
    void ingrese_sus_textos(char texto1[],char texto2[]){
        printf("Bienvenido, ingrese su primer texto porfavor\n");
        gets(texto1);
        printf("ingrese su segundo texto\n");
        gets(texto2);
    }
    int comparacion(char texto1[], char texto2[]){
        int resultado=0;
        for(int i=0; texto1[i]!=0 || texto2[i]!=0; i++){ //despues de ejecutar se suma 1
            if(texto1[i]!=texto2[i]){
                resultado=1;   //si resultado es 0 son iguales, si es 1 som distintos 
            }
        }
        return resultado;
    }
    void imprimir_resultado(int resultado){
        if(resultado==1){
            printf("sus textos son distintos\n");
        }
        else{
            printf("sus textos son iguales\n");
        }
    }
    
