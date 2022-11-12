// Для каждого символа заданного текста указать, скольок раз он встречается в тексте.
// Сообщение об этом символе должно печататься не более одного раза.

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    // исходные данные
    string user_str;
    cout << "Введите строку: ";
    cin >> user_str;

    // строка для сбора "уникальных" символов
    string processed_symbols = "";

    // обход массива символов
    for (int i = 0; i < user_str.length(); i++) {
        bool exists = processed_symbols.find(user_str[i]) != std::string::npos;
        
        // если такого символа нет в строке с "уникальными" символами - обрабатываем его
        if (!exists) {
            int k = count(user_str.begin(), user_str.end(), user_str[i]);
            cout << user_str[i] << " = " << k << endl;

            // сохраняем обработанную букву(символ)
            processed_symbols = processed_symbols + user_str[i];
        }
    }

    return 0;
}
