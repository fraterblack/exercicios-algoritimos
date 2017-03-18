#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float raio;
    
    printf("Informe o raio do esfera: ");
	scanf("%f", &raio);
	
	printf("O comprimento da esfera é de %.2f \n", (2 * 3.14 * raio));
	printf("A área da esfera é de %.2f \n", (3.14 * pow(raio, 2)));
	printf("O volume da esfera é de %.2f \n", (0.75 * (3.14 * pow(raio, 3))));
	
	getch();
}
/*
30. Elabore um algoritmo que receba o raio de uma esfera, calcule e mostre:
a. O comprimento dessa esfera, sabendo-se que C = 2(PI)R
b. A area dessa esfera, sabendo-se que A = (PI)R2
c. O volume dessa esfera, sabendo-se que V = 3 (PI)R3
                                             4
*/
