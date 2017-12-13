// Транспонировать матрицу A(n, n).
#include <iostream>
#include <stdlib.h>
using namespace std;
const int D = 20;
int main(){
 int a[D][D],  n,  x;
 while(true){
   system("cls");
   cout << "Vvedi n: ";  cin >> n;
   if (n > 1 && n <= D) break;
   cout<<"Nocorrect n\n"<<endl;
 }
 srand(n);
// cout << "\n\tVvedi matrix\n";
 for(int i = 0; i < n; i++)
  for(int j = 0; j < n; j++){
//   cin>>a[i][j];
    a[i][j] = rand() % 25 - 12;
  }
 cout << "\n\tVivod matrix\n";
 for(int i = 0; i < n; i++) {
   for(int j = 0; j < n; j++){
       cout.width(5);
       cout<< a[i][j]<< ' ';
   }
  cout<<endl;
 }
  for(int i = 0; i < n; i++)
   for(int j = i + 1;  j < n;  j++){
    x = a[i][j];    a[i][j] = a[j][i];    a[j][i] = x;
  }

 cout<< "\n\tRezult matrix\n";
 for(int i = 0; i < n; i++){
   for(int j = 0; j < n; j++){
      cout.width(5);
      cout<< a[i][j]<< ' ';
   }
   cout<<endl;
 }
  system("pause");
 }



