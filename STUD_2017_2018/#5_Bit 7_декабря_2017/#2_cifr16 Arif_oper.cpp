// Вывод цифр 16-го числа,
// используя арифметические операции.
#include <iostream>
using namespace std;
int main(){
int z = 0xA1BF4F;
// int z;
// cout<<"Vvedi Z = 0xF1BF4F: ";
// cin>>hex>>z;                 	       //  вводим 0xA1BF4F
// cout.unsetf(ios::dec);
// cout.setf(ios::hex);
 int z2 = z;
 cout<<hex<<z2<<endl;
  while(z2){
     int z1 = z2 % 16;
     cout<<" z2 = "<<z2<<" " ;
     cout<<" z1= "<<z1<<endl; 
     z2 = z2 / 16;
  }
 system("pause");
}