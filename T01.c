#include <stdio.h>

int main() {
    char *nama[] = {
        "Nasi Goreng Spesial",
        "Ayam Penyet",
        "Sate Ayam",
        "Bakso Urat",
        "Mie Ayam Pangsit",
        "Gado-Gado",
        "Soto Ayam",
        "Rendang Daging",
        "Ikan Bakar",
        "Nasi Uduk Komplit"
    };

    int harga[] = {15000,20000,25000,18000,15000,15000,17000,25000,35000,20000};

    int porsi[10];
    int total = 0;

    printf("=== Input Porsi ===\n");

    for(int i = 0; i < 10; i++) {
        printf("%s : ", nama[i]);
        scanf("%d", &porsi[i]);
    }

    printf("\nMenu                    Porsi   Harga   Total\n");
    printf("=================================================\n");

    for(int i = 0; i < 10; i++) {
        if(porsi[i] > 0) {
            int subtotal = porsi[i] * harga[i];
            total += subtotal;

            printf("%-22s %-7d %-7d %-7d\n",
                   nama[i], porsi[i], harga[i], subtotal);
        }
    }

    printf("=================================================\n");
    printf("Total Pembayaran                  %d\n", total);

    // Diskon
    float diskon = 0;
    char kupon[20] = "-";

    if(total > 500000) { diskon = 0.25; sprintf(kupon,"Hitam"); }
    else if(total > 400000) { diskon = 0.20; sprintf(kupon,"Hijau"); }
    else if(total > 300000) { diskon = 0.15; sprintf(kupon,"Merah"); }
    else if(total > 200000) { diskon = 0.10; sprintf(kupon,"Kuning"); }
    else if(total > 100000) { diskon = 0.05; sprintf(kupon,"Biru"); }

    int potongan = total * diskon;
    int bayar = total - potongan;

    printf("\nKupon : %s\n", kupon);
    printf("Potongan : %d\n", potongan);
    printf("Total Bayar : %d\n", bayar);

    return 0;
}