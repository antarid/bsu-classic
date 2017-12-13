// Ќайти в строке первое слово, начинающеес€ с прописной буквы 'A',
// и определить, сколько в нЄм букв 'c'.
#include <iostream>
using namespace std;
const int M = 50;
int main(){
 char str[M];
 int k = 0; int i = 0;
 cout<<"Vvedi stroku"<<endl;
 gets(str);
 cout<<"isxodnya stroka: "<<str<<endl;
 int l = strlen(str);
 while(str[i] && str[i] != 'A')i++;
 cout<<"i = "<<i<<endl;
 cout<<"*****"<<endl;
 if(i == l){cout<<"no slov s zaglavnoi bukvi A"<<endl; system("pause"); return 0;}
 while(str[i] != ' ' && str[i]){
    if(str[i] == 'c')k++;
    i++;
 }	
 cout<<" k = "<<k<<endl;
 system ("pause");
}