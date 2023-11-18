##include <iostream>
#include <string>

int main() {
    std::string input;
    int numbers[5] = {0};
    int sum = 0;

    std::cout << "Введите строку: ";
    std::cin >> input;
    
    // Анализируем строку и извлекаем числа
    int count = 0;
    for (char c : input) {
        if (isdigit(c)) { // Проверка, является ли символ числом
            numbers[count++] = c - '0'; // Преобразуем символ в числовое значение и добавляем в массив
        }
    }
    
    // Суммируем числа
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    
    std::cout << "Сумма чисел: " << sum << std::endl;

    return 0;
}
