//Удалить в каждом слове, длина которого четная, заданную букву
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
    bool flag;
    int length = strlen(a);
    for ( int i=0; i<length; i++ ) {
        if ( a[i]==letter ) {
            int start=i,
                end=i;
            while(a[start]!=' ' && start>=0){
                start--;
            }
            while(a[end]!=' ' && end<length){
                end++;
            }
            start++; end--;
            if ( (end-start+1)%2==0 ) {
                for ( int k=start; k<=end; k++ ) {
                    if ( a[k]==letter ) {
                        length--;
                        for ( int j=k; j<length; j++ ) {
                            a[j]=a[j+1];
                        }
                        end--;
                        k--;
                    }
                }
            }
        }
    }
    for ( int i=0; i<length; i++ ) {
        cout << a[i];
    }
    cout << endl;
}

