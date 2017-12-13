// Использование функций rand(),  srand(n).
#include <iostream>
#include <stdlib.h>
using namespace std;
 const int DIM = 50;
int main(){

 int a[DIM];
 int n, i, q;
 bool flag;

 while(true){
   system("cls");
   cout << "Vvedi n:";	  cin >> n;
   if (n > 1 && n < DIM) break;
   cout << "Nocorrect n\n";
 }
 srand(n);                     		 // для получения разных послед. чисел
 cout << "\n\t 1___Massiv A(n)\n";
 for(int i = 0; i < n; i++)
   a[i] = rand() % 6 + 1;             		  // числа от 1 до 6
 for(int i = 0; i < n; i++)
    cout << a[i] << ' ';
  cout<<endl;  

 cout << "\n\t 2___\n";
 for(int i = 1; i <= 25; i++){       		// вывод по 5 элементов в строку
   cout.width(3);
   cout << rand() % 6 + 1;
   if(i % 5 == 0)cout<<endl;
 }
 cout << "\n\t 3___Massiv A(n)\n";
 for(int i = 0; i < n; i++)
   a[i] = rand();                  		 // числа от 0 до RAND_MAX (определена
   cout<<endl;               		 //  	     	           	  в  stdlib)
 for(int i = 0;  i < n; i++)
  cout<< a[i]<< ' ';
 cout<<endl;
 system("pause");
}



