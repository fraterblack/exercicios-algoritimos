#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float custoEspetaculo, precoIngresso;
    
    printf("Informe o custo do espet�culo (R$): ");
	scanf("%f", &custoEspetaculo);
	
	printf("Informe o pre�o do ingresso (R$): ");
	scanf("%f", &precoIngresso);
	
	printf("Ser�o necess�rio ao menos %.f ingressos para que n�o resulte em preju�zo \n", ceil(custoEspetaculo / precoIngresso));
	
	getch();
}
/*
45. Elabore um algoritmo que receba o custo de um espet�culo teatral e o pre�o do convite desse espet�culo. 
Esse algoritmo deve calcular e mostrar a quantidade de convites que devem ser vendidos para que pelo menos o custo do espet�culo seja alcan�ado.
*/
