//5. Элементы строк матрицы n*m, не содержащих нулевых элементов, заменить нулевыми элементами
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
const int D1=20,
          D2=20;
int main () {
    int a[D1][D2],
        n,
        m;
    bool flag;
    cout << "Enter n, m " << endl;
    cin >> n >> m;

    srand(time(NULL));

    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            a[i][j]=rand()%5;
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for ( int i=0; i<n; i++ ) {
        flag = false;
        for ( int j=0; j<m; j++ ) {
            if ( a[i][j]==0 ) flag=true;
        }
        if ( !flag ) {
            for ( int j=0; j<m; j++ ) {
                a[i][j]=0;
            }
        }
    }
    cout << endl;
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
