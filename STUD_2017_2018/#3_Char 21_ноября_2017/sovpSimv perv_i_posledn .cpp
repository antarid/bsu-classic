// Найти и вывести на экран все слова строки,
// в которых первый и последний символы совпадают. 
#include <iostream>
//#include <stdlib.h>
using namespace std;
 const int D = 50;
int main(){
   char str[D];
   cout<<"Vvedi stroku: ";    	 gets (str);
   int k = 0, len;
   len = strlen(str);
  for(int i = 0; i <= len; i++)
       if ((str[i] != ' ') && (str[i] != 0)) k++;
       else {
           if (str[i - k] == str[i -1]) {
	 for (int j = i - k; j < i; j++)
                        cout<<str[j];
	 cout<<endl;
           }
           k = 0;
       }
 system("pause");
}
