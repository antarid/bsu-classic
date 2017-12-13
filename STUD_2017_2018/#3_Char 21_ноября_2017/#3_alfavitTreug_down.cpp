// Вывод алфавита в виде нижнего треугольника.
#include <iostream>
using namespace std;
int main(){
 char i; 
 int k, j;
 k = 1;
 for(i = 'A'; i <= 'Z'; i++){
   for(j = 1; j <= k; j++)
     cout<<i;
   cout<<endl;
   k++;
 }
  system("pause");
 }