//Визуальные битовые операции
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
void toBinary (unsigned int n) {
    int a[32];
    for ( int i=0, k=31; i<32; i++, k-- ) {
        a[i] = (n>>k)&1;
    }
    for ( int i=0; i<32; i++ ) {
        cout << a[i];
    }
    cout << endl;
}
int main () {
    srand(time(NULL));
    int a = rand();
    int b = rand();
    cout << "a = " << a << endl << "b = " << b << endl; 
    cout << "---------------------------------------" << endl;
    cout << "a(2) = ";
    toBinary(a);
    cout << "b(2) = ";
    toBinary(b);
    cout << "a & b= ";
    toBinary(a&b);
    cout << "---------------------------------------" << endl;
    cout << "a(2) = ";
    toBinary(a);
    cout << "b(2) = ";
    toBinary(b);
    cout << "a | b= ";
    toBinary(a|b);
    cout << "---------------------------------------" << endl;
    cout << "a(2) = ";
    toBinary(a);
    cout << "b(2) = ";
    toBinary(b);
    cout << "a ^ b= ";
    toBinary(a^b);
    cout << "---------------------------------------" << endl;
    cout << "a(2) = ";
    toBinary(a);
    cout << "a>>2 = ";
    toBinary((a>>2));
    cout << "---------------------------------------" << endl;
    cout << "b(2) = ";
    toBinary(b);
    cout << "b<<3 = ";
    toBinary((b<<3));
    cout << "---------------------------------------" << endl;
    cout << "a(16) = " << hex << a << endl;
    cout << "a>>4 =  " << hex << (a>>4) << endl;
    cout << "---------------------------------------" << endl;
    cout << "b(16) = " << hex << b << endl;
    cout << "b>>8 =  " << hex << (b>>8) << endl;
    cout << "---------------------------------------" << endl;
    cout << "b(16) = " << hex << b << endl;
    cout << "b<<4 =  " << hex << (b<<4) << endl;
    cout << "---------------------------------------" << endl;
    cout << "b(16) = " << hex << b << endl;
    cout << "b<<12 = " << hex << (b<<12) << endl;
    cout << "---------------------------------------" << endl;
    return 0;    
}

