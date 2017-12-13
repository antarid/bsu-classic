//В одномерном массиве определить сколько простых чисел
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool isPrime(int n) {
    if ( n==1) return false;
    for ( int i=2; i<n; i++ ) {
        if (n%i==0) return false;
    }
    return true;
}
const int L = 50;
int main () {
    srand(time(0));
    int a[L];
    cout << "Enter your array length\n"; 
    int n,
        counter=0;
    cin >> n;
    cout << "Enter the array elements\n";
    for ( int i=0; i<n; i++ ) {
        cin >> a[i];
    }
    for ( int i=0; i<n; i++ ) {
        cout << a[i] << " ";
        if (isPrime(a[i])) counter++;
    }
    cout << endl << "Result = " << counter << endl;
}
