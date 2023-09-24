#include <iostream>
using namespace std;

class Cat{
    private:
        string name;
        int energy;
    public:
        Cat(string s){
            name = s;
            energy = 10;
        }
        Cat(const Cat& c){
            name = c.name;
            energy = c.energy;
        };
        // ~Cat();
        void walk(){
            cout<<"walk";
        };
        void eat(){
            cout<<"eat";
        };
        void changeName();
};

int main() {
    string s = "Ketty";
    Cat c1(s);
    c1.eat();
    c1.walk();
    Cat c2 = c1;
    c2.walk();
    c2.eat();
    return 0;
}