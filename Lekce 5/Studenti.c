#include<stdio.h>
#include<stdlib.h>

// Porovná věk dvou studentů užitím funkce a vlastních strukturovaných datových typů, následně vypíše
// Zadání - http://jazykc.inf.upol.cz/strukturovane-datove-typy/index.htm


typedef struct {
	char Den, Mesic; short Rok;
} Datum;


typedef struct {
	char jmeno, prijmeni; Datum narozen;
} student;

int porovnej_vek(student s1, student s2) {
	/* Pokud je s1 starší, vrátí hodnotu 1. Pokud je s2 starší, vrátí hodnotu -1.
	U shodného věku vrátí hodnotu 0.*/
	if (s1.narozen.Rok < s2.narozen.Rok)
		return 1;

	else if (s1.narozen.Rok == s2.narozen.Rok)
		if (s1.narozen.Mesic < s2.narozen.Mesic)
			return 1;
		else if (s1.narozen.Mesic == s2.narozen.Mesic)
			if (s1.narozen.Den < s2.narozen.Den)
				return 1;
			else if (s1.narozen.Den == s2.narozen.Den)
				return 0;
			else
				return -1;		
		else
			return -1;
	else
		return -1;

};

int porovnanyvek = 0;

int printstarsiho(student s1, student s2, int porovnanyvek) {
	/* Vytiskne porovnání věků dvou studentů.*/
	switch (porovnanyvek) {
		case 1:
			printf("%c", s1.jmeno, "%c", s1.prijmeni, "je starsi než %c", s2.jmeno, "%c", s2.prijmeni, ".\n");
			break;
		case -1:
			printf("%c", s1.jmeno, "%c", s1.prijmeni, "je mladsi než %c", s2.jmeno, "%c", s2.prijmeni, ".\n");
			break;
		case 0:
			printf("%c", s1.jmeno, "%c", s1.prijmeni, "je stejne stary jako %c", s2.jmeno, "%c", s2.prijmeni, ".\n");
			break;
	}
	return 0;
};
	

int main() {
	student s3;
	s3.jmeno = "Erich";
	s3.prijmeni = "Fiedler";
	s3.narozen.Den = 11;
	
	student s1 = { *"Doktor", *"Zaba", {7, 7, 1980} };
	student s2 = { *"Kuzma", *"Kuzmic", {11, 12, 1980} };

	//printstarsiho(s1, s2, porovnej_vek(s1, s2));
	
	int porovnani = porovnej_vek(s1, s2);
	
	printstarsiho(s1, s2, porovnani);

	//Všechno směrem dolů pokusy o debug

	printf("\n");

	printf("%d", porovnani);

	printf("\n");

	printf("%c", s2.jmeno);

	printf("\n");



	system("pause");
	return 0;
}
