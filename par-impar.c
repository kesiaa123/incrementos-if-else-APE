#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	/*verificacao de par ou ímpar*/
	
	int num, resto;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &num);

  /*resto da divisao por 2*/
	resto = num % 2;
	
	if(resto == 0){
		printf("este numero é par %i", num);
	}else{
		printf("este numero é impar %i", num);
	}
}
