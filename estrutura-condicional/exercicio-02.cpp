#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    char senha[20];
    
    printf("Informe a senha: ");
	gets(senha);
	fflush(stdin);
		
	if (strcmp(senha, "Patinho Feio") == 0) {
		printf("Senha v�lida");
	} else {
		printf("Senha inv�lida");
	}
	
	getch();
}
/*
2. Elabore um algoritmo para testar se uma senha digita � igual a �Patinho Feio�. Se a senha estiver correta
escreva �Acesso permitido�, do contrario emita a mensagem �Voc� n�o tem acesso ao sistema�.
*/
