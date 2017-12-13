// В матрице A(n, m) удалить строку с первым максимальным элементом,
// подтянув все остальные строки
#include <iostream>
#include <stdlib.h>
using namespace std;
const int D1 = 20, D2 = 20;
int main(){
 int a[D1][D1],  n, m, k, max;
 cout<<"Vvedi n, m: ";  cin>>n>>m;
 srand(n + m);
// cout << "\n\tVvedi matrix\n";
 for(int i = 0; i < n; i++)
  for(int j = 0; j < m; j++){
//   cin>>a[i][j];
    a[i][j] = rand() % 15 - 5;
  }
 cout << "\n\tVivod matrix\n";
 for(int i = 0;  i < n; i++)  {
   for(int j = 0; j < m; j++){
      cout.width(5);
      cout << a[i][j] << ' ';
  }
  cout<<endl;
 }
 
// находим max элемент и номер строки
 max = a[0][0];  k = 0;
 for(int i = 0; i < n; i++)
   for(int j = 0; j < m; j++)
      if (a[i][j ] > max){max = a[i][j]; k = i;}
 cout<<"max= "<<max<<" k = "<<k<<endl;

// удаляем строку с максимальным элементом
// и подтягиваем все остальные строки
  for(int i = k; i < n-1; i++)
    for(int j = 0; j < m; j++)
        a[i][j] = a[i+1][j];

  cout<<"\n\tRezalt"<<endl;
  for(int i = 0; i < n-1; i++) {
   for(int j = 0; j < m; j++){
      cout.width(5); 
      cout<<a[i][j]<<' ';
   }
   cout<<endl;
  }
 system("pause");
}



