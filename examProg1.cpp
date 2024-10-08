#include <iostream>

using namespace std ;

int main()
{
    int x,y,z ;

    cout <<"1 tane tam sayi girer misin:";
    cin>> x ;
    cout <<"1 tane tam sayi girer misin:";
    cin>> y  ;
    cout <<"1 tane tam sayi girer misin:";
    cin>> z ;

    if(x<y && x<z)
    {
        cout << x << " en kucuk sayidir";
    } 
    else if(y<x && y<z)
    {
        cout<< y << " en kucuk sayidir";
    }
    else
    {
        cout<< z << " en kucuk sayidir";
    }
    return 0;
}