#include <stdio.h>
#include <string.h>

int main(void) {
	char A[20];
	int i;
	
	scanf("%[^\n]s", A);
	
	for(i=0;i<strlen(A);i++) {
		printf("%c\n", A[i]);
	}
}
