// Длина строки. Для 15-ой версии Studio Vision.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <сstring>
using namespace std;
const int D = 50;
int main(){
  char str[D];
  int k, i;
  cout<<"Vvedi stroku : ";  gets_s(str);
  cout<<"stroka = "<<str<<endl;
  for(i = 0; str[i]; i++);
     cout<<"length = "<<i<<endl;
  k = strlen(str);
  cout<<"length = "<<k<<endl;
  system("pause");
}