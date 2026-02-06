#include <iostream>

#include <iomanip>

#include <limits>

#include <cstdlib>

#include <ctime>

#include <string>

#include <cmath>

using namespace std;

// Öğrenci yapısını oluştur .

struct Ogrenci {

string isim;

string soyisim;

double kisaSinavNotu2;

double vizeAğırlık;

double kisaSinavAğırlık;

double odevAğırlık;

double vizeNotu;

double kisaSinavNotu;

double finalNotu;

double odevNotu;

double odevNotu2;

double genelNot;

char harfNotu;

double odevAğırlık2;

double kisaSinavAğırlık2;

double yıliçiNot;

double yıliçiNotetkisi;

double finalNotuetkisi;

};

// standart sapma fonksiyonunu çağır.

double standartSapmaHesapla(Ogrenci ogrenciler[], int n, double ortalama) {

double toplamKareFark = 0.0;

for (int i = 0; i < n; ++i) {

double fark = ogrenciler[i].genelNot - ortalama;

toplamKareFark += pow(fark, 2);

}

double varyans = toplamKareFark / n;

double standartSapma = sqrt(varyans);

return standartSapma;

}

int main()

{

setlocale(LC_ALL, "Turkish");

double eb = INT_MIN; // en büyük genel notu

double ek = INT_MAX; // en küçük genel notu

// dışarıdan öğrenci sayısı iste 0-100

int n;

do {

cout << "Sinifin ogrenci sayisini giriniz (0-100): ";

cin >> n;

if (n < 0 || n > 100) {

cout << "Hata: Ogrenci sayisi 0 ile 100 arasinda olmalidir. Lutfen tekrar girin.\n";

}

} while (n < 0 || n > 100);

// Ağırlıkların kullanıcı tarafından belirlenmesi

double a, b, d, e, f, g, h, j, k, l;

do {

cout << "Vize Agirligi (0-1): ";

cin >> a;

cout << "Kisa Sinav Agirligi (0-1): ";

cin >> b;

cout << "Odev Agirligi (0-1): ";

cin >> d;

cout << "Odev Agirligi 2 (0-1): ";

cin >> f;

cout << "Kisa Sinav Agirligi 2 (0-1): ";

cin >> g;

cout << "Yıliçi notunun genel nota etkisi giriniz ( 0-1 ) : ";

cin >> h;

cout << "Final notunun genel nota etkisini giriniz ( 0-1 ) : ";

cin >> j;

e = j + h;

k = a + b + +d + g + f;

do {

// toplam yıliçi ağırlıkları 1 olmadığını kontrol et.

if (k != 1) {

cout << "Hata: Toplam yıl içi ağırlıklar 1 olmalidir. Lutfen tekrar girin.\n";

}

} while (k != 1.0);

// Toplam ağırlıkların 1 olup olmadığını kontrol et

if (e != 1.0) {

cout << "Hata: Toplam ağırlıklar 1 olmalidir. Lutfen tekrar girin.\n";

}

} while (e != 1.0);

// Ogrenci dizisini oluştur

Ogrenci* ogrenciler = new Ogrenci[n];

// Rastgele isim ve soyisimler oluştur.

string isimler[] = { "ismail","Hüseyin","Selman","Hilmi","Ali", "Ayse", "Mehmet", "Zeynep", "Can", "Elif", "Ahmet", "Ece", "Burak", "Selma", "Kamil"};

string soyisimler[] = { "Yilmaz", "Demir", "Kaya", "Aydin", "Cetin", "Koc", "Ozturk", "Yildirim", "Acar", "Turan","Kaya", "Özdemir","Kaymaz","Çoban"};

// Rastgele notlar oluştur

for (int i = 0; i < n; ++i) {

// Bilgisayar tarafından rastgele bir isim ve soyisim seç

ogrenciler[i].isim = isimler[rand() % (sizeof(isimler) / sizeof(isimler[0]))];

ogrenciler[i].soyisim = soyisimler[rand() % (sizeof(soyisimler) / sizeof(soyisimler[0]))];

// Rastgele notları ataması için yazdım

// % 20 si yerine 0 - 1 arasında oran verdim mesela %20 için 0.2 dedim.

double rastgele = (rand() % 101) / 100.0; // 0 ile 1 arasında rastgele bir sayı

if (rastgele < 0.2) {

// %20'si 80 ile 100 arası

ogrenciler[i].vizeNotu = rand() % 21 + 80;

}

else if (rastgele < 0.7) {

// %50'si 50 ile 80 arası

ogrenciler[i].vizeNotu = rand() % 31 + 50;

}

else {

// %30'u 0 ile 50 arası

ogrenciler[i].vizeNotu = rand() % 51;

} // %20'si 80 ile 100 arası

rastgele = (rand() % 101) / 100.0; // 0 ile 1 arasında rastgele bir sayı

if (rastgele < 0.2) {

// %20'si 80 ile 100 arası

ogrenciler[i].odevNotu = rand() % 21 + 80;

}

else if (rastgele < 0.7) {

// %50'si 50 ile 80 arası

ogrenciler[i].odevNotu = rand() % 31 + 50;

}

else {

// %30'u 0 ile 50 arası

ogrenciler[i].odevNotu = rand() % 51;

}

rastgele = (rand() % 101) / 100.0; // 0 ile 1 arasında rastgele bir sayı

if (rastgele < 0.2) {

// %20'si 80 ile 100 arası

ogrenciler[i].kisaSinavNotu = rand() % 21 + 80;

}

else if (rastgele < 0.7) {

// %50'si 50 ile 80 arası

ogrenciler[i].kisaSinavNotu = rand() % 31 + 50;

}

else {

// %30'u 0 ile 50 arası

ogrenciler[i].kisaSinavNotu = rand() % 51;

}

rastgele = (rand() % 101) / 100.0; // 0 ile 1 arasında rastgele bir sayı

if (rastgele < 0.2) {

// %20'si 80 ile 100 arası

ogrenciler[i].finalNotu = rand() % 21 + 80;

}

else if (rastgele < 0.7) {

// %50'si 50 ile 80 arası

ogrenciler[i].finalNotu = rand() % 31 + 50;

}

else {

// %30'u 0 ile 50 arası

ogrenciler[i].finalNotu = rand() % 51;

}

rastgele = (rand() % 101) / 100.0; // 0 ile 1 arasında rastgele bir sayı

if (rastgele < 0.2) {

// %20'si 80 ile 100 arası

ogrenciler[i].odevNotu2 = rand() % 21 + 80;

}

else if (rastgele < 0.7) {

// %50'si 50 ile 80 arası

ogrenciler[i].odevNotu2 = rand() % 31 + 50;

}

else {

// %30'u 0 ile 50 arası

ogrenciler[i].odevNotu2 = rand() % 51;

}

rastgele = (rand() % 101) / 100.0; // 0 ile 1 arasında rastgele bir sayı

if (rastgele < 0.2) {

// %20'si 80 ile 100 arası

ogrenciler[i].kisaSinavNotu2 = rand() % 21 + 80;

}

else if (rastgele < 0.7) {

// %50'si 50 ile 80 arası

ogrenciler[i].kisaSinavNotu2 = rand() % 31 + 50;

}

else {

// %30'u 0 ile 50 arası

ogrenciler[i].kisaSinavNotu2 = rand() % 51;

}

// Verilen notları ekrana yazdır

cout << "Isim: " << ogrenciler[i].isim << " " << ogrenciler[i].soyisim << endl;

cout << "Vize Notu: " << ogrenciler[i].vizeNotu << endl;

cout << "Odev Notu: " << ogrenciler[i].odevNotu << endl;

cout << "Odev Notu2: " << ogrenciler[i].odevNotu2 << endl;

cout << "Kisa Sinav Notu: " << ogrenciler[i].kisaSinavNotu << endl;

cout << "Kisa Sinav Notu2 : " << ogrenciler[i].kisaSinavNotu2 << endl;

cout << "Final Notu: " << ogrenciler[i].finalNotu << endl;

cout << "---------------------------------------" << endl;

}

// Öğrenci notlarını ve genel notlarını hesapla

for (int i = 0; i < n; ++i) {

ogrenciler[i].yıliçiNot = ogrenciler[i].vizeNotu * a + ogrenciler[i].odevNotu2 * f + ogrenciler[i].kisaSinavNotu2 * g +

ogrenciler[i].kisaSinavNotu * b + ogrenciler[i].odevNotu * d;

ogrenciler[i].genelNot = ogrenciler[i].yıliçiNot * h + ogrenciler[i].finalNotu * j;

}

// genel notlarını ekrana yazdır

for (int i = 0; i < n; ++i) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << " Genel Notu:" << setw(10) << ogrenciler[i].genelNot << endl;

cout << "-----------------------------------------------------------" << endl;

double genelOrtalama = 0.0;

for (int i = 0; i < n; ++i) {

genelOrtalama += ogrenciler[i].genelNot;

}

genelOrtalama /= n;

// standart sapma fonksiyonunu tanımla .

// En büyük ve en küçük genel notları güncelle

if (ogrenciler[i].genelNot > eb) {

eb = ogrenciler[i].genelNot;

}

if (ogrenciler[i].genelNot < ek) {

ek = ogrenciler[i].genelNot;

}

}

// En büyük ve en küçük genel notları güncelle

// eğer en büyük nottan büyük not var ise o en büyük not oluyor.

// eğer en küçük nottan küçük not var ise o en küçük not oluyor.

cout << "En Buyuk Genel Not: " << eb << endl;

cout << "-----------------------------------------------------------" << endl;

cout << "En Kucuk Genel Not: " << ek << endl;

cout << "-----------------------------------------------------------" << endl;

// Genel not ortalamasını hesapla ve yazdır

double genelOrtalama = 0.0;

for (int i = 0; i < n; ++i) {

genelOrtalama += ogrenciler[i].genelNot;

}

genelOrtalama /= n;

cout << "Gecme Notu Ortalamasi: " << genelOrtalama << endl;

cout << "-----------------------------------------------------------" << endl;

// standart sapma yı yazdır .

double standartSapma = standartSapmaHesapla(ogrenciler, n, genelOrtalama);

cout << "Standart Sapma: " << standartSapma << endl;

cout << "--------------------------------------------" << endl;

// her bir öğrencinin harf notunu yazdır.

// hangi harften kaç öğrenci aldığını yazdır

do {

int a = 0; // a , b,c,d,e,f,g,h,k bunkarın hepsi bir harf notunun sayacını temsil ediyor.

int b = 0;

int c = 0;

int d = 0;

int e = 0;

int f = 0;

int g = 0;

int h = 0;

int k = 0;

for (int i = 0; i < n; ++i) {

if (ogrenciler[i].genelNot <= 100 && ogrenciler[i].genelNot >= 90) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "AA" << endl;

cout << "-----------------------------------------------------------" << endl;

a++;

}

else if (ogrenciler[i].genelNot < 90 && ogrenciler[i].genelNot >= 85) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "BA" << endl; cout << "-----------------------------------------------------------" << endl;

b++;

}

else if (ogrenciler[i].genelNot < 85 && ogrenciler[i].genelNot >= 80) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "BB" << endl; cout << "-----------------------------------------------------------" << endl;

c++;

}

else if (ogrenciler[i].genelNot < 80 && ogrenciler[i].genelNot >= 75) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "CB" << endl; cout << "-----------------------------------------------------------" << endl;

d++;

}

else if (ogrenciler[i].genelNot < 75 && ogrenciler[i].genelNot >= 65) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "CC" << endl; cout << "-----------------------------------------------------------" << endl;

e++;

}

else if (ogrenciler[i].genelNot < 65 && ogrenciler[i].genelNot >= 58) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "DC" << endl; cout << "-----------------------------------------------------------" << endl;

f++;

}

else if (ogrenciler[i].genelNot < 58 && ogrenciler[i].genelNot >= 50) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "DD" << endl; cout << "-----------------------------------------------------------" << endl;

g++;

}

else if (ogrenciler[i].genelNot < 50 && ogrenciler[i].genelNot >= 40) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "FD" << endl; cout << "-----------------------------------------------------------" << endl;

h++;

}

else if (ogrenciler[i].genelNot < 40 && ogrenciler[i].genelNot >= 0) {

cout << "Ogrenci " << setw(10) << ogrenciler[i].isim << setw(10) << ogrenciler[i].soyisim << setw(10) << "FF" << endl; cout << "-----------------------------------------------------------" << endl;

k++;

}

}

cout << "AA " << setw(10) << a << endl;

cout << "BA " << setw(10) << b << endl;

cout << "BB " << setw(10) << c << endl;

cout << "CB " << setw(10) << d << endl;

cout << "CC " << setw(10) << e << endl;

cout << "DC " << setw(10) << f << endl;

cout << "DD " << setw(10) << g << endl;

cout << "FD " << setw(10) << h << endl;

cout << "FF " << setw(10) << k << endl;

return 0;

} while (n <= 100);

}