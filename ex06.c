#include <stdio.h> 
#include <string.h>

int main(void) {
	char A[29], B[29];
	
	scanf(" %[^\n]s", A);
	scanf(" %[^\n]s", B);
	
	printf("%s %s", A, B);
}
