#include <stdio.h>
#include <math.h>

int main(){
    /*declarando variaveis*/
    int nota1, nota2, nota3, peso1, peso2, peso3;
    double mp;
    
    /*solicitando ao usuario as notas 
    e seus respectivos pesos*/
    printf("MEDIA PONDERADA\n");
    printf("Digite a primeira nota e seu peso: ");
    scanf("%i %i", &nota1, &peso1);
    
    printf("Digite a segunda nota e seu peso: ");
    scanf("%i %i", &nota2, &peso2);
    
    printf("Digite a terceira nota e seu peso: ");
    scanf("%i %i", &nota3, &peso3);
    
    /*calculando a media ponderada*/
    mp = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
    
    /*apresentando resultados*/
    printf("Media ponderada = %.2lf", mp);
}
