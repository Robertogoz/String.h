#include <stdio.h>
#include <string.h>

int main(void){
	char A[100], B[100];
	int i, j=0;
	
	scanf("%[^\n]s", A);
	
	for(i=0;A[i] != '\0';i++){
		B[j] = A[i];
		if(A[i-1] != '2'){
			if((A[i] >= '0' && A[i] <= '1') || A[i] == ',' || A[i] == '.'){
				B[j] = '*';
			}
		}
		j++;
		if(j>50 && B[j-1] == '*'){
		B[j-1] = '.';
		}
	}
	B[j] = '\0';
	printf("%s", B);
}
