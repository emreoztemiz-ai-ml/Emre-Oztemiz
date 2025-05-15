## ❓ Heap Sort nedir?
**Heap Sort**, karşılaştırmalı bir sıralama algoritmasıdır. Max-Heap veri yapısını kullanarak en büyük elemanı köke getirir ve sıralama işlemini bu yapı üzerinden yapar.  
⏱️ **Zaman karmaşıklığı** her durumda: `O(n log n)`

---

## ❓ Heapify fonksiyonu ne işe yarar?
`heapify`, verilen bir dizide belirli bir kök düğümden başlayarak **max-heap** kurulumunu sağlar. Sol ve sağ çocuk düğümlerle karşılaştırarak en büyük değeri köke taşır.  
Gerekirse bu işlemi alt dallarda da tekrar eder.

---

## ❓ Neden sondan başa doğru heapify yapıyoruz?
Çünkü yaprak düğümler zaten tek elemanlı heap’tir. Heapify işlemi, **yaprak olmayan düğümlerden** başlatılır. Bu nedenle `n/2 - 1`'den geriye doğru işlem yapılır.

---

## ❓ Kök ile neden son eleman yer değiştiriyor?
Heap Sort’ta kök her zaman en büyük elemandır. Bu eleman sona alınarak sıralanmış hale getirilir. Daha sonra kalan yapı tekrar heapify edilir.

---

## ❓ Kodda neden `vector` kullandık?
C++'ta `vector`, dinamik bir dizi yapısı sunar. Kullanıcıdan alınan veri sayısına göre otomatik olarak boyutlanır.  
Statik dizilere göre daha esnek ve güvenlidir.

---

## ❓ Zaman ve bellek karmaşıklığı nedir?
- **Zaman karmaşıklığı**: `O(n log n)` (her durumda)
- **Bellek karmaşıklığı**: `O(1)` (ekstra dizi kullanılmaz)

---

## ❓ Hangi durumlarda Heap Sort tercih edilmeli?
- Belirli veya sabit bellek kısıtı varsa
- En kötü durumda bile dengeli performans gerekiyorsa
- Ekstra dizi kullanılmadan sıralama yapılması isteniyorsa

---

## ❓ Kod hangi veri türleri ile çalışır?
Bu örnekte sadece `int` (tam sayılar) ile çalışmaktadır.  
Genişletmek için `float`, `double` veya `template` kullanılabilir.

---

## ❓ Heap Sort mu, Quick Sort mu?
| Kriter        | Heap Sort        | Quick Sort       |
|---------------|------------------|------------------|
| En kötü durum | O(n log n)       | O(n²)            |
| Ortalama      | O(n log n)       | O(n log n)       |
| Bellek        | O(1)             | O(log n) stack   |
| Hız (pratikte)| Orta             | Genellikle daha hızlı |

---

## ❓ Kodda neler geliştirilebilir?
- `heapify` fonksiyonu iteratif hale getirilebilir
- İngilizce versiyon ayrı dosyada sunulabilir
- Geniş veri setleri için test senaryoları eklenebilir
- Kullanıcı arayüzü ve görselleştirme eklenebilir

---

## 🛠 Geri Bildirim
Her türlü öneri, düzeltme veya katkı için `issues` kısmından bizimle iletişime geçebilirsiniz. 😊