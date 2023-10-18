#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  
  double peso, altura, IMC;
  
  printf("Digite seu peso: ");
  scanf("%lf", &peso);
  
  printf("Digite sua altura: ");
  scanf("%lf", &altura);
  
   IMC = peso / pow(altura, 2);
  
  if(IMC >= 30){
  	printf("seu IMC = %.2lf\n", IMC);
  	printf("clasificacao : obesidade");
  	
  }
  else if(IMC <16){
  printf("seu IMC = %.2lf\n", IMC);
  printf("classificação: Magreza grau III");
  }
  else if(IMC >=16 && IMC <=16.9){
  printf("seu IMC = %.2lf\n", IMC);
  printf("classificação: Magreza grau II");
  }
  else if(IMC >=17 && IMC <=18.4){
  printf("seu IMC = %.2lf\n", IMC);
  printf("classificação: Magreza grau I");
  }
  else if(IMC >=18.5 && IMC <=24.9){
  printf("seu IMC = %.2lf\n", IMC);
  printf("classificação: adequado");
  }
  
}
