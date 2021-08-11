#include <stdio.h>
#include <string.h>

int main(void){
	char A[50];
	int NV=0, NC=0;
	int i, a;
	
	scanf("%[^\n]s", A);
	
	for(i = 0; A[i] != '\0'; i++){
		switch(A[i]){
			case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case'U': {
				NV++;
				break;
			}
			case ' ': {
				a++;
				break;
			} 
			default: {
				NC++;
				break;
			}
		}
	}
	printf("%d", NV+(2*NC));
}
