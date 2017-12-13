//1. Дана матрица. Поменять местами строки с максимальным кол-вом положительных элементов и отрицательных
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
const int D1=20,
          D2=20;
int main () {
    int a[D1][D2],
        n,
        m,
        counterNegative,
        counterPositive,
        maxNegative=0,
        maxPositive=0,
        indexPositive,
        indexNegative,
        temp;
    cout << "Enter n, m " << endl;
    cin >> n >> m;
    srand(time(NULL));
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            a[i][j]=rand()%10-5;
        }
    }
    cout << endl;
    for ( int i=0; i<n; i++ ) {
        counterPositive=0; counterNegative=0;
        for ( int j=0; j<m; j++ ) {
            if ( a[i][j] > 0 ) {
                counterPositive++;
            }
            if ( a[i][j] < 0 ) {
                counterNegative++;
            }
        }
        if ( counterPositive>maxPositive ) {
            indexPositive = i;
            maxPositive=counterPositive;
        }
        if ( counterNegative>maxNegative ) {
            indexNegative = i;
            maxNegative=counterNegative;
        }
    }
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            cout.width(4);
            cout << a[i][j];
        }
        if (i==indexPositive) cout << " Строка с наибольшим кол-вом полож";
        else if ( i==indexNegative ) cout << " Строка с наибольшим кол-вом отрицательных";
        cout << endl;
    }
    for ( int j=0; j<m; j++ ) {
        temp = a[indexNegative][j];
        a[indexNegative][j] = a[indexPositive][j];
        a[indexPositive][j] = temp;
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
