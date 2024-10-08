#include <iostream>

using namespace std ;

int main()
{
    string sehir="istanbul" ;
    int derece = 25;
    
    cout<<"bu hafta "<< sehir <<" sehrinde termometreler "<<derece<<"i gosterecek\n";
    derece=32 ;
    cout<<"ama sonraki hafta "<<sehir<<" sehrinde ciddi bir artis yasanarak "<<derece<<" olucak\n";
    sehir="rize";
    derece=13;
    cout<<"havalar karadeniz bolgesindeki "<<sehir<<" sehrinde"<<derece<<"tur\n";


    return 0;
}