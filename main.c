#include<stdio.h><stdlib.h>

 float boy;
 float kilo;
 float ideal_kilo;
 float vucut_kitle_endeksi;
 int yas;
 float toplam_vucut_suyu;
 float yagsiz_vucut_agirligi;

int endeks(){

    vucut_kitle_endeksi = kilo/((boy/100)*(boy/100));
    printf("\nVucut Kitle Endeksiniz: %.2f\n\n", vucut_kitle_endeksi);

    if(vucut_kitle_endeksi <= 18.5){
        printf("Zayifsiniz\n\n");
    }
    if(vucut_kitle_endeksi < 25){
        printf("Kilonuz Normal\n\n");
    }
    if(26 < vucut_kitle_endeksi){
        printf("Fazla Kilolusunuz\n\n");
    }
}

int main(){

 printf("Yasinizi Giriniz: ");
 scanf("%d", &yas);

 printf("Kilonuzu Giriniz: ");
 scanf("%f", &kilo);


 printf("Boyunuzu Giriniz: ");
 scanf("%f", &boy);

 ideal_kilo =(2.3 / 2.54) * (boy - 152.4) + 50;
 toplam_vucut_suyu = 2.447 + ((0.3362 * kilo) + (0.1074 * boy) - (0.09156 * yas));
 yagsiz_vucut_agirligi = (1.1 * kilo) - 128 * ((pow(kilo,2) / pow((100*(boy/100)),2)));

    endeks();

 printf("Ideal Kilonuz: %.2f\n\n", ideal_kilo);
 printf("Toplam Vucut Suyunuz %.2f\n\n", toplam_vucut_suyu);
 printf("Yagsiz Vucut Agirligi %.2f\n\n", yagsiz_vucut_agirligi);

}
