#include <stdio.h>
#include <stdlib.h>

float penjumlahan(float angka1, float angka2);
float pengurangan(float angka1, float angka2);
float perkalian(float angka1, float angka2);
float pembagian(float angka1, float angka2);

int main() {
  int pil;
  float a,b;
  char ulang;

  do {
    #ifdef WINDOWS
      std:system("cls");
    #else
      std:system("clear");
    #endif

    printf("|====== KALKULATOR SEDERHANA BANGET ======|");
    printf("\n| 1. Penjumlahan\t\t\t  |");
    printf("\n| 2. Pengurangan\t\t\t  |");
    printf("\n| 3. Perkalian\t\t\t\t  |");
    printf("\n| 4. Pembagian\t\t\t\t  |");
    printf("\n| 5. Keluar\t\t\t\t  |");
    printf("\n|=========================================|\n");
    printf("  Masukkan Pilihan: ");
    scanf("%d", &pil);

    switch (pil) {
      case 1:
        printf("|============== Penjumlahan ==============|\n");
        printf("  Angka Pertama\t: ");
        scanf("%f", &a);
        printf("  Angka Kedua\t: ");
        scanf("%f", &b);
        printf("|=========================================|\n");
        printf("\t\t  %.2f\n", penjumlahan(a,b));

        printf("\n  Ulang? [y/g]: ");
        scanf("%s", &ulang);
        break;
      case 2:
        printf("|============== Pengurangan ==============|\n");
        printf("  Angka Pertama\t: ");
        scanf("%f", &a);
        printf("  Angka Kedua\t: ");
        scanf("%f", &b);
        printf("|=========================================|\n");
        printf("\t\t  %.2f\n", pengurangan(a,b));

        printf("\n  Ulang? [y/g]: ");
        scanf("%s", &ulang);
        break;
      case 3:
        printf("|=============== Perkalian ===============|\n");
        printf("  Angka Pertama\t: ");
        scanf("%f", &a);
        printf("  Angka Kedua\t: ");
        scanf("%f", &b);
        printf("|=========================================|\n");
        printf("\t\t  %.2f\n", perkalian(a,b));

        printf("\n  Ulang? [y/g]: ");
        scanf("%s", &ulang);
        break;
      case 4:
        printf("|=============== Pembagian ===============|\n");
        printf("  Angka Pertama\t: ");
        scanf("%f", &a);
        printf("  Angka Kedua\t: ");
        scanf("%f", &b);
        printf("|=========================================|\n");
        printf("\t\t  %.2f\n", pembagian(a,b));

        printf("\n  Ulang? [y/g]: ");
        scanf("%s", &ulang);
        break;
      case 5:
        printf("\n  DADAH!\n");
        exit(0);
      default:
        printf("  Pilihan Anda Salah!\n");

        printf("\n  Ulang? [y/g]: ");
        scanf("%s", &ulang);
        break;
    }

  } while(ulang == 'y');

  return 0;
}

float penjumlahan(float angka1, float angka2) {
  float hasil = angka1 + angka2;
  return hasil;
}

float pengurangan(float angka1, float angka2) {
  float hasil = angka1 - angka2;
  return hasil;
}

float perkalian(float angka1, float angka2) {
  float hasil = angka1 * angka2;
  return hasil;
}

float pembagian(float angka1, float angka2) {
  float hasil = angka1 / angka2;
  return hasil;
}
