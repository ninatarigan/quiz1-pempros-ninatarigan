#include <stdio.h>
#include <string.h>

// Definisi struktur data pelanggan
struct Pelanggan {
    char id[10];
    char nama[50];
    char telepon[15];
    float berat_laundry; // dalam kg
};

int main() {
    struct Pelanggan daftar[100]; // Kapasitas 100 pelanggan
    int jumlahPelanggan = 0;
    int pilihan;

    printf("=== Selamat Datang di Sistem Laundry Del ===\n");

    do {
        printf("\nMenu Operasional:\n");
        printf("1. Tambah Data Pelanggan\n");
        printf("2. Lihat Daftar Pelanggan\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);
        getchar(); // Membersihkan buffer enter

        if (pilihan == 1) {
            // Input Data
            printf("\n--- Input Data Pelanggan ---\n");
            printf("ID Pelanggan   : ");
            scanf("%s", daftar[jumlahPelanggan].id);
            getchar(); 

            printf("Nama Pelanggan : ");
            fgets(daftar[jumlahPelanggan].nama, sizeof(daftar[jumlahPelanggan].nama), stdin);
            daftar[jumlahPelanggan].nama[strcspn(daftar[jumlahPelanggan].nama, "\n")] = 0; // Hapus newline

            printf("No. Telepon    : ");
            scanf("%s", daftar[jumlahPelanggan].telepon);

            printf("Berat (kg)     : ");
            scanf("%f", &daftar[jumlahPelanggan].berat_laundry);

            jumlahPelanggan++;
            printf("\n>> Data berhasil disimpan!\n");

        } else if (pilihan == 2) {
            // Output Data
            printf("\n--- Daftar Operasional Laundry Del ---\n");
            printf("--------------------------------------------------------------\n");
            printf("%-10s | %-20s | %-15s | %-10s\n", "ID", "Nama", "Telepon", "Berat (kg)");
            printf("--------------------------------------------------------------\n");
            
            for (int i = 0; i < jumlahPelanggan; i++) {
                printf("%-10s | %-20s | %-15s | %.2f kg\n", 
                        daftar[i].id, daftar[i].nama, daftar[i].telepon, daftar[i].berat_laundry);
            }
            if (jumlahPelanggan == 0) printf("Belum ada data pelanggan.\n");
            printf("--------------------------------------------------------------\n");
        }

    } while (pilihan != 3);

    printf("Terima kasih telah menggunakan sistem Laundry Del!\n");
    return 0;
}