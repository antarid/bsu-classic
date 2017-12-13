// ¬ строке слова разделены любым количеством пробелов.
// ќпределить, €вл€етс€ ли она палиндромом.
#include <iostream>
#include <string.h>
using namespace std;
int main(){
 char str[20];   int j, i;  bool flag;
 i = 0; flag = true;
 cout<<"Vvedi stroku: ";      gets(str);
 cout<<"isxodnaya stroka: "<<str<<endl;
 j = strlen(str);
 cout<<" len = "<<j<<endl;
 j--;
 while(i < j){
   if(str[i] == ' '){i++; continue;}
   if(str[j] == ' '){j--; continue;}
   if(str[i] != str[j]){flag = false; break;}
   i++;  j--;
 }
 if(flag)cout<<"YES"; else cout<<"NO";
 cout<<endl;
 system("pause");
}