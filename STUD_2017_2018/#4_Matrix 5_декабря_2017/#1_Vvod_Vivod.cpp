// ����-����� �������.
#include <iostream>
using namespace std;
const int D1 = 20, D2 = 20;
int main(){
   int a[D1][D2];
   int i, j, n, m;
 while(true){
    system("cls");
    cout << "Vvedi n m:";  cin >> n>>m;
    if (n > 0 && n <= D1 && m > 0 && m <= D2) break;
    cout << "Nocorrect n\n";
 }
 srand(n + m);
 for(int i = 0;  i < n;  i++)
   for(int j = 0;  j < m;  j++)
       a[i][j] = rand() % 15 - 6;

 cout << "\n\tVivod matrix\n";
 for(int i = 0; i < n; i++){
   for(int j = 0; j < m; j++){
      cout.width(5);
      cout << a[i][j] << ' ';
   }
   cout<<endl;
 }
 system("pause");
}



