#include <iostream>
#include <cctype>   // для функции isdigit

using namespace std;

int main()
{
    string number;
    cout << "Проверка числа на симметричность.\n";
    cout << "Введите число: ";
    cin >> number;
    
    int count = 0;
    for (int i = 0; i < number.length(); i++) {
        if (isdigit(number[i]) == false) {
            count++;
        }
    }
    
    
    if (count > 0) {
        cout << "Строка содержит буквы или спец.символы - перезапустите скрипт.";
        return 0;
    } else {
        // кол-во цифр в числе
        int count_of_number = number.length();
        
        // берем половину символов от искомого числа
        int half_number = count_of_number / 2;
        
        // берем первые n символов (половину) от искомого числа
        string first_symbols = number.substr(0, half_number);
        
        string last_symbols = number.substr(half_number);
        
        if (first_symbols == last_symbols) {
            cout << "число симметрично";    
        } else cout << "число НЕ симметрично";
        
        return 0;
    }
    
}