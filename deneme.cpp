#include <iostream>
#include <string>
using namespace std;
class Basketbolcu
{
public:
string ad_soyad;
int forma_no;
int basket_sayisi;
Basketbolcu(string p_ad_soyad, int p_forma_no, int p_basket_sayisi){
 ad_soyad = p_ad_soyad;
 forma_no = p_forma_no;
 basket_sayisi = p_basket_sayisi;
}
};
int main()
{
Basketbolcu p1("Muhammed Ilhan METE", 24 , 21);
Basketbolcu p2("Erdem CANKAYA", 93, 15);
cout <<"Ad: "<< p1.ad_soyad << "\t Forma No: " << p1.forma_no << "\t Basket Sayisi: " << p1.basket_sayisi << "\n";
cout <<"Ad: "<< p2.ad_soyad << "\t Forma No: " << p2.forma_no << "\t Basket Sayisi: " << p2.basket_sayisi << "\n";
return 0;
}
