#include <iostream>
using namespace std;

// 抽象類別 Animal
class Animal {
public:
    // 純虛函數，表示這個函數在抽象類別中只有聲明而沒有實際實現
    virtual void makeSound() = 0;

    // 具體函數，具有實際實現
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

// 具體類別 Dog 繼承自抽象類別 Animal
class Dog : public Animal {
public:
    // 實現純虛函數 makeSound
    void makeSound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

// 具體類別 Cat 繼承自抽象類別 Animal
class Cat : public Animal {
public:
    // 實現純虛函數 makeSound
    void makeSound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* dog = new Dog();  // 上轉型，將 Dog 對象轉換為 Animal 指標
    Animal* cat = new Cat();  // 上轉型，將 Cat 對象轉換為 Animal 指標

    dog->makeSound();  // 調用 Dog 的 makeSound 方法
    dog->eat();        // 調用 Animal 的 eat 方法

    cat->makeSound();  // 調用 Cat 的 makeSound 方法
    cat->eat();        // 調用 Animal 的 eat 方法

    delete dog;
    delete cat;

    return 0;
}
