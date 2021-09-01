#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    /*Faça um Programa que peça as 4 notas bimestrais e mostre a média.*/

    float nota, media = 0.0;
    
    for(int i = 1; i <= 4; i++){
        printf("\nDigite a nota %d: ",i);
        scanf("%f",&nota);
        media = media + nota;
    }
    media = media / 4;

    printf("\nA media das 4 notas eh %.2f.\n", media);
}