// Есть ли в массиве последовательность из "k" равных элементов.
#include <iostream>
using namespace std;
 const int DIM = 50;
 int main(){
  int mas[DIM];
  int n, m = 1, k, pr = 0;
  cout<<"vvesti n"<<endl;  cin>>n;
  cout<<"vvesti k"<<endl;  cin>>k;
  cout<<"Vvedi massiv"<<endl;
  for(int i = 0; i < n; i++) cin>>mas[i];
    cout<<"Ishodny massiv: "<<endl;
  for (int i = 0;  i < n; i++)
    cout<<mas[i]<<' ';
  cout<<endl;
  for (int i = 0; i < n -1; i++)  {
      if(mas[i] == mas[i+1]){
         m++;
         if(m == k) {cout<<"Yes"<<endl; pr = 1; break;}
       }
       else m = 1; 
   }
   if(pr == 0) cout<<"No "<<endl;
   system("pause");
  } 

