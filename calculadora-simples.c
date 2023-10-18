#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

double num1, num2, A, S, M, D;
char oper;

printf("Digite um número: ");
scanf("%lf", &num1);

printf("Digite outro número: ");
scanf("%lf", &num2);

printf("Digite o operador: (+,-,*,/)");
scanf(" %c", &oper);

printf("\n");
if(oper == '+'){
	A = num1 + num2;
	printf("A soma = %.2lf", A);	
}
else if(oper == '-'){
	S = num1 - num2;
	printf("A subtracao = %.2lf", S);
}
else if(oper == '*'){
	M = num1 * num2;
	printf("a multiplicacao = %.2lf", M);
}
else if(oper == '/'){
	D = num1 / num2;
	printf("a divisao = %.2lf", D);
}
}
