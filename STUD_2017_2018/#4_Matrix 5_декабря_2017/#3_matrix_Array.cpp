// Из  матрицы A(n, n) сформировать массив B(n*n) .
#include<iostream>
using namespace std;
const int D = 20;
const int D1 = (D * D);
int main(){
 int b[D1], a[D][D];
int n,  k;
 cout << "Vvedi n : ";  cin >> n;
 srand(n);
 for(int i = 0; i < n; i++)
   for(int j = 0; j < n; j++)
     a[i][j] = rand() % 15 - 9;
/*cout<<"Vvedi matrix "<<endl;
 for(int i = 0; i < n; i++)
   for(int j = 0; j < n; j++)
        cin>>a[i][j];
*/  
 cout<<"Icxodni massiv"<<endl;
 for (int i = 0; i < n; i++){
   for (int j = 0; j < n; j++){
       cout.width(4);
       cout<<a[i][j]<<' ';
    }
    cout<<endl;
 }
 k = 0;
 for(int i = 0; i < n; i++)
  for(int j = 0; j < = i ; j++){
     b[k] = a[i][j];  
      k++;
 }
 cout<<"Rezult"<<endl;
  for (int i = 0; i < k; i++)
       cout<<b[i]<<' ';
  cout<<endl;
  system("pause");
}

