#include<stdio.h>
#include<stdlib.h>


int main() {
	int suma = 0;
	enum { velikostpole = 7 }; //užití na základì https://stackoverflow.com/questions/1674032/static-const-vs-define-vs-enum
	int pole[velikostpole] = { 1, 2, 3, 4, 5, 6, 7};

	for (int i = 0; i < velikostpole; i++) {
		printf("%d", pole[i]);
	}

	printf("\n");

	for (int i = 0; i <= velikostpole; i++) {
		int suma =+ pole[i];
		
	}
	
	printf("%d", suma);

	printf("Prumer pole je: %d", suma/velikostpole);

	system("pause");
	return 0;


}
