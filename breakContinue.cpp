#include <iostream>

using namespace std ;

int main()
{
   /* 
    int sayi ;
    cout<<"bana bir sayi giriniz\n";
    cin >> sayi ;
    for(int x =0;x<=sayi ; x++)
    {
         if(x==(sayi-2))
            {
             break ;
            }   
         cout<< x << " " ;

    }
    cout << endl ;  
   */ 

 int sayi ;
      cout<<"bana bir sayi giriniz\n";
      cin >> sayi ;
     for(int x =0;x<=sayi ; x++)
    {
         if(x==(sayi-2))
            {
            continue ;
            }   
         cout<< x << " " ;

    }
    cout << endl ;  


    return 0;
}