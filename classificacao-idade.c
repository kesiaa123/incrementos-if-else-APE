#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("digite sua idade: ");
	scanf("%i", &idade);
	
	if(idade <= 12){
		printf("categoria: Crianca");
	}
	else if(idade >= 13 && idade <= 19){
		printf("categoria: Adolescente");
	}
	else if(idade >= 20 && idade <= 59){
		printf("categoria: Adulto");
	}
	else if(idade >= 60){
		printf("categoria: Idoso");
	}
}
