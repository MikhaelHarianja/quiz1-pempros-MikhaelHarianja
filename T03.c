#include <stdio.h>

#define HARGA 10000

int main() {
    int n_putri, n_putra;
    int i;

    // ASRAMA PUTRI
    printf("=== LAUNDRY IT DEL ===\n");
    printf("Jadwal Putri: Jemput Rabu, Kembali Jumat\n\n");

    printf("Masukkan jumlah asrama putri: ");
    scanf("%d", &n_putri);

    char nama_putri[n_putri][50];
    int jumlah_putri[n_putri];
    int total_putri = 0;

    for(i = 0; i < n_putri; i++) {
        printf("\nAsrama Putri ke-%d\n", i+1);
        printf("Nama asrama: ");
        scanf(" %[^\n]", nama_putri[i]);

        printf("Jumlah orang: ");
        scanf("%d", &jumlah_putri[i]);

        total_putri += jumlah_putri[i] * HARGA;
    }

    // ASRAMA PUTRA
    printf("\nJadwal Putra: Jemput Sabtu, Kembali Senin\n\n");

    printf("Masukkan jumlah asrama putra: ");
    scanf("%d", &n_putra);

    char nama_putra[n_putra][50];
    int jumlah_putra[n_putra];
    int total_putra = 0;

    for(i = 0; i < n_putra; i++) {
        printf("\nAsrama Putra ke-%d\n", i+1);
        printf("Nama asrama: ");
        scanf(" %[^\n]", nama_putra[i]);

        printf("Jumlah orang: ");
        scanf("%d", &jumlah_putra[i]);

        total_putra += jumlah_putra[i] * HARGA;
    }

    // OUTPUT
    printf("\n=== HASIL PENGHASILAN ===\n");

    printf("\n-- Asrama Putri --\n");
    for(i = 0; i < n_putri; i++) {
        int hasil = jumlah_putri[i] * HARGA;
        printf("%s : Rp %d\n", nama_putri[i], hasil);
    }
    printf("Total Putri: Rp %d\n", total_putri);

    printf("\n-- Asrama Putra --\n");
    for(i = 0; i < n_putra; i++) {
        int hasil = jumlah_putra[i] * HARGA;
        printf("%s : Rp %d\n", nama_putra[i], hasil);
    }
    printf("Total Putra: Rp %d\n", total_putra);

    printf("\nTOTAL KESELURUHAN: Rp %d\n", total_putri + total_putra);

    return 0;
}