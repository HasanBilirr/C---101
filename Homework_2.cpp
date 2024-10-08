#include <iostream>

using namespace std ;

int main()
{   
    int number ;
    cout <<"enter a number , please \n";
    cin >> number ;

    if (number > 0)
    {
        int top=0 ;
        for(int i = 0 ;i<=number ; i++)
        {
            top=i + top ;
           
        }
         cout << "result : " << top << endl ;
    }
    else 
    {
        cout <<"dont do it again , try others numbers";
    }
       
    return 0;
}