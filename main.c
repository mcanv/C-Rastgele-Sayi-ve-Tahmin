#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int sayi,
        tahmin,
        baslangic = 1, 
        bitis = 99, 
        hak = 20;
    srand(time(NULL));
    printf("%d ile %d arasında bir sayı oluşturuluyor...\n", baslangic, bitis);
    sayi = baslangic+rand()%bitis;
    printf("Toplam %d hakkınız var\n", hak);
    for(int i=1;i<=hak;i++) {
        printf("Tahmin gir: ");
        scanf("%d", &tahmin);
        if(tahmin > bitis || tahmin < baslangic) {
            printf("Girdiğiniz değer uygun bir sayı değil!\n");
            break;
        }
        if(i == hak && tahmin != sayi) {
            printf("Bulamadın! Sayı: %d", sayi);
            break;
        }
        if(tahmin < sayi) {
            printf("Daha büyük bir sayi girmelisin\n");
        }
        else if(tahmin > sayi) {
            printf("Daha küçük bir sayı girmelisin\n");
        }
        else if(tahmin == sayi) {
            printf("Bravo! %d. tahminde sonucu buldun. Sayı: %d", i, sayi);
            break;
        }
    }
}
