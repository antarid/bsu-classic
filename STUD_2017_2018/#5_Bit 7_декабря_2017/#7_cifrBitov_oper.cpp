// Тип должен быть unsigned.
// Выделение цифр с использованием битовой арифметики.
// Цифры выводятся в обратном порядке.
#include <iostream>
using namespace std;
int  main(){
     unsigned int n = 555555555;
     cout<<"n_10 = "<<n<<endl;
//   cout.unsetf(ios::dec);
//   cout.setf(ios::hex);
    cout<<hex<<"n_16 = "<<n<<endl;
    int vid = 0xF;
    int cifra;
    for(int i = 1; i <= 8; i++){
      cifra = n & vid;
      cout<<hex<<"n = "<<n<<" cifra = "<<cifra<<' ';
      n = n >> 4;
      cout<<endl;
   }
   cout<<endl;
}

