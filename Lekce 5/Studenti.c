#include<stdio.h>
#include<stdlib.h>

#Zadání - porovnání dvou věků studentů funkcí přes vlastní strukturované datové typy
#  http://jazykc.inf.upol.cz/strukturovane-datove-typy/studenti.htm

typedef struct {
	char Den, Mesic; short Rok;
} Datum;


typedef struct {
	char jmeno, prijmeni; Datum narozen;
} student;

int porovnej_vek(student s1, student s2) {


};

int main() {
	student s1;
	s1.jmeno = "Erich";
	s1.prijmeni = "Fiedler";
	s1.narozen = {11, 11, 1989};
	
	student s2 = { "Kuzma", "Kuzmic", {11, 12, 1980} };




	system("pause");
	return 0;
}
