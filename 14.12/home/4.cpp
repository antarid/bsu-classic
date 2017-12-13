//4. Задано три массива. a[n] b[n] c[n] содержащие стороны n треугольников. Определить кол-во треугольников, которые можно построить, и найти их периметры
#include <iostream>
#include <cstdlib>
using namespace std;
const int MAX_LENGTH = 25;

int findMax ( int a, int b, int c ) {
    int max = a;
    if ( b>max ) max = b;
    if ( c>max ) max = c;
    return max;
}
int findMin( int a, int b, int c ) {
    int min = a;
    if ( b<min ) min = b;
    if ( c<min ) min = c;
    return min;
}
int findMiddle( int a, int b, int c ) {
    return a+b+c-findMax( a, b, c ) - findMin(a, b, c);
}
bool triangle ( int a, int b, int c ) {
    return findMax( a, b, c ) < findMin( a, b, c ) + findMiddle( a, b, c );
}

int main () {
    int a[MAX_LENGTH],
        b[MAX_LENGTH],
        c[MAX_LENGTH],
        n,
        counter=0;
    cout << "How many triangle do you have?\n";
    cin >> n;
    cout << "Enter the sides of each triangle\n";
    cout << "---------------------" << endl;
    for ( int i=0; i<n; i++ ){
        cout << i+1 << "-th triangle " << endl;
        cin >> a[i] >> b[i] >> c[i];
        cout << "---------------------" << endl;
    }
    for ( int i=0; i<n; i++ ) {
        cout << i << ") Triangle with sides: " << a[i] << ' ' << b[i] << ' ' << c[i];
        if ( triangle( a[i], b[i], c[i] ) ) {
            cout << " Exists. Perimetr = " << a[i]+b[i]+c[i] << endl;
            counter++;
        }
        else cout << " Doesn't exist" << endl; 
    }
    cout << "Counter = " << counter << endl;
}
