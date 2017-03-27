#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float salario;
    
    printf("Informe o salário: ");
	scanf("%f", &salario);
	
	if (salario <= 600) {
		printf("Desconto INSS: Isento");
	} else if (salario > 600 && salario <= 1200) {
		printf("Desconto INSS 20%%: %.2f", (salario * 0.2));
	} else if (salario > 1200 && salario <= 2000) {
		printf("Desconto INSS 25%%: %.2f", (salario * 0.25));
	} else {
		printf("Desconto INSS 30%%: %.2f", (salario * 0.3));
	}
	
	getch();
}

/*
26. Elabore um algoritmo que leia o salário de uma pessoa e imprima o desconto do INSS, conforme tabela descrita a seguir:
Menor ou igual a R$ 600,00 -> Isento
Maior que R$ 600,00 e menor ou igual a R$ 1.200,00 -> 20%
Maior que R$ 1.200,00 e menor ou igual a R$ 2.000,00 -> 25%
Maior que R$ 2.000,00 -> 30%
*/
