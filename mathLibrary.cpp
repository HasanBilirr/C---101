#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    /*
   int sonuc ,x,y ;
   cout<<"lutfen ussu alinacak olan sayiyi giriniz x:";
   cin>> x ;
   cout<<"simdi ise us icin bir sayi giriniz y:";
   cin>> y ;

   sonuc = pow(x,y); // pow üs alma işlemini yapar 

   cout<<"islemin sonucu:"<< sonuc << endl ;
   */
  
    int sonuc1,sonuc2,sonuc3,sonuc4 ;
    sonuc1 = floor(2.57); // floor = tabana yuvarlama
    
    sonuc2 = ceil(2.23); // ceil = tavana yuvarlama 

    sonuc3 = round(3.67); // round = yakın olana yuvarlama

    sonuc4 = round(4.3);
    cout<<"sonuc:" << sonuc1 << endl ;  
    cout<<"sonuc:" << sonuc2 << endl ;
    cout<<"sonuc:" << sonuc3 << endl ;
    cout<<"sonuc:" << sonuc4 << endl ;
    return 0 ;
}