#include <iostream>
#include <string>

namespace Animals {
    class Animal {
    protected:
        std::string name;
        std::string species;
        int age;

    public:
        Animal(std::string name, std::string species, int age)
            : name(name), species(species), age(age) {}
        std::string getName() const { return name; }
        void setName(const std::string& newName) { name = newName; }

        // Getter and Setter for Species
        std::string getSpecies() const { return species; }
        void setSpecies(const std::string& newSpecies) { species = newSpecies; }

        // Getter and Setter for Age
        int getAge() const { return age; }
        void setAge(int newAge) { age = newAge; }
    };

    class Cat : public Animal {
    private:
        std::string color;
        std::string breed;

    public:
        Cat(std::string name, std::string species, int age, std::string color, std::string breed)
            : Animal(name, species, age), color(color), breed(breed) {}

        // Getter and Setter for Color
        std::string getColor() const { return color; }
        void setColor(const std::string& newColor) { color = newColor; }

        // Getter and Setter for Breed
        std::string getBreed() const { return breed; }
        void setBreed(const std::string& newBreed) { breed = newBreed; }
    };

    class Dog : public Animal {
    private:
        double weight;
        std::string breed;

    public:
        Dog(std::string name, std::string species, int age, double weight, std::string breed)
            : Animal(name, species, age), weight(weight), breed(breed) {}

        // Getter and Setter for Weight
        double getWeight() const { return weight; }
        void setWeight(double newWeight) { weight = newWeight; }

        // Getter and Setter for Breed
        std::string getBreed() const { return breed; }
        void setBreed(const std::string& newBreed) { breed = newBreed; }
    };
} // namespace Animals

int main() {
    using namespace Animals;

    Cat myCat("Whiskers", "Felis catus", 3, "Gray", "Persian");
    std::cout << "Cat: " << myCat.getName() << " " << myCat.getSpecies() << " " << myCat.getAge() << std::endl;
    std::cout << "Color: " << myCat.getColor() << std::endl;
    std::cout << "Breed: " << myCat.getBreed() << std::endl;

    Dog myDog("Buddy", "Canis lupus familiaris", 5, 25.5, "Golden Retriever");
    std::cout << "\nDog: " << myDog.getName() << " " << myDog.getSpecies() << " " << myDog.getAge() << std::endl;
    std::cout << "Weight: " << myDog.getWeight() << " kg" << std::endl;
    std::cout << "Breed: " << myDog.getBreed() << std::endl;

    return 0;
}

