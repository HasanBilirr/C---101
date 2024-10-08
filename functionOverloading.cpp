#include <iostream>

using namespace std ;

void hataKodu ()
{
    cout <<"hatli bir program !"<< endl ;
}
void hataKodu (int hatakodu)
{
    cout<<"hatali islem , hata kodu : " << hatakodu << endl ;
}   
void hataKodu (string message)
{
    cout << message << endl ;
}
void hataKodu (int hatakodu1 , int hatakodu2)
{
    cout <<"hatali islem , hata kodlari :" << hatakodu1 << " and " << hatakodu2 << endl ;
}

int main()
{
    hataKodu () ;
    hataKodu (404);
    hataKodu ("error in program");
    hataKodu (404 , 408);

    return 0;
}