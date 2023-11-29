#include <iostream>

int main() {
    const int input = 3;

    // Создаем двумерный массив для хранения результатов
    int table[input][input];

    // Заполняем массив и выводим результаты
    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input; ++j) {
            table[i][j] = i * j;
        }
    }

    // Выводим результаты в нужном формате
    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input; ++j) {
            std::cout << table[i][j] << " ";
        }
        std::cout << std::endl; // Переход на новую строку после каждой строки
    }

    return 0;
}