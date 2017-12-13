// Выделение разрядов
#include <iostream>
using namespace std;
int main(){
 int n = 2;  cout<<"n = "<<n<<endl;
 int k = 1;
 int m;
 m = n & k;
 cout<<"m = "<<m<<endl;
 n = n >> 1;
 m = n & k;
 cout<<"m = "<<m<<endl;
 n = n >> 1;
 m = n & k;
 cout<<"m = "<<m<<endl;
}
