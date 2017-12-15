#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main () {
    char str[50], str2[50];
    cout << "Enter the string" << endl;
    gets(str);
    int length = strlen(str),
        k=0;
    for ( int i=0; i<length; i++ ) {
        if ( str[i]!=' ' ) {
            str2[k]=str[i];
            k++;
        }
    }
    k--;
    bool flag=true;
    for ( int i=0; i<=k-1; i++, k-- ) {
        if (str2[i]!=str2[k]) {
            flag = false;
            break;
        }
    }
    cout << flag << endl;
}
