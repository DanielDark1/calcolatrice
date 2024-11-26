#include <stdio.h>
#include "calc.h"
int main() {
	int A,B;
	float sol;
	printf("Inserisci il primo numero: ");
	scanf("%d",&A);
	printf("Inserisci il secondo numero: ");
	scanf("%d",&B);
	
	char scelta;
	printf("CALCOLI\n");
	printf("Inserisci tra i seguenti segni: \n");
	printf("[*] Moltiplicazione\n");
	printf("[+] Addizione\n");
	printf("[-] Sottrazione\n");
	printf("[/] Divisione\n");
	printf("Inserisci il segno: ");
	scanf(" %c",&scelta);
	switch(scelta) {
		case '*':
			sol = moltiplicazione(A, B);
			break;
		case '+':
			sol = addizione(A, B);
			break;
		case '-':
			sol = sottrazione(A, B);
			break;
		case '/':
			sol = divisione(A, B);
			break;
		default:
			printf("Segno inesistente.\n");
			break;
	}
	printf("La soluzione e' %.2f\n",sol);
}
