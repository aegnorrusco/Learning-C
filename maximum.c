#include<stdlib.h>
#include<stdio.h>

int main() {
	float prvni_cislo, druhe_cislo, treti_cislo, maxcislo;

	printf("Zadejte prvni cislo: ");
	scanf_s("%g", &prvni_cislo);
	printf("Zadejte druhe cislo: ");
	scanf_s("%g", &druhe_cislo);
	printf("Zadejte treti cislo: ");
	scanf_s("%g", &treti_cislo);


	/* Druhé øešení
	
	if (prvni_cislo >= druhe_cislo) maxcislo = prvni_cislo;
	else maxcislo = druhe_cislo;

	if (treti_cislo >= maxcislo) maxcislo = treti_cislo;

	printf("Nejvetsi cislo je %g.\n", maxcislo);

	*/

	if ((prvni_cislo >= druhe_cislo) && (prvni_cislo >= treti_cislo)) printf("Nejvetsi cislo je %g.\n", prvni_cislo);

	else if ((druhe_cislo >= prvni_cislo) && (druhe_cislo >= treti_cislo)) printf("Nejvetsi cislo je %g.\n", druhe_cislo);

	else printf("Nejvetsi cislo je %g.\n", treti_cislo);


	system("pause");
	return 0;

}