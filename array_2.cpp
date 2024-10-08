#include <iostream>

using namespace std ;

int main()
{
   int arr [2][3] = {{8 , 17 , 25},{22 , 45 , 67}};

 // cout << "deger : " << arr [0][2] ;

 for (int i = 0 ; i<2 ;i++)
 {
    for(int j = 0 ; j<3 ; j++)
    {
        cout <<arr [i][j] << "  " ;
    }
    cout << endl ;
 }



    return 0;
}