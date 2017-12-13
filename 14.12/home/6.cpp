#include <iostream>
using namespace std;
int main () {
    int n,
        temp,
        digit;
    cin >> n;
    cout << "n(hex) = " << hex << n << endl;
    bool flag = false;
    for ( int k=28, i=0; k>=0; k-=4, i++ ) {
        temp = n>>k;
        digit = temp&15;
        if ( digit!=0 ) flag = true;
        if ( flag ) {
            cout << digit << " ";
        }
    }
    cout << endl;
}
