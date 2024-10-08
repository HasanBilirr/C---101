#include <iostream>

using namespace std ;

void diziDegistir (int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i] + 1 ;
    }
}

int main()
{   
    int dizi [] = {24,56,43,78,69,99};
    diziDegistir(dizi,6);

    for(int i=0;i<6;i++)
    {
        cout << dizi[i] << " ";
    }
    return 0;
}