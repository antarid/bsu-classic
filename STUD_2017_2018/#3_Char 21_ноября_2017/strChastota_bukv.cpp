// В строке определить, сколько раз встретится
// каждая буква латинского алфавита.
#include <iostream>
using namespace std;
const int M = 50;
int main(){
 char str[M];
 int i, k;
 float chast[30], total = 0;     		  //для вывода в виде матрицы
 cout<<"Vvedi stroku bez probelov"<<endl;     gets(str);
 cout<<"stroka = "<<str<<endl;

 for(i = 0; i < 30; i++)
  chast[i] = 0;
 for(i = 0; str[i]; i++){
   if((str[i] >= 'a') && (str[i] <= 'z'))
     chast[(str[i] - 'a')]++;
  else
    if((str[i] >= 'A') && (str[i] <= 'Z'))
    chast[(str[i] - 'A')]++;
  total++;
 }

 for(i = 0; i < 26; i++)
  chast[i] = (chast[i] * 100) / total;

 for(i = 0; i < 6; i++){
  for(int j = 0; j < 5; j++){
    k = 5 * i + j;
    cout.width(6);
//   cout.precision(4);   			//для float,double
   cout<<chast[k]<<' ';
  }
 cout<<endl;
 }
 system("pause");
 }