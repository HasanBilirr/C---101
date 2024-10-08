#include <iostream>

using namespace std ;

int main()
{
    int start,finish ;
    cout <<"baslangic icin 1 sayi girniz\n";
    cin >> start ;
    cout <<"simdi ise programi bitirmek icin bitis sayisini giriniz\n";
    cin >> finish ;

    while (start<=finish)
    {
        int islem ;
        islem = start%7 ;
        
        if(islem==0)
        {
            cout <<"\n7 ile bolunebilen sayilar : " << start << endl ;
        }
     start ++ ;
    }
    cout <<"\n program sonu...";
    return 0;
}