#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int start = 1;
const int end = 99;
const int right = 20;

int random_number;
int num;

int
main()
{
	srand(time(NULL));
	random_number = start + rand()%end;
	printf("%d ile %d arasında rastgele sayı oluşturuluyor...\n", start, end);
	printf("%d deneme hakkınız var\n", right);

	for (int i = 1; i <= right; i++) {
		printf("tahmin gir: ");
		scanf("%d", &num);

		if (num > end || num < start) {
			puts("girdiğiniz değer uygun bir sayı değil!");
		        exit(EXIT_FAILURE);
		}

		if (num < random_number) {
			puts("daha büyük bir sayı girmelisin");
		} else if (num > random_number) {
			puts("daha küçük bir sayı girmelisin");
		} else {
			printf("bravo! %d. tahminde sonucu buldun. sayı: %d\n",
			       i, random_number);
		        exit(EXIT_SUCCESS);
		}

		if (i == right) {
			printf("bulamadın! sayı: %d\n", random_number);
		        exit(EXIT_FAILURE);
		}
	}
}
