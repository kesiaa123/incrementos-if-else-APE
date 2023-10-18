#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int valor = 10;
	
	/*incrementa de um em um*/
	valor ++;
	printf("valor depois do incremento: %d\n", valor);
	
	valor --;
	printf("valor do decremento: %d\n", valor);
	
	/*incremento generico*/
	valor +=2;
	printf("valor do incremento generico: %d\n", valor);
	
	valor -=2;
	printf("valor do decremento generico: %d\n", valor);
	
	valor *=2;
	printf("valor da multiplicação generica: %d\n", valor);
	
	valor /=2;
	printf("valor da divisão generica: %d\n", valor);
	
}
