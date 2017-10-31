#include<stdio.h>
#include<stdlib.h>



int main() {


	/* Prvni varianta (Všechny násobky pod nebo rovny 100)

	int cislo;

	printf("Zadejte cislo: ");
	scanf_s("%d", &cislo);

	int puvodnicislo = cislo;

	for (int i = 2; cislo <= 100; i++) {
		printf("%d, ", cislo);
		cislo = puvodnicislo * i;
		
	}
	*/

	/* Druha varianta (Prvních sto násobkù libovolné velikosti)

	int cislo;

	printf("Zadejte cislo: ");
	scanf_s("%d", &cislo);

	int puvodnicislo = cislo;

	for (int i = 2; i <= 101; i++) {
		printf("%d, ", cislo);
		cislo = puvodnicislo * i;


	}

	*/

	int cislo;
	int mez = 100;
	char chcizadatmez;

	printf("Zadejte cislo: ");
	scanf_s("%d", &cislo);
	printf("Vychozi mezni hodnota nasobku je 100. Prejete si zadat vlastni mezni hodnotu nasobku? (y/n)\n");
	fflush(stdin);
	scanf_s("%s", &chcizadatmez, 1*sizeof(chcizadatmez));

	if (chcizadatmez = "y") {
		printf("Zadejte mezni hodnotu: ");
		scanf_s("%d", &mez);
	}
	else if (chcizadatmez == "n") printf("Mezni hodnota zustava nastavena na 100. \n");

	else printf("Vstup nerozpoznan. Zadejte 'y' pro zadani vlastni mezni hodnoty nebo 'n' pro zachovaní vychozi mezni hodnoty. \n");


	int puvodnicislo = cislo;

	for (int i = 2; cislo <= mez; i++) {
		printf("%d, ", cislo);
		cislo = puvodnicislo * i;

	}
	

	printf("\n");

	system("pause");
	return 0;
	
}


