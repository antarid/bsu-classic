//В строке удалить лишние пробелы
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int L = 100;
int main () {
    char a[L];
    gets(a);
    int length = strlen(a),
        k=0;
    for ( int i=0; i<length; i++ ) {
        if ( a[i]==' ' ) k++;
        else k = 0;
        if ( a[i+1]!=' ' || i+1==length ) {
        }
    }
}
