#include <iostream>

using namespace std ;

int main()
{
    int sayi ;
    cout <<"bana bir sayi giriniz\n";
    cin >> sayi ;
    cout << endl ;
    for(int x = 1 ; x <= sayi ; x++)
    {
        for(int i=1;i<=x;i++)
            {
                cout<< x << " " ;
            }
        cout << endl ;
    }
    return 0;
}