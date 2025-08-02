1. OOP VS POP?
=> OOPS and POP are both are programming paradigm which focuses on not what to write in the code but how to write it. The differences are OOP encapsulate data and methods which can be reused later in the code and in POP uses functions or procedures to manage operations. 
in OOPS data is protected and encapsulated but in POP it's not.
We use OOPs in mostly creating complex similar architecture or during SDK's or software development kit which gave us the concept of abstraction which hides the logic from the user and gives them the features. but in POP there is no scalability of the code neither thing called abstraction which create many issues as it grows as a program that the users have to manually check and use the code for later use. OOPS make it moduler and scalable and security proof but POP doesn't promise that.

2. Top down vs bottom up? 
=> Top down approach basically means to write the main function first and then code the remaining elements differently. In C we follow the top down approach as we write the main function first and then the remaining sub function according to it but in the bottom up approach we use C++ where we write the sub function or classes which defines what the program will going to do in the upcoming time and then according to it at the end integrate them in the main function.

3. What is data abstraction? Example.
=> Data abstraction refers about hiding the unneccesary logic for the client which the client doesn't need to bother only allow the important bits of the program by creating necessary methods. 
A real life example would be SDK's or Software Development Kit
Many programmers write SDK's for a program which might be written in another language and create it in a certain way that it helps the end programmer so that the programmer doesn't have to think about unneccesary details. Like if we want to connect to a Redis (a software used for caching data) 
```
let user = new RedisClient({
	useername: "soemthin",
	password: "sdfsf"
}) // Redisclient is a constructor of a classes which we doesn't have to get bothered as it doesn't satisfies our needs.
```

4. Object-oriented concepts: Encapsulation, Inheritance, Polymorphism,
Data Abstraction, Code Reusability
=> 
### 1. **Encapsulation**

Wrapping data and methods together into a single unit (class), and restricting access to internal details.

### 2. **Inheritance**

One class (child) can inherit properties and behavior from another class (parent).

### 3. **Polymorphism**

Same function/method behaves differently depending on the object calling it.

### 4. **Data Abstraction**

Hiding complex implementation details and showing only the essential features.

### 5. **Code Reusability**

Reuse existing classes/methods through inheritance and modular design.

Polymorphism basically means let's say we have a Animal class which generalizes some methods or property for all the Animals and now we can inherit those already prewritten values into our new class which will also be a animal but now I'm specifying it's a dog or a monkey.

5. Access Specifiers: public, private, protected — meaning and usage.
=> 
### 1. **public**
- **Meaning**: Accessible from **anywhere** – inside or outside the class.
- **Usage**: Used for methods or variables meant to be accessed globally.
### 2. **private**
- **Meaning**: Accessible **only within the class** where it's declared.
- **Usage**: Used to **protect sensitive data** and enforce **encapsulation**.
### 3. **protected**
- **Meaning**: Accessible **within the class** and its **derived (child) classes**.
- **Usage**: Useful when you want child classes to use base class members but hide them from outside access.

6. What is this pointer?
=> "this" is a keyword which refers to the pointer of the object which is created. It's an implicit pointer which points to the current object.
usage:
	1.  Accessing current object members: If we want to access current object members than we use this.
	2. Method chaining: So if we return this pointer then we can add methods on the return methods. example: In a calculator class we can add a add method and also can add and multiply method on it. 
	3. This can be helpful in operator overloading.


7. Static data members and static member functions.
=> A static data member basically is a variable which belongs to the class. It's a member variable which we defines by the static keyword whose value stays the same for every object as it creates a shared memory between all of them. static member is declared inside the class and defined outside of it. The default value of it is 0.

Static member function is a member function which gets declared by the static keyword. As static member function or variables are for classes we can directly call them without creating a object of the class. And also inside the member function we can't directly call any non-static member directly. 

8. Use of inline functions with pros and cons.
=> inline function is that kind of function in which the function gets replaced by the function call during compile time.
	- Advantage: Speed, efficient for smaller code.
	- Disadvantage: Can't work for long code, it'll not be efficient as if we use the functions directly a lot of times then the size of the binary gets bigger. 

9. Use of class diagrams to represent class relationships
=> Class diagram is a UML (Unified Modeling Language) tool used to visualize the structure of a system.  
- **Classes** 
- Their **attributes** and **methods** 
- **Relationships** between classes

We use class diagrams to create a blueprint about which we are creating.


10. Function overloading with default arguments — ambiguity scenarios
=> Function overloading means same function names with different parameters or logic. 
```
void greet();
void greet(string name);
```

Default arguments are the ones where we do not explicitly provide any parameter values and the function takes a values by it's own (as it gets defined in the function itself)
```
void greet(string name="mohak");
```

Ambiguity happens when the compiler doesn't able to decide which function to call, like if a function has similar function names with conflicting default parameters.

```
#include <iostream>
using namespace std;

void show(int x, int y = 10) {
    cout << "Function 1: " << x << ", " << y << endl;
}

void show(int x) {
    cout << "Function 2: " << x << endl;
}

int main() {
    show(5);  // ❌ Ambiguous
    return 0;
}
```

as it shows that the compiler can't decide which to call.


# Constructors, destructors

1. Copy constructors: Copy constructors, where it takes a reference to another object to the same class. And then it copies the values of the member variables inside that another object refernce. Copy constructor implicitely do a shallow copy but if we want a deep copy to be executed then we have to create our own user defined copy constructor.
  ```
	 #include <iostream>
using namespace std;

class Book {
    string title;

public:
    Book(string t) {
        title = t;
    }

    // Copy Constructor
    Book(const Book &b) {
        cout << "Copy constructor called\n";
        title = b.title;
    }

    void show() {
        cout << "Title: " << title << endl;
    }
};

int main() {
    Book b1("C++ Guide");
    Book b2 = b1;  // Copy constructor is called
    b2.show();
}
 
```

2. 