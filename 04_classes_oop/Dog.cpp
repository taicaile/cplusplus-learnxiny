#include <iostream>

class Dog {
    std::string name;
    int weight;

public:
    Dog();
    
    void setName(const std::string& dogsName);
    void setWeight(int dogsWeight);

    virtual void print() const;

    void bark() const {std::cout << name << " barks!\n"}
   
    virtual ~Dog();

}
