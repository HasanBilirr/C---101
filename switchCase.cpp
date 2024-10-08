#include <iostream>

using namespace std ;

int main()
{
    int gun ;
    cout <<"haftanin gununu sayi olarak giriniz";
    cin>> gun ;

    switch (gun)
    {
        case 1 :
            cout<<"pazartesi\n"; 
        break ;
        case 2 :
            cout<<"sali\n"; 
        break ; 
        case 3 :
            cout<<"carsamba\n"; 
        break ;
        case 4 :
            cout<<"persembe\n"; 
        break ;
        case 5 :
            cout<<"cuma\n"; 
        break ;
        case 6 :
            cout<<"cumartesi\n"; 
        break ;
        case 7 :
            cout<<"pazar\n"; 
        break ;
       default :
            cout<<"1 ile 7 arasinda bir sayi giriniz\n";
    
    }
    
    
    
    
    return 0;
}