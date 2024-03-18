#include <iostream>
#include <string>

class String {
private:
    std::string str;
public:
    // Constructor
    String(const std::string& s = "") : str(s) {}

    // Overloading == operator for string comparison
    int operator==(const String& other) const {
        return str == other.str;
    }

    // Function to display the string
    void display() const {
        std::cout << str;
    }
};

int main() {
    String s1("Hello");
    String s2("Hello");
    String s3("World");

    if (s1 == s2) {
        std::cout << "s1 and s2 are identical." << std::endl;
    } else {
        std::cout << "s1 and s2 are not identical." << std::endl;
    }

    if (s1 == s3) {
        std::cout << "s1 and s3 are identical." << std::endl;
    } else {
        std::cout << "s1 and s3 are not identical." << std::endl;
    }

    return 0;
}