#include<stdio.h>
#include<stdlib.h>

int main() {
	int hruba_mzda;
	double KoefDanPod10k = 0.9, KoefDan10kAz20k = 0.8, KoefDanNad20k = 0.7;
	int VyslednaMzda;
	int Zdanenych10k = 9000, Zdanenych10az20k = 8000;
	int VyslednaDan;


	printf("Zadejte vysi mzdy: ");
	scanf_s("%d", &hruba_mzda);


	if (hruba_mzda <= 10000) {
		VyslednaMzda = hruba_mzda * KoefDanPod10k;
		VyslednaDan = hruba_mzda - VyslednaMzda;
	}

	else if (hruba_mzda > 10000 && hruba_mzda <= 20000) {
		VyslednaMzda = ((hruba_mzda - 10000) * KoefDan10kAz20k + Zdanenych10k);
		VyslednaDan = hruba_mzda - VyslednaMzda;
	}
	else if (hruba_mzda > 20000) {
		VyslednaMzda = (hruba_mzda - 20000) * KoefDanNad20k + (Zdanenych10az20k)+(Zdanenych10k);
		VyslednaDan = hruba_mzda - VyslednaMzda;
	}

	printf("Vysledna mzda je %d.\n", VyslednaMzda);
	printf("Vysledna dan je %d.\n", VyslednaDan);

	system("pause");
	return 0;
}
