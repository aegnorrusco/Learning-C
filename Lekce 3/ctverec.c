#include<stdio.h>
#include<stdlib.h>

int main() {

	int velikost;
	char znak = "*";

	printf("Zadejte velikost ctverce: ");
	scanf_s("%d", &velikost);

	//teï potøebujeme cyklus pro jednak øádek a jednak "sloupec"

	//první øádek:
	for (int i = 1; i <= velikost; i++) {
		printf("*");
		
	
	}

	printf("\n");

	//prostøední øádky:
	
	for (int i = 1; i <= velikost - 2; i++) {
		printf("*");
		for (int i = 1; i <= velikost - 2; i++) {
			printf(" ");
			
		}
		printf("*\n");

	}

	//poslední øádek
	for (int i = 1; i <= velikost; i++) {
		printf("*");
		

	}
	printf("\n");


	system("pause");
	return 0;



}
