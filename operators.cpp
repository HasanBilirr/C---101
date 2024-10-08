# include <iostream>
using namespace std ;
/*
== : eşit mi
!= : eşit değil mi
&& : ve 
|| : veya 
! : not-değili !(3<5):false
*/
int main()
{
int sayi1,sayi2 ;
cout <<"1. sayiyi giriniz:";
cin >> sayi1 ;
cout <<"2. sayiyi giriniz:";
cin >> sayi2 ;

if (sayi1>0 && sayi2>0)
{
    cout<<"sayilarinizin hepsi pozitif";
}
else if (sayi1<0 && sayi2<0)
{
    cout<<"sayilarinizin hepsi negatif";
}
else if (sayi1>0 || sayi2>0)
{
    cout<<"sayilarinizin birisi pozitif";
}
else if (sayi1==0 && sayi2==0) 
{
    cout<<"girdiğiniz sayilar 0 ";
}
else
{
    cout<<"girdiginiz sayilardan bir tanesi 0";
}
}