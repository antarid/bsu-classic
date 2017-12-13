// Определить, совпадает ли строка с введённым числом.
// Пробелы не учитывать.
#include <iostream>
#include <string.h>
using namespace std;
const int M = 50;
int main(){
    char str[M];
    int x;
    cout<<"vvedite stroku: ";    gets(str);
    int  n = strlen(str);               		 	  //длина строки
    cout<<"vvedite chislo: "<<endl;    cin>>x;
    bool f = 1;
    while(n){
        n--;
        if(str[n] == ' ') continue;
        if(str[n] == (48 + (x % 10))) x = x / 10;
        else {f = 0;  break;}
    }
    if(f == 1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    system("pause");
}
