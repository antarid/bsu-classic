// Вывод алфавита в виде верхнего треугольника.
#include <iostream >
using namespace std;
int main(){
char i, s  = 'A';
 for(int j = 1; j <= 26; j++){
   for(i = 'A'; i <= s; i++)
     cout<<' ';
     for(i = s; i <= 'Z'; i++)
        cout<<i;
    cout<<endl;
    s++;
 }
  system("pause");
}