// Для каждого символа заданного текста указать, скольок раз он встречается в тексте.
// Сообщение об этом символе должно печататься не более одного раза.

#include <iostream>
#include <algorithm> 
#include <string> 

using namespace std;

int main()
{
    // исходные данные
    string user_str;
    cout << "Введите строку: ";
    cin >> user_str;
    
    // кол-во символов в строке
    int count_char = user_str.length();
    
    // инициализируем массив символов
    char chars[count_char + 1];
    
    // копируем символы в массив
    user_str.copy(chars, count_char + 1);
    // cout << chars[0] << endl;
    
    // обход массива символов
    for (int i = 0; i < count_char; i++) {
        int k = count(user_str.begin(), user_str.end(), user_str[i]);
        cout << user_str[i] << " = " << k << endl;
        
        // сохраняем обработанную букву(символ)
        char processed_symbols[] = user_str[i];
        // bool exists = processed_symbols.find(user_str[i]) != std::string::npos;
        // if (exists) 
            // user_str.erase(remove(user_str.begin(), user_str.end(), user_str[i]), user_str.end());
    }
    
    
    /*
    int arr[count_char];
    
    int counter = 0;
    for (int i = 0; i < count_char; i++) {
        cout << count(user_str.begin(), user_str.end(), user_str[i]);
    }
    */
    return 0;
}