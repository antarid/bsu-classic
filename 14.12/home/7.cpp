#include <iostream>
using namespace std;
int main () {
    int n,
        digit;
    cin >> n;
    cout << "n(hex) = " << hex << n << endl;
    bool flag = false;
    for ( int k=28; k>=0; k-=4) {
        digit = (n>>k)&15;
        if ( digit!=0 ) flag = true;
        if ( flag ) {
            cout << digit << " ";
        }
    }
    cout << endl;
}
