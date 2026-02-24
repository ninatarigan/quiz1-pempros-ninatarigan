#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    int porsi;
    int harga = 0;
    int subtotal;
    int total = 0;

    printf("=== SISTEM TRANSAKSI WARUNG MAK ROBY ===\n");

    while (1) {
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%d", &porsi);

        if (strcmp(kode, "NGS") == 0) {
            harga = 25000;
        }
        else if (strcmp(kode, "AP") == 0) {
            harga = 20000;
        }
        else if (strcmp(kode, "GG") == 0) {
            harga = 15000;
        }
        else if (strcmp(kode, "ES") == 0) {
            harga = 5000;
        }
        else {
            harga = 0;
        }

        subtotal = harga * porsi;
        total += subtotal;
    }

    printf("\n===== STRUK PEMBAYARAN =====\n");
    printf("Total Belanja : Rp %d\n", total);

    if (total >= 200000) {
        printf("Kupon : Kuning\n");
    }
    else if (total >= 100000) {
        printf("Kupon : Biru\n");
    }
    else {
        printf("Kupon : Tidak ada\n");
    }

    printf("=============================\n");

    return 0;
}