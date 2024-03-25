#include <iostream>

class Animal {
public:
    virtual void eat() {
        std::cout << "Animal is eating\n";
    }
};

class Herbivore : public Animal {
public:
    void eat() override {
        std::cout << "Herbivore is eating plants\n";
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        std::cout << "Carnivore is eating meat\n";
    }
};

int main() {
    Animal animal;
    Herbivore herbivore;
    Carnivore carnivore;

    animal.eat();
    herbivore.eat();
    carnivore.eat();

    return 0;
}

