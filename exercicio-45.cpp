#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float custoEspetaculo, precoIngresso;
    
    printf("Informe o custo do espetáculo (R$): ");
	scanf("%f", &custoEspetaculo);
	
	printf("Informe o preço do ingresso (R$): ");
	scanf("%f", &precoIngresso);
	
	printf("Serão necessário ao menos %.f ingressos para que não resulte em prejuízo \n", ceil(custoEspetaculo / precoIngresso));
	
	getch();
}
/*
45. Elabore um algoritmo que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. 
Esse algoritmo deve calcular e mostrar a quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado.
*/
