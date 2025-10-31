#include <iostream>
#include <string>
#include "Potion.h"
#include "Player.h"

void afficherMessagePotion(string typePotion) 
{
    srand(time(0));

    if (typePotion == "force") {
        const char* phrases[] = {
            "Tu sens la force du dragon !",
            "Tes muscles se tendent comme ceux d’un titan !",
            "La puissance coule dans tes veines !"
        };
        cout << phrases[rand() % 3] << endl;
    }
    else if (typePotion == "intelligence") {
        const char* phrases[] = {
            "Ton esprit s’éclaire !",
            "Tu comprends les mystères de l’univers !",
            "La sagesse t’envahit soudainement !"
        };
        cout << phrases[rand() % 3] << endl;
    }
    else if (typePotion == "vitesse") {
        const char* phrases[] = {
            "Tu files plus vite que le vent !",
            "Tes jambes deviennent des éclairs !",
            "Aucun ennemi ne peut te suivre !"
        };
        cout << phrases[rand() % 3] << endl;
    }
    else {
        cout << "Potion inconnue !" << endl;
    }
}
int main() {
    Potion strong("Potion de force", 25, 20.0f);
    Potion mega("Potion de mega soin", 100, 80.0f);
    Player hero("Alice", 50.0f);
    string potion;

    hero.buyPotion(strong);
    cout << "Quelle potion as-tu achetee ? (force / intelligence / vitesse) : ";
    cin >> potion;
    afficherMessagePotion(potion);
    cout << "Or restant : " << hero.getGold() << "\n";
    hero.buyPotion(mega);

}