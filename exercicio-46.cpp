#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float pesoPacote, consumoGato1, consumoGato2, restantePacote;
    
    printf("Informe o peso do pacote (Kg): ");
	scanf("%f", &pesoPacote);
	
	printf("Informe o consumo do Gato 1 (Gramas): ");
	scanf("%f", &consumoGato1);
	
	printf("Informe o consumo do Gato 2 (Gramas): ");
	scanf("%f", &consumoGato2);
	
	consumoGato1 = (consumoGato1 / 1000); //Convers�o em kilos
	consumoGato2 = (consumoGato2 / 1000); //Convers�o em kilos
	
	restantePacote = pesoPacote - (consumoGato1 * 5) - (consumoGato2 * 5);
	
	if (restantePacote < 0) {
		printf("Ra��o insuficiente! Para o consumo de 5 dias, voc� precisa comprar mais %.2f Kg de ra��o. \n", -(restantePacote));
	} else {
		printf("Daqui 5 dias, restar� %.2f Kg de ra��o \n", restantePacote);
	}
	
	getch();
}
/*
46. Pedro comprou um saco de ra��o com peso em quilos. Pedro possui dois gatos para os quais fornece a quantidade de ra��o em gramas. 
Elabore um algoritmo que receba o peso do saco de ra��o e quantidade de ra��o fornecida para cada gato. 
Calcule e mostre quanto restar� de ra��o no saco ap�s cinco dias.
*/
