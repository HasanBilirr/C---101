#include <iostream>

using namespace std ;

int main()
{
    float fees = 2500 ;

     cout <<"hello membership , fees of this club will be increased by %4 each year for the next six years\n";
     cout << " this chart is for fees :\n" ;
     cout <<"1. year : 2500\n";
     
    for(int i=2; i<=6 ; i++ )
    {
       fees = (fees * 4 /100)+fees ;
       cout<< i << ". year : " << fees << endl ;
    }
  
    return 0;
}