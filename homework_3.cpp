#include <iostream>

using namespace std ;

int sinavNotOrtalama(int notlar[] , int size)
{
 int top=0;
 for( int i = 0 ; i <size ; i++)
 {
    top=top+notlar[i];
 }
 cout << endl ;
 // cout << top << endl ;
 
 int islem = top / size ;
 int sayac = 0 ;
 for (int i = 0 ; i<size ;i ++)
 {
   if (notlar[i]>islem)
   {
      sayac ++ ;
   }
 }
cout << "ortalama :" << islem << endl ;
cout << "ortalama ustu sinav sayisi :" << sayac << endl ;
cout << endl ;
}
 int main() {
    // Dizi tanımlama
    int notlar[] = {85, 78, 90, 66, 88, 72, 95, 80, 84, 77};
    int boyut = sizeof(notlar) / sizeof(notlar[0]); // Dizinin boyutunu hesapla

    // Fonksiyonu çağır ve sonucu ekrana yazdır
    sinavNotOrtalama(notlar, boyut);

    return 0;
}