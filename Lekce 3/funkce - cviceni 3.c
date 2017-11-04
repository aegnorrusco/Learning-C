#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#Zadání - http://www.inf.upol.cz/downloads/studium/YUP1/s03PoleFunkce.pdf (Slide 21)

double spoctiobjemkvadru(double strana_a, double strana_b, double strana_c) {
	double objemkvadru = 0;
	objemkvadru = strana_a * strana_b * strana_c;
	return objemkvadru;

}


double spoctipovrchkvadru(double strana_a, double strana_b, double strana_c) {
	double povrchkvadru = 0;
	povrchkvadru = (2 * (strana_a * strana_b + strana_a *strana_c + strana_b * strana_c));
	return povrchkvadru;

}


double spoctiobjemvalce(double polomer, double vyska) {
	double objemvalce = 0;
	double pi = 3.14159;
	objemvalce = (pi * polomer * polomer * vyska);
	return objemvalce;

}

double spoctipovrchvalce(double polomer, double vyska) {
	double povrchvalce = 0;
	double pi = 3.14159;
	povrchvalce = (2 * pi * polomer * (polomer + vyska));
	return povrchvalce;
}


int main() {

	char kvadrcivalec[6] = "xxxxx";
	double userstrana_a = 0, userstrana_b = 0, userstrana_c = 0;
	double polomer = 0, vyska = 0;

	printf("Zadejte typ telesa (kvadr/valec): ");
	fflush(stdin);
	scanf_s("%s", &kvadrcivalec, 1 * sizeof(kvadrcivalec));


	if (strcmp(kvadrcivalec, "kvadr") == 0) {
		printf("Zadejte prvni stranu: ");
		scanf_s("%lg", &userstrana_a);
		printf("Zadejte druhou stranu: ");
		scanf_s("%lg", &userstrana_b);
		printf("Zadejte treti stranu: ");
		scanf_s("%lg", &userstrana_c);
		double objemkvadru = spoctiobjemkvadru(userstrana_a, userstrana_b, userstrana_c);
		double povrchkvadru = spoctipovrchkvadru(userstrana_a, userstrana_b, userstrana_c);
		printf("Objem kvadru je %lg.\n", objemkvadru);
		printf("Povrch kvadru je %lg.\n", povrchkvadru);

	}

	else if (strcmp(kvadrcivalec, "valec") == 0) {
		printf("Zadejte polomer: ");
		scanf_s("%lg", &polomer);
		printf("Zadejte vysku: ");
		scanf_s("%lg", &vyska);

		printf("Objem valce je %lg.\n", spoctiobjemvalce(polomer, vyska));
		printf("Povrch valce je %lg.\n", spoctipovrchvalce(polomer, vyska));

	}

	else printf("Vstup nerozpoznán. Zadejte 'kvadr' nebo 'valec'.\n");

	system("pause");
	return 0;
}
