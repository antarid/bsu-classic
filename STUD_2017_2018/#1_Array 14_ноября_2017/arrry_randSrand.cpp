// ������������� ������� rand(),  srand(n).
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
 srand(n);                     		 // ��� ��������� ������ ������. �����
 cout << "\n\t 1___Massiv A(n)\n";
 for(int i = 0; i < n; i++)
   a[i] = rand() % 6 + 1;             		  // ����� �� 1 �� 6
 for(int i = 0; i < n; i++)
    cout << a[i] << ' ';
  cout<<endl;  

 cout << "\n\t 2___\n";
 for(int i = 1; i <= 25; i++){       		// ����� �� 5 ��������� � ������
   cout.width(3);
   cout << rand() % 6 + 1;
   if(i % 5 == 0)cout<<endl;
 }
 cout << "\n\t 3___Massiv A(n)\n";
 for(int i = 0; i < n; i++)
   a[i] = rand();                  		 // ����� �� 0 �� RAND_MAX (����������
   cout<<endl;               		 //  	     	           	  �  stdlib)
 for(int i = 0;  i < n; i++)
  cout<< a[i]<< ' ';
 cout<<endl;
 system("pause");
}



