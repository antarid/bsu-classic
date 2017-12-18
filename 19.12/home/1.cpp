// В массиве после первого максимального отсортировать элементы по возрастанию
#include <iostream>
#include <cstdlib>
using namespace std;
const int MAX_LENGTH = 50;
int main () {
    srand(time(NULL));
    int a[MAX_LENGTH],
        maxIndex = 0,
        length;
    cout << "Enter the array length\n"; cin >> length; 
    // Генерируем массив
    for ( int i=0; i<length; i++ ) {
        a[i] = rand()%30+1;
        cout << a[i] << ' ';
    }
    // Находим максимальное число и его индекс
    int max = a[0];
    for ( int i=1; i<length; i++ ) {
        if ( a[i]>max ) {
            max = a[i];
            maxIndex = i;
        }
    }
    // Неэффективная сортировка!!!!
    for ( int i=maxIndex+1; i<length; i++ ) {
        for ( int k=maxIndex+1; k<length-1-i+maxIndex+1; k++ ) {
            if ( a[k]>a[k+1] ) {
                int temp;
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    cout << endl;
    // Вывод массива
    bool flag = true;
    for ( int i=0; i<length; i++ ) {
        if ( a[i] == max && flag ) {
            cout << a[i] << " (max) ";
            flag = !flag;
        }
        else cout << a[i] << ' ';
    }
    cout << endl;
}
