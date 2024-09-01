Bu proje, C++ programlama dili kullanılarak ikili arama ağaçları (binary search trees) oluşturma ve bu ağaçları farklı gezme yöntemleriyle (inorder, preorder, postorder) dolaşma işlemlerini gerçekleştirir.

# Özellikler:

Ağaç Oluşturma: Kullanıcı tarafından girilen değerler, bir ikili arama ağacı yapısı içerisinde sıralı olarak eklenir.
Ağaç Gezme: Ağaç, inorder, preorder ve postorder gezme yöntemleri kullanılarak dolaşılabilir ve elemanları ekrana yazdırılabilir.

# Nasıl Kullanılır:

Derleme: Proje dosyalarını derlemek için uygun bir C++ derleyicisi (g++, clang, vb.) kullanın.
Çalıştırma: Derlenen programı çalıştırın. Program, kullanıcıdan ağaç elemanlarını girmesini isteyecek ve ardından bu elemanları farklı gezme yöntemleriyle ekrana yazdıracaktır.

# Kodun Temel Mantığı:

Ağaç Yapısı: node adında bir yapı, ağaçtaki düğümleri temsil eder. Her düğüm, bir veri alanı, sol ve sağ çocuk işaretçileri içerir.
Ağaç Oluşturma: add fonksiyonu, yeni bir eleman eklemek için rekursif olarak çalışır. Elemanın değeri, mevcut düğümün değerinden küçükse sol alt ağaca, büyükse sağ alt ağaca eklenir.
Ağaç Gezme: inorder, preorder ve postorder fonksiyonları, ağaçtaki düğümleri sırasıyla soldan sağa, yukarıdan aşağıya ve aşağıdan yukarıya gezmek için rekursif olarak çalışır.
