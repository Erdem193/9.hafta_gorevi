#include <iostream>
using namespace std;
class Nokta{
 int x,y;
 public:
 void git(int, int);
 void goster();
 void sifir_mi();
};
void Nokta::git(int yeni_x, int yeni_y)
{
 x = yeni_x;
 y = yeni_y;
}
void Nokta::goster()
{
 cout << "X noktasi: " << x << "\t Y noktasi: " << y << endl;
}
void Nokta::sifir_mi()
{
 if ((x == 0) && (y == 0))
 cout << "Noktaniz Su Anda Sifir noktasindadir." << endl;
 else
 cout << "Noktaniz Su Anda Sifir Noktasinda Degildir." << endl;
}
int main() {
 Nokta n1,n2;
 n1.git(13,45);
 n1.goster();
 n1.sifir_mi();
 n2.git(0,0);
 n2.goster();
 n2.sifir_mi();
 return 0;
}
