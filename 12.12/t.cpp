#include <iostream>
#include <cmath>
using namespace std;
int toBinary (int n) {
    int a[100];
    int res=0,
        remainder,
        i=0;
    while (n) {
        remainder = n % 2;
        a[i]=remainder;
        n /= 2;
        i++;
    }
    for ( int k=0; k<i; k++ ) {
        res += a[k] * pow(10, k); 
    }
    return res;
}
int main () {
    cout << "Enter two numbers: " << endl;
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "a = " << toBinary(a) << endl;
    cout << "b = " << toBinary(b) << endl;
    cout << "a&b=" << toBinary(a&b) << endl;
    cout << "a|b=" << toBinary(a|b) << endl;
    cout << "a^b=" << toBinary(a^b) << endl;
}
