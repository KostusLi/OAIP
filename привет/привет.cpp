#include <iostream>
#include <cstdlib>  // Для exit

void checkValue(int value) {
    if (value < 0) {
        std::cerr << "Error: Negative value detected!" << std::endl;
        exit(EXIT_FAILURE); // Завершаем программу с кодом ошибки
    }
}

int main() {
    int x = -1;
    checkValue(x);

    std::cout << "This line will not be executed." << std::endl;
    return 0; // Не достигнем этого момента
}





