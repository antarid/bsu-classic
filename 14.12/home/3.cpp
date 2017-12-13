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
        m,
        b[D2],
        result[D2];
    cout << "Enter n, m " << endl;
    cin >> n >> m;
    srand(time(NULL));
    cout << "The matrix: \n";
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            a[i][j]=rand()%5+1;
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Vector\n";
    for ( int i=0; i<m; i++ ) {
        b[i]=rand()%5+1;
        cout.width(4);
        cout << b[i] << endl;
    }
    cout << endl;
    cout << "The result: \n";
    for ( int i=0; i<n; i++ ) {
        int res = 0;
        for ( int j=0; j<m; j++ ) {
            res += a[i][j]*b[j];
        }
        result[i]=res;
        cout.width(4);
        cout << result[i] << endl; 
    }
    cout << endl;
}
