// Определить, сколько слов в строке начинаются с прописной буквы и длина которых четная
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
const int L = 50;
int main () {
    char a[50];
    cout << "Enter your string\n";
    gets(a);
    int length = strlen(a),
        counter = 0;
    for ( int i=0, k=0; i<length; i++ ) {
        if ( a[i]!=' ' ) k++;
        if ( (a[i+1]==' ' || i+1==length) && k!=0 ) {
            if ( a[i-k+1]>='A' && a[i-k+1]<='Z' && k%2==0 ){ 
                counter++;
                for ( int l=i-k; l<=i; l++ ) {
                    cout << a[l];
                }
                cout << endl;
            }
            k=0;
        }
    }
    cout << "Result = " << counter << endl;
}
