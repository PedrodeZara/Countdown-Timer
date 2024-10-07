#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>                           

void main() {
    setlocale(LC_ALL,"Portuguese");
    int segundos = 0;                           

    printf("\t\tBem vindo\n\nDigite quantos segundos quer rode o timer: ");
    scanf("%d",&segundos);                     

    while(segundos > 0) {
        int h = segundos / 3600;                
        int m = (segundos % 3600) / 60;         
        int s = segundos % 60;                  

        printf("\r%0.2d:%0.2d:%0.2d",h ,m ,s);

        time_t parar = clock() + CLOCKS_PER_SEC;

        while (clock() < parar){ }
        
        segundos--;
    } 
    printf("\rFim do programa");
}