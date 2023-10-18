#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	/*estrutura de decisao: if se a decisão é verdadeira 
	o bloco é executado, senão é ignorado*/
	
	int idade;
	
	printf("digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("entrada liberada %d\n", idade);
	}else {
		printf("A entrada nao foi liberada %d", idade);
	}
	
}
