#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float valorHoraAula, aulasNoMes, descontoInss, salarioBruto, totalDescontoInss;
    
    printf("Informe o valor da hora aula (R$): ");
	scanf("%f", &valorHoraAula);
	
	printf("Informe o n�mero de aulas dadas: ");
	scanf("%f", &aulasNoMes);
	
	printf("Informe o percentual de desconto do INSS (%%): ");
	scanf("%f", &descontoInss);
	
	salarioBruto = valorHoraAula * aulasNoMes;
	
	totalDescontoInss = salarioBruto * (descontoInss / 100);
	
	printf("*** Folha de Pagamento do Professor ***\nHoras Horas Normais .......... %.2f \nDesconto Inss ................-%.2f \nSal�rio L�quido .............. %.2f", salarioBruto, totalDescontoInss, (salarioBruto - totalDescontoInss));
	
	getch();
}
/*
22. Elabore um algoritmo que efetue o c�lculo do sal�rio l�quido de um professor. Os dados fornecidos
ser�o: valor da hora aula, n�mero de aulas dadas no m�s e percentual de desconto do INSS.
*/
