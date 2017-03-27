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
		printf("Senha válida");
	} else {
		printf("Senha inválida");
	}
	
	getch();
}
/*
2. Elabore um algoritmo para testar se uma senha digita é igual a “Patinho Feio”. Se a senha estiver correta
escreva “Acesso permitido”, do contrario emita a mensagem “Você não tem acesso ao sistema”.
*/
