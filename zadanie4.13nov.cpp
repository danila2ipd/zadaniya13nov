

#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    setlocale(0, "");
    int N;
    cout << "Введите значение N: ";
    cin >> N;


    cout << setw(20) << "Число" << setw(20) << "Квадрат" << setw(20) << "Куб" << endl;


    for (int i = 1; i <= N; ++i) {
        cout << setw(20) << i << setw(20) << i * i << setw(20) << i * i * i << endl;
    }

    return 0;
}

   