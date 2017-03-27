#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float valorProduto;
	
	printf("Valor do Produto: ");
	scanf("%f", &valorProduto);
	
	if(valorProduto < 20) {
		printf("Valor de venda: %.2f", valorProduto + (valorProduto * 0.45));
	} else {
		printf("Valor de venda: %.2f", valorProduto + (valorProduto * 0.3));
	}
	
	getch();
}
/*
25. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45%, se o valor da compra for menor que R$ 20,00; 
caso contrário, o lucro será de 30%. 
Elabore um algoritmo que leia o valor do produto e imprima o valor de venda, considerando o lucro que deverá ser calculado.
*/
