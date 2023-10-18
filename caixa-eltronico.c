#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  
	double valor, N;
	double saldo = 1000.00;
	
	printf("digite o valor que deseja sacar: R$ ");
	scanf("%lf", &valor);

	if(valor <= saldo ){
		if(valor > 0){
				N = saldo - valor;
	
			printf("operacao concedida \n");
			printf("saldo atual = R$%.2lf", N);
		}else if(valor < 0){
			printf(" valor invalido");
		}
		
	}
	else{
	printf("saldo indisponivel");
	}
}
