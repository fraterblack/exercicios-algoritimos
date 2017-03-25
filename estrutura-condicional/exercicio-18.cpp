#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int x, y;
    
    printf("Informe o valor de X: ");
	scanf("%d", &x);
	
	if (x <= 1) {
		y = 1;
	} else if (x > 1 && x <=2) {
		y = 2;
	} else if (x > 2 && x <= 3) {
		y = pow(x, 2);
	} else if (x > 3) {
		y = pow(x, 3);
	}
	
	printf("O valor de Y é %d", y);
	
	getch();
}
/*
18. Elabore um algoritmo que leia o valor de x e imprima o valor de y:
1, se x<= 1
2, se 1 < x <= 2
x2, se 2 < x <= 3
X3, se x > 3
*/
