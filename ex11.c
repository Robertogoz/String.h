/* in 1 array

#include <stdio.h>
#include <string.h>

int main(void) {
	char A[20];
	int i;
	
	scanf("%[^\n]s", A);
	
	for(i=strlen(A);i>=0;i--) {
		printf("%c", A[i]);
	}
} 
*/ 

// in 2 arrays

#include <stdio.h>
#include <string.h>

int main(void) {
	char A[50], B[50];
	int i, j=0, n;
	
	scanf("%[^\n]s", A);
	
	n = strlen(A);
	
	for(i=n-1 ;i >= 0;i--) {
		B[j] = A[i];
		j++;
	}
	B[j] = '\0';
	printf("%s", B);
} 
