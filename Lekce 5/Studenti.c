#include<stdio.h>
#include<stdlib.h>

// Porovná věk dvou studentů užitím funkce a vlastních strukturovaných datových typů, následně vypíše
// Zadání - http://jazykc.inf.upol.cz/strukturovane-datove-typy/index.htm


/* Aegnor commentary:
 * ten char pouzity na cisla je takovy ... z meho pohledu zmatecny. Do znaku
 * ukladas cislo. Lepsi by dle me byl short.
 *
 * Druha matouci vec jsou ty deklarace na jednom radku. Myslim si, ze je lepsi
 * odradkovat s kazdym strednikem. Napriklad u struktury student ... na prvni
 * pohled tam vidim dve pole charu (jmeno a prijmeni) a dva chary "Datum" a
 * "narozen".
 */
typedef struct {
	char Den, Mesic; short Rok;
} Datum;


typedef struct {
	char jmeno[20], prijmeni[20]; Datum narozen;
} student;

/* Aegnor commentary:
 * Uzus byva takovy, ze kdyz porovnavam dve veci, tak zaporny vysledek znamena,
 * ze prvni je mensi nez druhy, kladny vysledek rika, ze prvni je vetsi nez druhy.
 * 
 * Dalsi poznamka je, ze bych tady uz docela vyuzival preprocessor a #define.
 * #define RET_LOWER -1
 * #define RET_HIGHER 1
 * #define RET_EQUAL 0
 *
 * a pak v kodu bych mel "return RET_HIGHER" misto "return 1".
 */

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
/* Aegnor commentary:
 * Whiskey Tango Foxtrot! Proc tu najednou deklarujes nejakou globalni promennou?
 * Vubec nevidim duvod ji tu mit.
 */
int porovnanyvek = 0;

/* Aegnor commentary:
 * Ja jsem zvykly ridit se pravidlem, ze na stdin a stdout ma pravo sahat pouze
 * main. (stdin == standart input, cteni ze vstupu; stdout == standart output,
 * vypis na vystup) Z tohohle pohledu uplne nevidim uzitecnost teto funkce.
 *
 */
int printstarsiho(student s1, student s2, int porovnanyvek) {
	/* Vytiskne porovnání věků dvou studentů.*/
	switch (porovnanyvek) {
	case 1:
		printf("%s %s je starsi nez %s %s.\n", s1.jmeno, s1.prijmeni, s2.jmeno, s2.prijmeni);
		break;
	case -1:
		printf("%s %s je mladsi nez %s %s.\n", s1.jmeno, s1.prijmeni, s2.jmeno, s2.prijmeni);
		break;
	case 0:
		printf("%s %s je stejne stary jako %s %s.\n", s1.jmeno, s1.prijmeni, s2.jmeno, s2.prijmeni);
		break;
	}
	return 0;
};


int main() {
	student s3;
	s3.jmeno[20] = "Erich";
	s3.prijmeni[20] = "Fiedler";
	//s3.narozen = {12, 11, 1960}; //Nefunkční pokus o deklaraci celého podtypu naráz

	s3.narozen.Den = 12;
	s3.narozen.Mesic = 12;
	s3.narozen.Rok = 1960;

	student s1 = { "Doktor", "Zaba",  7, 7, 1960 };
	student s2 = { "Kuzma", "Kuzmic", 11, 12, 1960 };
	student s4 = { "Varel", "Fristensky", 20, 12, 1960 }; //Pro testování různých variant
	
	printstarsiho(s4, s1, porovnej_vek(s4, s1));

	//Všechno směrem dolů pokusy o debug

	
	system("pause");
	return 0;
}
