//2. Дана матрица n * m. Удалить строку с максимальным кол-вом нулевых элементов.
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
        zeroCounter,
        zeroMax=0,
        index;
    cout << "Enter n, m " << endl;
    cin >> n >> m;

    srand(time(NULL));

    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            a[i][j]=rand()%5;
        }
    }
    for ( int i=0; i<n; i++ ) {
        zeroCounter=0;
        for ( int j=0; j<m; j++ ) {
            if ( a[i][j] == 0 ) zeroCounter++;
        }
        if ( zeroCounter > zeroMax ) {
            index = i;
            zeroMax = zeroCounter;
        }
    }
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            cout.width(4);
            cout << a[i][j];
        }
        if ( i == index ) cout << " здесь больше всего нулей";
        cout << endl;
    }
    for ( int i=index; i<n-1; i++ ) {
        for ( int j=0; j<m; j++ ) {
            a[i][j]=a[i+1][j];
        }
    }
    cout << endl;
    for ( int i=0; i<n-1; i++ ) {
        for ( int j=0; j<m; j++ ) {
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
