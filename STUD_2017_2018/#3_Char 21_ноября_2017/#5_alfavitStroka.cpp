// Вывод алфавита в виде строки ABBCCC...ZZZ...Z.
#include <iostream>
using namespace std;
int main(){
 char s; 
 int k, j;
 k = 1;
 for(s = 'A'; s <= 'Z'; s++){
    for(j = 1; j <= k; j++)
       cout<<s;
    k++;
 }
 cout<<endl;
 system("pause");
}