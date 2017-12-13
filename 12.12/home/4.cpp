//В матрице определить кол-во строк, элементы которых упорядочены
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int L = 50;
int main () {
    srand(time(0));
    int n, m,
        a[L][L],
        counter=0;
    cout << "Enter n, m\n";
    cin >> n >> m;
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            a[i][j]=rand()%20+1;
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    bool flag = true;
    for ( int i=0; i<n; i++ ) {
        flag = true;
        for ( int j=0; j<m-1; j++ ) {
            if ( a[i][j]>a[i][j+1] ) {
                flag = false;
                break;
            }
        }
        if (flag) counter++;
    }
    cout << "Counter = " << counter << endl;
}
