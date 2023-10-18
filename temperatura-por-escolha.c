#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");

	double C, F, K;
	char G;
	
	printf("digite uma temperatura em celsios: ");
	scanf("%lf", &C);
	
	printf("Digite 'F' para converter em fahrenheit ou \n 'K' para converter em kelvin: ");
	scanf(" %c", &G);
	
	if(G == 'F' || G == 'f'){
		F = (C * 9 / 5) + 32;
		printf("esta temperatura em fahrenheit = %.2lf", F);
	}
	else if(G == 'K' || G == 'k'){
		K = C + 273,15;
		printf("\nesta temperatura em kelvin = %.2lf", K);
	}
}

