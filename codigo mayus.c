#include <stdio.h>
void mayus(char[]);
int main()
{
    char string[100];
    printf("Hola bienvenido, ingrese su texto \n");
    gets(string); //leer el string
    mayus(string); //crear funcion mayus
    printf("%s", string);//%s leer string
    return 0;
}
void mayus(char string[]){
    for(int i=0;string[i]!=0x00; i++){//byte de todos 0, i++ le suma 1
        if(string[i]>96 && string[i]<123){
            string[i]-=32;//restamos 32 para hacer mayusculas, string[i]=string[i]-32
            
        }
    }
}
