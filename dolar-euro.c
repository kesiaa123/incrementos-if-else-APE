#include <stdio.h>
#include <math.h>

int main(){
    /*declarando variaveis*/
    double dolar, euro;
    
    /*solicitando ao usuario o valor 
    em euro e guardando na memoria*/
    printf("CONVERSAO DE DOLAR PARA EURO\n");
    printf("digite um valor em dolar: ");
    scanf("%lf", &dolar);
    
    /*convertendo para euro*/
    euro = dolar * 0.95;
    
    /*apresentando resultados*/
    printf("este valor em euro = %.2lf", euro);
}
