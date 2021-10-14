#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char A[50], B[50];
	char ch, ch2;
	int i, j=0, b=0;
	
	scanf(" %[^\n]s", A);
	scanf(" %[^\n]s", B);
	
	for(i=0;i<strlen(A);i++) {
		ch = A[i];
		ch2 = B[j];
		if(toupper(ch) == toupper(ch2)) {
			b=1;
		} else {
			b=0;
		}
		j++;
	}
	if(b == 1) {
		printf("As frases sao iguais\n");
	} else {
		printf("As frases sao diferentes\n");
	}
}
