
#include <iostream>
int drink;
int A = 1;
int B = 2;
int C = 3;

int main()
{
    std::cout << "What is your favorit drink!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "1. Coffee" << std::endl;
    std::cout << "2. Tea" << std::endl;
    std::cout << "3. Coca Cola" << std::endl;
    std::cout << "Select between 1 to 3: ";
    std::cin >> drink;
    std::cout << "" << std::endl;
    if (drink == A) {
        std::cout << "Coffee is delicious!";
        }
    if (drink == B) {
        std::cout << "Tea gives peace of mind";
    }
    if (drink == C) {
        std::cout << "Coke will give you a white smile ;)";
    }
}

