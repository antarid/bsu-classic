// Найти  максимальную длину подстроки, состоящей из звёздочек.
#include <iostream>
using namespace std;
 const int M = 50;
 int main(){
 char str[M]; 
 int max, k;
 cout<<"Vvedi stroku: ";	 gets(str);
 cout<<"isxodnaya stroka: "<<str<<endl;
 max = 0; k = 0;
 for(int i = 0; str[i]; i++)
   if(str[i] == '*'){
      k++;
      if(k > max) max = k;
   }
   else k = 0;
 cout<<"max ZVEZD = "<<max<<endl;  
 system ("pause");
}