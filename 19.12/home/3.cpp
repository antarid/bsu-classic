//В строке удалить лишние пробелы
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int MAX_LENGTH = 100;
int main () {
    char a[MAX_LENGTH];
    gets(a);
    int length = strlen(a),
        spaceCounter=0;
    // Удаляем пробелы в начале строки
    int i = 0;
    while ( a[i]==' ' ) {
        spaceCounter++;
        i++;
    }
    if (spaceCounter) {
        length = length - spaceCounter;
        for ( int i=0; i<length; i++ ) {
            a[i] = a[i+spaceCounter];
        }
    }
    spaceCounter=0;
    // Удаляем пробелы в конце строки
    while ( a[length-1]==' ' ) {
        length--;
    }
    // Удаляем лишние пробелы внутри строки
    for ( int i=1; i<length; i++ ) {
        if ( a[i]==' ' ) spaceCounter++;
        else spaceCounter = 0;
        if ( (a[i+1]!=' ' || i+1 == length) && spaceCounter>1 ) {
            length = length - spaceCounter + 1;
            for ( int k = i-spaceCounter+1; k<length; k++ ) {
                a[k] = a[k+spaceCounter-1];
            }
            i = i - spaceCounter+1;
        }
    }
    // Выводим получившуюся строку
    for ( int i=0; i<length; i++ ) {
        cout << a[i];
    }
    return 0;
}
