#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    /*João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário
    de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de
    pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
    João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.
    Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que
    João deverá pagar. Imprima os dados do programa com as mensagens adequadas.*/
    
    float pesoTotal, excessoValor, excesso = 50, multa = 4;
    //ENTRADA de dados
    printf("Digite o peso dos peixes: ");
    scanf("%f",&pesoTotal);
    //PROCESSAmento
    if(pesoTotal > excesso){
        printf("\nEXCESSO DE PESO!\n");
        excessoValor = (pesoTotal - excesso) * multa;
        //SAIDA de dados
        printf("\nO peso digitado foi %.3f\n",pesoTotal);
        printf("\nO valor excedente foi de R$ %.2f\n",excessoValor);
    }else{
        //SAIDA 2
        printf("\nNao teve valor excedente.\n");
    }
}