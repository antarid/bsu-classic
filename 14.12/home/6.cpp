#include <iostream>
using namespace std;
int main () {
    int n,
        digit;
    cin >> n;
    cout << "n (hex) = " << hex << n << endl;
    bool flag = false;
    for ( int k=268435456; k>=1; k /= 16 ) {
        digit = (n/k)%16;
        if ( digit!=0 ) flag = true;
        if ( flag ) {
            cout << digit << " ";
        }
    }
    cout << endl;
}
