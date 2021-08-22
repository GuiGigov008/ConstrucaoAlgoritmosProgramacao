#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    /*Faça um Programa que pergunte quanto você ganha por hora e o número de horas
    trabalhadas no mês. Calcule e mostre o total do seu salário*/

    float valor, salario;
    int horas;
    printf("\nQuanto voce ganha por hora? ");
    scanf("%f",&valor);
    printf("\nQuantas horas voce trabalha por semana? ");
    scanf("%d",&horas);

    salario = (horas * valor) * 4;

    printf("\nO seu salario eh de R$ %.2f.\n", salario);
}