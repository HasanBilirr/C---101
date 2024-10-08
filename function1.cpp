#include <iostream>

using namespace std ;

int hesapla(int x)
{
    int sonuc ;
    sonuc= 3 * x + 2;
    return sonuc ;
}

int alanHesapla( int x,int y)
{
    int alan = x*y ;
    return alan ;
}

void kareAlanHesapla(int kenar)
{
   cout <<"karenin alani: " << (kenar*kenar) <<endl ;
}
string adSoyadBirlesim()
{
    string ad , soyad ,adSoyad ;
    cout << "lutfen adinizi giriniz :";
    cin >> ad ;
    cout << "lutfen soyadini girniz :";
    cin >> soyad ;
    adSoyad = ad + " " + soyad ;
    
    return adSoyad ;
}

 
int main()
{
        
    cout << "sonuc : " << alanHesapla(9,5) << endl ;
    cout << "sonuc : " << hesapla(7) << endl ;    
    kareAlanHesapla(5) ;
    cout << adSoyadBirlesim () << endl ;
    
      return 0;
}