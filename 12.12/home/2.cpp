#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int L = 50;
int main () {
    char a[L],
         letter;
    cout << "Enter your string\n";
    gets(a);
    cout << "What letter are you deleting?\n";
    cin >> letter;
    int length = strlen(a);
    for ( int i=0, k=0; i<length; i++ ) {
        if ( a[i]!=' ' ) k++;
        if ( (a[i+1]==' ' || i+1==length) && k!=0) {
            if ( k%2==0 ) {
                for ( int j=i+1-k; j<=i; j++ ) {
                    if ( a[j]==letter ) {
                        length--;
                        for ( int l=j; l<length; l++ ) {
                            a[l]=a[l+1];
                        }
                        j--;
                    }
                }
            }
            k=0;
        }
    }
    for ( int i=0; i<length; i++ ) {
        cout << a[i];
    }
    cout << endl;
}

