#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float precoFabrica, taxaLucro, taxaImposto, totalLucro, totalImpostos;
    
    printf("Informe o pre�o de f�brica (R$): ");
	scanf("%f", &precoFabrica);
	
	printf("Informe a taxa de lucro (%%): ");
	scanf("%f", &taxaLucro);
	
	printf("Informe a taxa de imposto (%%): ");
	scanf("%f", &taxaImposto);
	
	totalLucro = precoFabrica * (taxaLucro / 100);
	totalImpostos = precoFabrica * (taxaImposto / 100);
	
	printf("Lucro do Distribuidor .................. %.2f \n", totalLucro);
	printf("Valor dos Impostos ...................... %.2f \n", totalImpostos);
	printf("Pre�o Final do Ve�culo ................. %.2f \n", (precoFabrica + totalLucro + totalImpostos));
	
	getch();
}
/*
37. O custo ao consumidor de um carro novo � a soma do pre�o de f�brica, com o percentual de lucro do
distribuidor aplicado ao pre�o de f�brica, e dos impostos aplicados ao pre�o de f�brica. Elabore um
algoritmo que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o
percentual de impostos. Calcule e mostre:
a. O valor correspondente ao lucro do distribuidor
b. O valor correspondente aos impostos
c. O pre�o final do ve�culo
*/
