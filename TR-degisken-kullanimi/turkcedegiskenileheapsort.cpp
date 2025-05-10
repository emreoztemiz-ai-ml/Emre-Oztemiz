#include <iostream>
using namespace std;

void max_duzenle(int dizi[], int boyut, int indeks) {
    int en_buyuk = indeks;
    int sol = 2 * indeks + 1;
    int sag = 2 * indeks + 2;

    if (sol < boyut && dizi[sol] > dizi[en_buyuk])
        en_buyuk = sol;
    if (sag < boyut && dizi[sag] > dizi[en_buyuk])
        en_buyuk = sag;

    if (en_buyuk != indeks) {
        swap(dizi[indeks], dizi[en_buyuk]);
        max_duzenle(dizi, boyut, en_buyuk);
    }
}

void heap_sirala(int dizi[], int boyut) {
    for (int i = boyut / 2 - 1; i >= 0; i--)
        max_duzenle(dizi, boyut, i);

    for (int i = boyut - 1; i > 0; i--) {
        swap(dizi[0], dizi[i]);
        max_duzenle(dizi, i, 0);
    }
}

int main() {
    int n;
    cout << "Dizi eleman sayısını girin: ";
    cin >> n;

    int dizi[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". elemanı girin: ";
        cin >> dizi[i];
    }

    heap_sirala(dizi, n);

    cout << "Heap Sort sonrası dizi: ";
    for (int i = 0; i < n; i++)
        cout << dizi[i] << " ";
    cout << endl;

    return 0;
}
