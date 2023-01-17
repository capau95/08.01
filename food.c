#include <stdio.h>
#include <string.h>

int main() {

	char* produkt[5] = {"Äpfel", "Birnen", "Brot", "Mehl", "Gummibärchen"};
	int packung[5] = {500, 400, 250, 1000, 175};
	float preis[5] = {2.80, 2.90, 1.50, 0.95, 0.90};

	int i;

	printf("\n");
	
	for (i = 0; i < 5; i++) {

		printf("%s - ", produkt[i]);
		printf("%.2f € - ", preis[i]);
		printf("%d g - ", packung[i]);
		printf("%.2f €/Kilo netto - ", preis[i] / packung[i] * 1000 / 1.07);
		printf("%.2f €/Kilo brutto", preis[i] / packung[i] * 1000);
		printf("\n\n");

	}

	return 0;

} 
 
