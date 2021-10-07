#include <stdio.h>
#include <string.h>

int main(void) {
	char A[29], B[29];
	char vogais[11] = "aeiouAEIOU";
	int i, j;
	
	scanf(" %[^\n]s", A);
	
	for(i=0;i < strlen(A);i++) {
		for(j=0;j<strlen(vogais); j++) {
			if(A[i] == vogais[j]) {
				B[i] = 95;
				break;
			} else {
				B[i] = A[i];
			}
		}
	}
	B[i] = '\0';
	printf("%s", B);
}
