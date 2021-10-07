#include <stdio.h>
#include <string.h>

int main(void) {
	char A[29];
	char B[29];
	int i;
	
	scanf(" %[^\n]s", A);
	
	for(i=0;i<strlen(A); i++) {
		if (A[i] != ' '){
			B[i] =  A[i] - 31;
		} else {
			B[i] = A[i];
		}
		if(B[i] == 91) {
			B[i] = 65;
		} 
	}
	B[i] = '\0';
	printf("%s", B);
}
