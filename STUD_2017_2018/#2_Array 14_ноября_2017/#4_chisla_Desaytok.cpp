// ������ ������ �����. ���������� �� ���� �������� �������,
// ������� ����� � ����� ������� ��������. ��������� if � swich
// �� ������������. ����� < 100.
#include <iostream>
using namespace std;
const int DIM = 50;
int main(){
  int a[DIM], b[10];
  int i, k, n;
  do{
    cout<<" vvedi n: ";  cin>>n;
  }while (n == 0 || n < 0);
  cout<<"n = "<<n<<endl;
  for(i = 0; i < 10; i++)
       b[i] = 0;
  cout<<" vvedi massiv: "<<endl; 
  for(i = 0; i < n; i++)
        cin>>a[i];
  for(i = 0; i < n; i++){
        k = a[i] / 10;   b[k]++;
  }
 for(i = 0; i < 10; i++)
        cout<<"chisel v "<<i+1<<" desyatke "<<b[i]<<endl;
 system ("pause");
}