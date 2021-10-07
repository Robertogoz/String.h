#include <stdio.h>
#include <string.h>

int main(void) {
	int n, i;
	
	do {
	scanf("%d", &n);
	} while(n < 1 || n > 30);
	
	char S[60], text[60];
	int V[n];
	
	for(i=0;i<n;i++) {
		scanf(" %d", &V[i]);
	}
	
	scanf(" %[^\n]s", S);
	
	int j=0;
	
	for(i=0;i<n;i++) {
		text[i] = S[V[j]];
		j++;
	}
	text[i] = '\0';
	printf("%s", text); 
}
