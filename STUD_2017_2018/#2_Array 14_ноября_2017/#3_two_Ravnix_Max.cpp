// ¬ массиве a[N] найти индексы двух одинаковых максимальных элементов.
#include <iostream>
using namespace std;
const int DIM = 50;
int main(){
  int a[DIM];
  int n, ind1, ind2, max;
  bool flag = true;
  while(1){
     system ("cls");
     cout<<"Enter n: ";     cin >>n;
     if (n >= 1 && n <= DIM)break;
     cout<<"Incorrect!!!";
  }
  cout<<endl<<"Vvedi massiv: ";
  for(int i = 0; i < n; i++)
     cin>>a[i];
  for(int i = 0; i < n; i++)
     cout<<a[i]<<' ';
  cout<<endl;
  max = a[0];  ind1 = ind2 = 0;
  for(int i = 1; i < n; i++){
      if (a[i] > max){                      	      // ищем максимальный элемент массива
          max = a[i]; ind1 = i; flag = true;
      }
      else{ 
         if (a[i] == max && flag)           // ищем второй максимальный элемент массива
              {ind2 = i;  flag = false;}
       }
   }
   cout<<endl<<"max = "<<max
        <<endl<<"max ind 1 = "<<ind1<<endl;
   if(flag)
       cout<<" no second max"<<endl;
   else
       cout<<endl<<"max ind 2 = "<<ind2<<endl<<endl;
   system ("pause");
  }
