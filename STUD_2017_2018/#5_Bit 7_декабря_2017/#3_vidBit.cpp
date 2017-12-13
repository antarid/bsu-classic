// Выделение 15, 14, 11 разрядов, используя битовые операции.
// Нумерация битов слева направо.
#include <iostream>
using namespace std;
int main(){
   short int z = 0x5c;
   cout<<hex<<z<<endl;
   int k1 = z & 1;
   int k2 = (z & 2) >> 1;
   int k3 = (z & 16) >> 4;
  cout<<"k1 = "<<k1<<" k2 = "<<k2<<" k3 = "<<k3<<endl;
  system ("pause");
}