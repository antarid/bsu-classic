/* В матрице найти максимальный элемент нижнего треугольника (лежит ниже главной диагонали),
максимальный элемент верхнего треугольника, и поменять их местами.
*/ 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MAX_LENGTH = 50;
int main() {
    srand( time(NULL) );
    int a[MAX_LENGTH][MAX_LENGTH],
        n,
        m,
        maxLower = 0,
        maxLowerIndex[2] = {0, 0}, // Координаты максимальных элементов будут храниться в массиве
        maxUpper = 0,
        maxUpperIndex[2] = {0, 0};
    cout << "Enter n, m\n";
    cin >> n >> m;
    // Задаем матрицу
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            a[i][j] = rand()%20+1;
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    // Ищем максимальное число в нижнем треугольнике и его координаты
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<i; j++ ) {
            if ( a[i][j] > maxLower ) {
                maxLower = a[i][j];
                maxLowerIndex[0] = i;
                maxLowerIndex[1] = j;
            }
        }
    }
    // Ищем максимальное число в верхнем треугольнике и его координаты
    for ( int i=0; i<n; i++ ) {
        for ( int j=m-1; j>i; j-- ) {
            if ( a[i][j] > maxUpper ) {
                maxUpper = a[i][j];
                maxUpperIndex[0] = i;
                maxUpperIndex[1] = j;
            }
        }
    }
    cout << endl << "Max number in upper triangle = " << maxUpper << endl << "Max number in lower triangle = " << maxLower << endl;
    // Меняем их местами
    int temp = a[maxLowerIndex[0]][maxLowerIndex[1]]; 
    a[maxLowerIndex[0]][maxLowerIndex[1]] = a[maxUpperIndex[0]][maxUpperIndex[1]];
    a[maxUpperIndex[0]][maxUpperIndex[1]] = temp;
    cout << endl;
    // Выводим получившуюся матрицу
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
} 
