#include <stdio.h>
#include <math.h>

int main(){
    /*declarando variaveis*/
    double p, cm;
    
    /*solicitando ao usuario a medida em polegadas*/
    printf("CONVERSAO DE POLEGADAS PARA CENTIMETROS\n");
    printf("Digite uma media em polegadas: ");
    scanf("%lf", &p);
    
    /*convertendo para centimetros*/
    cm = p * 2.54;
    
    /*apresentando o resultado*/
    printf("Esta medida em centimetros = %.2lf", cm);
}
