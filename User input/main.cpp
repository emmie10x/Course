#include <iostream>

int main() {

    /*
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    */

    /*
    cin.ignore():This function is used to ignore characters in the input buffer. It's especially useful when dealing with mixed input types or to discard unwanted data like newline characters after reading integers or other non-char types.
    */

    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    /*
    getline(): Unlike cin, which stops reading input at whitespace, getline() is used to read an entire line of text, making it suitable for string inputs with spaces.
    */

    /*
    std::string fullName;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    std::cout << "Hello, " << fullName << "!" << std::endl;
    */

    /*
    Mixing cin with getline(): When cin is used before getline(), the newline character left by cin can cause getline() to terminate immediately. Using cin.ignore() helps to clear the buffer in such cases.
    */

    int age;
    std::string name;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore();  // clear the newline character

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Name: " << name << ", Age: " << age << std::endl;
    return 0;
}