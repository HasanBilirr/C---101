#include <iostream>

using namespace std ;

int main()
{
 int dizi [5] ;
 dizi[0]=12;
 dizi[1]=18;
 dizi[2]=35;
 dizi[3]=44;
 dizi[4]=23;
 // dizi[7]=99;

 // cout << dizi[5] << endl ;

double arr []={ 23.3 , 45.87 , 56 };

string mevsimler []={"ilkbahar","yaz","sonbahar","kis"};

for (int i = 0 ; i<5 ; i++)
{
    cout << dizi [i] << " " ;
}
cout << endl ;   
for (int i = 0 ; i<3 ; i++)
{
    cout << arr[i] << " ";
}   
cout << endl ;
for (int i = 0; i < 4;i++)
{
    cout << mevsimler[i] << " ";
}
cout << endl ;
  
   return 0;
}