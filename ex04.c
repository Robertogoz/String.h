#include <stdio.h>
#include <string.h>

int main(void){
	char A[50], B[50];
	char c;
	int i, j=0;
	
	//ler a string e o caracter q sera retirado
	scanf("%[^\n]s", A);
	scanf(" %c", &c);
	
	for(i=0;A[i]!= '\0'; i++){
		//fazer a string B receber todos os termos da string A diferentes do caracter scaneado
		if(A[i]!=c){
			B[j]=A[i];
			j++;
		}
	}
	B[j] = '\0';//sempre após copiar uma string pra outra, usar esse comando para fechar a string e n sobrar restos
	printf("%s", B);
}
