// Выделение 16-х цифр числа в обратном порядке
// с использованием арифметических операций
#include <iostream>
using namespace std;
int  main(){
   int n = 555555555;
   cout<<"n_10 = "<<n<<endl;
 //  cout.unsetf(ios::dec);
 //  cout.setf(ios::hex);
   cout<<hex<<"n_16 = "<<n<<endl;
   int cifra;
   for(int i = 1; i <= 8; i++)   {
     cifra = n % 16;
     cout<<hex<<"n = "<<n<<" cifra = "<<cifra;
     n = n / 16;

     cout<<endl;
   }
   cout<<endl;
  }

