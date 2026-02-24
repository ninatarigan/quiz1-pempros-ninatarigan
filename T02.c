#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int nilai[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    int jumlahKelompok;
    scanf("%d", &jumlahKelompok);

    int kodeKelompok;
    scanf("%d", &kodeKelompok);

    int total = 0;

    for(int i = kodeKelompok - 1; i < N; i += jumlahKelompok) {
        total += nilai[i];
    }

    printf("%d\n", total);

    return 0;
}