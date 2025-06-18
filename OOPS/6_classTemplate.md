A class template allows you to create a generic class that can work with any data type. It's like writing one class to handle many types.


```cpp
```cpp
template <typename T>  // or: template <class T>
class ClassName {
public:
    T data;
    ClassName(T val) {
        data = val;
    }

    void display() {
        std::cout << "Data: " << data << std::endl;
    }
};
```

template <typename T> defines a template parameter T.
T can now be used as a placeholder type inside the class.
```
```
```
```
```
```
```
```
```


