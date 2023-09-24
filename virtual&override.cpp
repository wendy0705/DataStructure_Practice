#include <iostream>
using namespace std;

class Parent {
public:
    virtual void print() {
        cout << "Parent's print method" << endl;
    }
};

class Child : public Parent {
public:
    void print(){
        cout << "Child's print method" << endl;
    }
};

int main() {
    Parent* parent = new Child();  // 上轉型，將子類別轉換為父類別
    parent->print();  // 調用 print 方法
    
    // Output: Child's print method
    
    delete parent;
    return 0;
}