#include <iostream>

using namespace std ;

int main()
{
    int sifre = 1234 ;
    int input ;
    
    cout <<"lutfen sifreyi girniz \n";
    cin>> input ;
    
    do
    {
       cout <<"girdiginiz sifre yanlis\ntekrar deneyiniz"; /* code */
       cin >> input ;
    } while (sifre!=input);

    cout<<"\nsisteme girsiniz basarili";
    
    
    
    
    
    return 0;
}