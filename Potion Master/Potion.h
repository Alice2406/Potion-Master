#include <iostream>
#include <string>

using namespace std;

class Potion {
private:
    string name;
    int power;
    float price;

public:
    Potion() : name("Inconnu"), power(0), price(0.0f) {}
    Potion(string n, int p, float pr) : name(n), power(p), price(pr) {}

    string getName() const { return name; }
    int getPower() const { return power; }
    float getPrice() const { return price; }

    void setName(const string n) { name = n; }
    void setPower(int p) { power = p; }
    void setPrice(float pr) { price = pr; }
};