//----------------------------------------------------
// Desenvolvedor: Jorge Clênio da Silva Junior
// Local: Brasília - DF
// Data e hora: 18/02/2017 - 17:30 ~ 17:52
// Curso: Engenharia da Computação
// Semestre: 4º Semestre
//----------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
	float peso, altura, imc;
	
	setlocale(LC_ALL,"Portuguese");
	printf("\nOlá, seja bem vindo. Este programa irá executar o cálculo de seu IMC (Índice de Massa Corporal).\n\n");	
	printf("OBS: DIGITE A ALTURA UTILIZANDO VÍRGULA, CASO CONTRÁRIO HAVERÁ ERRO NA HORA DE REALIZAR O CÁLCULO DO MESMO.\nEX: 1,70 AO INVÉS DE 1.70.\n\n");
	
	printf("Digite aqui seu peso em quilos(kg): ");
	scanf("%f",&peso);
	printf("Digite aqui sua altura em metros(m): ");
	scanf("%f",&altura);
	
	imc=peso/(altura*altura);
	
	printf("\n|------------------------------------------------|\n");
  	printf("| VALOR FINAL         | SITUAÇÃO                 |\n");
  	printf("|------------------------------------------------|\n");
  	printf("| Abaixo de 17        | Muito abaixo do peso.    |\n");
  	printf("| Entre 17 e 18,49    | Abaixo do peso.          |\n");
  	printf("| Entre 18,5 e 24,99  | Peso normal.             |\n");
  	printf("| Entre 25 e 29,99    | Acima do peso.           |\n");
  	printf("| Entre 30 e 34,99    | Obesidade I.             |\n");
  	printf("| Entre 35 e 39,99    | Obesidade II (severa).   |\n");
  	printf("| Acima de 40         | Obesidade III (mórbida). |\n");
  	printf("|------------------------------------------------|\n\n");
	
	printf("O resultado de seu IMC é de: %.2f", imc);
	printf("\nConsulte a tabela acima para verificar sua situação.\n\n\n");
			
	system("pause");
	getch();
}
