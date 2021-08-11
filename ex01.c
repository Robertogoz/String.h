#include <stdio.h>
#include <string.h>

int main(void){
	char A[50];
	char B[50];
	int i;
	
	scanf("%[^\n]s", A);
	
	int j = strlen(A);
	
	for(i=0; A[i] != '\0'; i++){
		B[i] = A[j - 1];
		j--;
	}
	printf("%s", B);
}
