Single Inheritance:
Where properties of one class is inherited into one class.

```cpp
class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking...\n"; }
};
```

Multiple Inheritance:
Where properties of Multiple class inherited into another class.

```cpp
class Flyable {
public:
    void fly() { cout << "Flying...\n"; }
};

class Swimmable {
public:
    void swim() { cout << "Swimming...\n"; }
};

class Duck : public Flyable, public Swimmable {};
```

