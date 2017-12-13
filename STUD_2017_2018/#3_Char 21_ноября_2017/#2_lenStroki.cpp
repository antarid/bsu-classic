// Длина строки.
#include <iostream>
#include <string.h>
using namespace std;
const int D = 50;
int main(){
  char str[D];
  int k, i;
  cout<<"Vvedi stroku: ";  gets(str);
  cout<<"stroka = "<<str<<endl;
  for(i = 0; str[i]; i++);
     cout<<"length = "<<i<<endl;
  k = strlen(str);
  cout<<"length = "<<k<<endl;
  system("pause");
}