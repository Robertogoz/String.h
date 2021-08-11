#include <stdio.h>
#include <string.h>

int main(void){
	char A[50];
	int i;
	char j;
	
	scanf("%[^\n]s", A);
	
	for(i=0; A[i] != '\0';i++){
		if(A[i] >= 48 && A[i] <= 57){          //48 = ASCII 0 && 57 = ASCII 9
			j = A[i];
			printf("%c", j);
		}
	}
}
