// Из  массива B(n * m) сформировать матрицу A(n, m).
#include<iostream>
using namespace std;
const int D1 = 20, D2 = 20;
const int D3 = (D1 * D2);
int main(){
 int a[D1][D2];
 int b[D3];
 int n, m,  k;
 cout << "Vvedi n m: ";  cin >> n>>m;
 srand(n + m);
 k = n * m;
 for(int i = 0;  i < k;  i++)
      b[i] = rand() % 15 - 6;
 
 cout<<"Icxodni massiv: "<<endl;
 for (int i = 0; i < k; i++)
    cout<<b[i]<<' ';
  cout<<endl;

 for(int i = 0; i < n; i++)
   for(int j = 0; j < m; j++){
      k = m * i + j; 
      a[i][j] = b[k]; 
   }

 cout<<"Rezult"<<endl;
 for (int i = 0; i < n; i++){
   for (int j = 0; j < m; j++){
      cout.width(4); 
      cout<<a[i][j]<<' ';
   } 
   cout<<endl;
 }
 system("pause");
}

