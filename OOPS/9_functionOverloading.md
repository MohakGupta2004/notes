
Function overloading is a feature in C++ where two or more functions can have the same name but different parameter lists (number, types, or order of parameters).


```cpp

#include <iostream>
using namespace std;

void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(double d) {
    cout << "Double: " << d << endl;
}

void print(string s) {
    cout << "String: " << s << endl;
}

int main() {
    print(5);         // calls print(int)
    print(3.14);      // calls print(double)
    print("Hello");   // calls print(string)
    return 0;
}
```

