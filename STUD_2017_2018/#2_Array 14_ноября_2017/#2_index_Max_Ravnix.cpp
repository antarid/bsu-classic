// Определить в массиве максимальную цепочку равных элементов, 
// стоящих подряд, и индексы её начала и конца.  
#include <iostream>
using namespace std;
 const int DIM = 50;
int main(){
 int a[DIM];
 int  n;
 while(true){
   system("cls");
   cout<< "Vvedi n:";  cin >> n;
   if (n > 1 && n <= DIM) break;
   cout<< "Nocorrect n\n";
 }
 cout << "\n\tVvedi isxodni massiv\n";
 for(int i = 0; i < n; i++){
    cin>>a[i];
 }
 for(int i = 0; i < n; i++)
    cout<< a[i]<< ' ';
  cout<<endl;
 int max = 1, k = 1, j;
 int in = 0, ik = 0;
 for(j = 0 ; j < n - 1; j++){
     if(a[j] == a[j+1]) k++;    else k = 1;
     if(k > max){max = k; ik = j + 1; }
 }
 in = ik - max + 1;
 cout<<"max = "<<max<<endl;
 cout<<"in = "<<in<<" ik = "<<ik<<endl;
 system("pause");
}


