#include <stdio.h>

int main() {
    int n;
    
    printf("Masukkan jumlah siswa: ");
    scanf("%d", &n);

    char nama[n][50];
    int nilai[n];
    int total = 0;

    // Input nama
    for(int i = 0; i < n; i++) {
        printf("Masukkan nama siswa ke-%d: ", i+1);
        scanf("%s", nama[i]);
    }

    // Generate nilai
    int current = 75;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            nilai[i] = current;
        } else {
            if(i % 2 == 1) current -= 10;
            else current += 15;

            nilai[i] = current;
        }
        total += nilai[i];
    }

    // Input banyak nomor urutan siswa yang ingin dikelompokkan
    int k;
    printf("\nBerapa siswa yang ingin dibuat dalam kelompok? ");
    scanf("%d", &k);

    int pilih[k];

    // Input nomor urutan siswa
    for(int i = 0; i < k; i++) {
        printf("Masukkan nomor siswa ke-%d: ", i+1);
        scanf("%d", &pilih[i]);
    }

    // Output hasil
    printf("\n=== HASIL PILIHAN ===\n");
    for(int i = 0; i < k; i++) {
        if(pilih[i] >= 1 && pilih[i] <= n) {
            printf("%d. %s = %d\n", 
                   pilih[i], 
                   nama[pilih[i]-1], 
                   nilai[pilih[i]-1]);
        } else {
            printf("Nomor %d tidak valid!\n", pilih[i]);
        }
    }

    printf("\nTotal Nilai Kelompok = %d\n", total);

    return 0;
}