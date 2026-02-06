# 📊 Student Grading Simulation & Analysis System

![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Simulation](https://img.shields.io/badge/Type-Console%20Simulation-green?style=for-the-badge)
![Statistics](https://img.shields.io/badge/Feature-Statistical%20Analysis-orange?style=for-the-badge)

## 📝 Proje Hakkında (About)
Bu proje, C++ programlama dili kullanılarak geliştirilmiş bir **Öğrenci Notlandırma ve İstatistik Analiz Sistemidir**.

Uygulama, kullanıcı tarafından belirlenen sınav ağırlıklarına (Vize, Kısa Sınav, Ödev, Final vb.) göre bir sınıf ortamı simüle eder. Öğrenci isimleri ve notları rastgele (random) oluşturulur, ardından sınıfın genel başarısı, standart sapması ve harf notu dağılımı hesaplanarak raporlanır.

## ✨ Özellikler (Features)

* **Dinamik Ağırlıklandırma:** Kullanıcı, sınavların ve ödevlerin yıl sonu notuna etkisini (yüzdelik dilim) kendi belirler.
* **Rastgele Veri Üretimi:** Öğrenci isimleri, soyisimleri ve sınav notları belirli algoritmalarla rastgele üretilir; her çalıştırıldığında farklı bir senaryo oluşur.
* **İstatistiksel Analiz:**
    * Sınıf Ortalaması
    * Standart Sapma Hesaplaması (Standard Deviation)
    * En Yüksek ve En Düşük Not Takibi
* **Harf Notu Dağılımı:** Öğrencilerin başarı durumuna göre (AA, BA, BB... FF) harf notlarının dağılımı listelenir.
* **Türkçe Karakter Desteği:** `setlocale` kullanılarak Türkçe karakter uyumluluğu sağlanmıştır.

## 🛠️ Kullanılan Teknolojiler

* **Dil:** C++
* **Kütüphaneler:** `<iostream>`, `<cmath>` (Matematiksel işlemler), `<cstdlib>` (Random), `<string>`
* **Veri Yapıları:** Structs (Yapılar), Dynamic Arrays (Dinamik Diziler)

## 🚀 Kurulum ve Çalıştırma (Build & Run)

Projeyi derlemek için herhangi bir C++ derleyicisi (GCC, MinGW, Visual Studio) kullanabilirsiniz.

**GCC (Terminal) ile Derleme:**
```bash
g++ main.cpp -o GradingSystem
./GradingSystem
