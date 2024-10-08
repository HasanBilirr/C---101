#include <iostream>

using namespace std ;

int main()
{
    int size ;

cout <<"dizinin boyutunu giriniz\n";
cin >> size ;

    int arr [size];

cout<<"dizinin elemanlarini giriniz : \n";

for(int i = 0 ; i<size;i++)
    {
        cout <<"eleman " << i+1 <<": ";
        cin >> arr [i] ;
    }
cout<<"dizi elemanlari : \n";

for(int i =0;size>i;size--)
    {
        cout << arr[size-1] <<" ";
    }

cout << endl  ;
    return 0;
}