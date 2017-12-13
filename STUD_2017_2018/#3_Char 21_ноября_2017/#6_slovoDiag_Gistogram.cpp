// Вывод слова по диагонали.  Гистограмма.
#include <iostream>
using namespace std;
const int M = 50;
 int main(){
 char str[M];
 cout<<"Vvedi stroku: ";     gets(str);
 cout<<"isxodnaya stroka: "<<str<<endl;
 for(int i = 0; str[i]; i++){
    for(int j = 0; j < i; j++)
       cout<<' ';
    cout<<str[i]<<endl;
 }
 cout<<endl;
 
 // Гистограмма
 cout<<"Vvedi slova cherez probel: ";	gets(str);
 cout<<"isxodnaya stroka: "<<str<<endl;
 for(int i = 0; str[i]; i++)
     if(str[i] != ' ')   cout<<'*'; 
     else cout<<endl;
 cout<<endl;
 system("pause");
}