//В 16чном числе посчитать, сколько раз встречается буква А.
#include <iostream>
using namespace std;
int main () {
    int a,
        counter=0;        
    cin >> hex >> a;
    cout << hex << a << endl;
    while ( a ) {
        if ( (a&15)==0xA ) counter++;
        a = a>>4;
    }
    cout << counter << endl;
}
