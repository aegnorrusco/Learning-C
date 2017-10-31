#include<stdio.h>
#include<stdlib.h>

int main() {

	
	int prvni_clen, diff, pocet;

	printf("Zadejte prvni clen: ");
	scanf_s("%d", &prvni_clen);
	printf("Zadejte diferenci: ");
	scanf_s("%d", &diff);
	printf("Zadejte pocet: ");
	scanf_s("%d", &pocet);

	
	if (pocet == 1) printf("%d. ", prvni_clen);

	else if (pocet > 1) for (int i = 0; i < (pocet - 1); i++) {
		printf("%d, ", prvni_clen + diff*i);

	}

	else printf("Zadany pocet byl nizsi nez 1.");


	if (pocet > 1) printf("%d.", prvni_clen + diff*(pocet - 1)); // pro vytisknutí teèky u posledního èlenu



	printf("\n");
	system("pause");
		return 0;
}
