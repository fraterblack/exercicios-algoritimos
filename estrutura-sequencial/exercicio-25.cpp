#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float totalDespesa, totalGorjeta;
    
    printf("Informe o total da despesa (R$): ");
	scanf("%f", &totalDespesa);
	
	totalGorjeta = totalDespesa * 0.1;
	
	printf("********* Total do Pedido *********\nTotal despesas ................. %.2f \nGorjeta Gar�om ................. %.2f \nTotal do Pedido ................ %.2f", totalDespesa, totalGorjeta, (totalDespesa + totalGorjeta));
	
	getch();
}
/*
25. Todo restaurante, embora por lei n�o possa obrigar o cliente a pagar, cobra 10% para o gar�om.
Elabore um algoritmo que leia o valor gasto com despesas realizadas em um restaurante, e imprima
o valor total com a gorjeta.
*/
