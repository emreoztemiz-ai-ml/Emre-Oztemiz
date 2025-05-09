
![cpp-test](https://github.com/user-attachments/assets/9351176a-4ea7-453c-ad2c-4e799cf62ff9)

## 🎯 Test Kodu Ekleme (Girdi İçeren Kodlar)

Render gibi platformlarda doğrudan `cin` ile kullanıcı girdisi almak mümkün olmadığından, test amaçlı sabit giriş değerleri içeren ana heapsort final projesi kodumuzu ihtiva eden bir C++ kodu örneği aşağıda sunulmuştur:

### 🔢 Örnek Test Kodu (Heap Sort)

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Heapify ve heap sort işlemleri
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 9}; // Girdi burada sabit olarak verilmiştir

    cout << "Siralama oncesi dizi: ";
    for (int x : arr) cout << x << " ";

    heapSort(arr);

    cout << "\nSiralama sonrasi dizi: ";
    for (int x : arr) cout << x << " ";

    return 0;
}

```

🔗 Denemek için;  
[cpp-web-deneme.onrender.com](https://cpp-web-deneme.onrender.com) 
