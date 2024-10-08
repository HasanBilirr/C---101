#include <iostream>

using namespace std ;

int main()
{
//  for(int i = 0; i<=25;i=i+2)
//    {
//      cout << i << " " ;
//    }

    int x ;
    cout<<"bir sayi giriniz faktoriyel islemi icin : ";
    cin >> x ;

    int top =1 ;

    for(int i=1;i<=x;i++)
    {
        top=i*top ;
    }

    cout<<"islem sonucu : " << top << endl ;
    cout<<"tesekkurler!";

    return 0;
}