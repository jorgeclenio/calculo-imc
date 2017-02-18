//----------------------------------------------------
// Desenvolvedor: Jorge Cl�nio da Silva Junior
// Local: Bras�lia - DF
// Data e hora: 18/02/2017 - 17:30 ~ 17:52
// Curso: Engenharia da Computa��o
// Semestre: 4� Semestre
//----------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
	int peso;
	float altura, imc;
	
	setlocale(LC_ALL,"Portuguese");
	printf("\nOl�, seja bem vindo. Este programa ir� executar o c�lculo de seu IMC (�ndice de Massa Corporal).\n\n");	
	printf("OBS: DIGITE A ALTURA UTILIZANDO V�RGULA, CASO CONTR�RIO HAVER� ERRO NA HORA DE REALIZAR O C�LCULO DO MESMO.\nEX: 1,70 AO INV�S DE 1.70.\n\n");
	
	printf("Digite aqui seu peso em quilos(kg): ");
	scanf("%d",&peso);
	printf("Digite aqui sua altura em metros(m): ");
	scanf("%f",&altura);
	
	imc=peso/(altura*altura);
	
	printf("\n|------------------------------------------------|\n");
  	printf("| VALOR FINAL         | SITUA��O                 |\n");
  	printf("|------------------------------------------------|\n");
  	printf("| Abaixo de 17        | Muito abaixo do peso.    |\n");
  	printf("| Entre 17 e 18,49    | Abaixo do peso.          |\n");
  	printf("| Entre 18,5 e 24,99  | Peso normal.             |\n");
  	printf("| Entre 25 e 29,99    | Acima do peso.           |\n");
  	printf("| Entre 30 e 34,99    | Obesidade I.             |\n");
  	printf("| Entre 35 e 39,99    | Obesidade II (severa).   |\n");
  	printf("| Acima de 40         | Obesidade III (m�rbida). |\n");
  	printf("|------------------------------------------------|\n\n");
	
	printf("O resultado de seu IMC � de: %.2f", imc);
	printf("\nConsulte a tabela acima para verificar sua situa��o.\n\n\n");
			
	system("pause");
	getch();
}
