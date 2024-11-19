#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(const std::string& name, int age) : name(name), age(age) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Variables
    int a = 10, b = 20;
    double pi = 3.14;
    char grade = 'A';
    std::string message = "Hello, C++!";

    // Conditional statement
    if (a > b) {
        std::cout << "a is greater than b" << std::endl;
    } else if (a == b) {
        std::cout << "a is equal to b" << std::endl;
    } else {
        std::cout << "a is less than b" << std::endl;
    }

    // Switch statement
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Good!" << std::endl;
            break;
        default:
            std::cout << "Keep trying!" << std::endl;
    }

    // Loops
    std::cout << "While loop:" << std::endl;
    int count = 0;
    while (count < 3) {
        std::cout << count << " ";
        ++count;
    }
    std::cout << std::endl;

    std::cout << "For loop:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << i << " ";
    }

    // Class and objects
    Person person("Alice", 30);
    person.display();

    // Function and recursion
    int num = 5;
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;

    // Pointers
    int value = 42;
    int* ptr = &value;
    std::cout << "Pointer value: " << *ptr << ", Address: " << ptr << std::endl;

    return 0;
}

// Function definition
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
