#include <iostream>
using namespace std ;

int main()
{
    /* 
    bool sicakMi = false ;
    if(sicakMi)
    {
        cout<<"the area is hot";
    }
    else
    {
        cout<<"the area is cold";
    }
     int sicaklik ;
   
   cout <<"odadaki sicaklik degerini girer misniz :";
   cin >> sicaklik ;
   
   if(sicaklik>=35)
   {
    cout<<"ortam sicak";
   } 
   else if (25<=sicaklik<35)
   {
    cout<<"ortam sicakligi normal";
   }
   else if (sicaklik<25)
   {
    cout<<"ortam soguk";
   }

   return 0 ;
} 
   int sicaklik ;
   
   cout <<"odadaki sicaklik degerini girer misniz :";
   cin >> sicaklik ;
   
   if(sicaklik>=35)
   {
    cout<<"ortam sicak";
   } 
   else if (sicaklik >=25 && sicaklik <35)
   {
    cout<<"ortam sicakligi normal";
   }
   else
   {
    cout<<"ortam soguk";
   }
 */
  string kullanici1 ;
  int sifre ;

  cout<<"lutfen kullanici isminizi giriniz:";
  cin>> kullanici1 ;

  if(kullanici1 == "hasan")
  {
    sifre=1234 ;
    cout << "sifrenizi giriniz=";
    cin >> sifre ;
    if(sifre == 1234)
    {
        cout<<"giris basarili";
    }
    else
    {
       cout<<"kullanici adi veya sifreniz hatali\n tekrar deneyiniz";
    }
  }
  else if (kullanici1 == "eray")
  {
    sifre=4321 ;
    cout << "sifrenizi giriniz=";
    cin >> sifre ;

    if(sifre == 4321)
    {
        cout <<"giris basarili";
    }
    else
    {
        cout <<"kullanici adi veya sifreniz hatali\n tekrar deneyiniz";
    }
    return 0 ;
  }
  
   return 0 ;
} 