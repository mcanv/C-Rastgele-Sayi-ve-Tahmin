#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int start = 1;
int end = 9;

int
main()
{
	int sayi;
        int tahmin;
        int hak = 20;

	srand(time(NULL));
	sayi = start + rand()%end;
	printf("%d ile %d arasında bir sayı oluşturuluyor...\n", start, end);
	printf("Toplam %d hakkınız var\n", hak);

	for (int i = 1; i <= hak; i++) {
		printf("Tahmin gir: ");
		scanf("%d", &tahmin);

		if (tahmin > end || tahmin < start) {
			puts("Girdiğiniz değer uygun bir sayı değil!\n");
			return 1;
		}

		if (tahmin < sayi) {
			puts("Daha büyük bir sayi girmelisin");
		} else if (tahmin > sayi) {
			puts("Daha küçük bir sayı girmelisin");
		} else {
			printf("Bravo! %d. tahminde sonucu buldun. Sayı: %d\n", i, sayi);
			return 0;
		}

		if (i == hak) {
			printf("Bulamadın! Sayı: %d\n", sayi);
			return 1;
		}
	}
}
