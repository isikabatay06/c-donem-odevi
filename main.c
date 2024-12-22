#include <stdio.h>

int main() {

    int secim,sayi, i,saniye;
    long long faktoriyel = 1;

    float vize, final, ortalama;

    float tl, altin, dolar, euro;
    float altin_kur = 2968.0;
    float dolar_kur = 35.19;
    float euro_kur = 36.74;

    while (1) {
        printf("\nUygulamayi Seciniz:\n");
        printf("1 - Ortalama Hesapla\n");
        printf("2 - Faktoriyel Hesapla\n");
        printf("3 - Carpim Tablosu\n");
        printf("4 - Doviz Hesaplama\n");
        printf("5 - Kronometre\n");
        printf("0 - Cikis\n");

        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch(secim) {

        case 0 :
        printf("Programdan cikiliyor...\n");
        return 0;
        break;

        case 1 :
            printf("Vize notunu girin: ");
            scanf("%f", &vize);

            printf("Final notunu girin: ");
            scanf("%f", &final);


            ortalama = (vize * 0.4) + (final * 0.6);


            printf("\nOrtalamaniz: %.2f\n", ortalama);


            if (ortalama >= 60) {
                printf("Tebrikler, gectiniz!\n");
            } else {
                printf("Maalesef, kaldiniz.\n");
            }
            break;

        case 2 :
        printf("Bir sayi girin: ");
        scanf("%d", &sayi);

        if (sayi < 0) {
            printf("Negatif sayilarin faktoriyeli hesaplanamaz.\n");
        } else {
            for (i = 1; i <= sayi; i++) {
                faktoriyel *= i;
            }

            printf("%d sayisinin faktoriyeli: %llu\n", sayi, faktoriyel);
        }
        break;

        case 3 :
        printf("Bir sayi girin: ");
        scanf("%d", &sayi);

        printf("%d sayisinin carpim tablosu:\n", sayi);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", sayi, i, sayi * i);
        }
        break;

        case 4 :

        printf("TL miktarini girin: ");
        scanf("%f", &tl);


        altin = tl / altin_kur;
        dolar = tl / dolar_kur;
        euro = tl / euro_kur;

        printf("Girdiginiz %.2f TL miktarinin karsiliklari:\n", tl);
        printf("\nAltin: %.2f gram\n", altin);
        printf("Dolar: %.2f USD\n", dolar);
        printf("Euro: %.2f EUR\n", euro);
        printf("\nBaz Alinan Kur:\n");
        printf("Altin: %.2f TL\n", altin_kur);
        printf("Dolar: %.2f TL\n", dolar_kur);
        printf("Euro: %.2f TL\n", euro_kur);
        break;

        case 5 :

        printf("Kronometre icin saniye degerini girin: ");
        scanf("%d", &saniye);

        while (saniye > 0) {
            printf("Kalan saniye: %d\n", saniye);
            saniye--;
            sleep(1);
        }

        printf("\nKronometre bitti!\n");
        break;

        case 62 :
        printf("\nFurkanla & Atinin AMK\n");
        break;

        default :
        printf("Yanlis bir tusa bastiniz\n");
        break;

        }

    }

    return 0;
}
