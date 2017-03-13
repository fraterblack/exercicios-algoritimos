#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float valorHoraAula, aulasNoMes, descontoInss, salarioBruto, totalDescontoInss;
    
    printf("Informe o valor da hora aula (R$): ");
	scanf("%f", &valorHoraAula);
	
	printf("Informe o número de aulas dadas: ");
	scanf("%f", &aulasNoMes);
	
	printf("Informe o percentual de desconto do INSS (%%): ");
	scanf("%f", &descontoInss);
	
	salarioBruto = valorHoraAula * aulasNoMes;
	
	totalDescontoInss = salarioBruto * (descontoInss / 100);
	
	printf("*** Folha de Pagamento do Professor ***\nHoras Horas Normais .......... %.2f \nDesconto Inss ................-%.2f \nSalário Líquido .............. %.2f", salarioBruto, totalDescontoInss, (salarioBruto - totalDescontoInss));
	
	getch();
}
/*
22. Elabore um algoritmo que efetue o cálculo do salário líquido de um professor. Os dados fornecidos
serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.
*/
