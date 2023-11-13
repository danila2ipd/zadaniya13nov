
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    
    int number;
    int count = 0;
    int sum = 0;

    do
    {
        
        cout << "Введите число (для завершения введите 0): ";
        cin >> number;

        
        if (number != 0) {
            
            count++;
            
            sum += number;
        }
    } while (number != 0);

    if (count > 0) {
        
        double average = static_cast<double>(sum) / count;

        
        cout << "\nКоличество введенных чисел: " << count << endl;
        cout << "Общая сумма чисел: " << sum << endl;
        cout << "Среднее арифметическое: " << average << endl;
    }
    

    return 0;
}




