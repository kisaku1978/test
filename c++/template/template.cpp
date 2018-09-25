#include <iostream>
#include <iomanip>
#include <string>

template <class T>
class Set
{
    T t;
public:
    Set(T st) : t(st) {}

    void display() {
        std::cout << t << std::endl;
    }
};

// Normal class, Not-template class
class Set_int
{
    int t;
public:
    Set_int(int st): t(st) {}

    void display() {
        std::cout << std::setw(10) << std::setfill('0')
            << t << std::endl;
    }
};

// Specialized class template
template <> class Set<int>
{
    int t;
public:
    Set(int st): t(st) {}

    void display() {
        std::cout << std::setw(10) << std::setfill('o')
            << t << std::endl;
    }
};

int main() {
    Set<std::string> a("hello");
    Set_int b(2);  // User needs to know there is a non-template class.
    Set<int> c(2); // User doesn't need to know there is a non-template class.

    a.display();
    b.display();
    c.display();
    return 0;
}
