#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    float gold;

public:
    Player(string n, float g) : name(n), gold(g) {} 

    float getGold() const { return gold; }
    void setGold(float g) { gold = g; }

    void buyPotion(const Potion& p) 
    {
        if (gold >= p.getPrice()) 
        {
            gold -= p.getPrice();
            cout << name << " a achete la potion " << p.getName() << " pour " << p.getPrice() << " or.\n";
        }
        else 
            cout << name << " n'a pas assez d'or pour acheter la potion " << p.getName() << endl;
    }
};