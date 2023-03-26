#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include "Player.hpp"
#include "Enemy.hpp"

int main()
{
    string playerclass;
    cout << "Choose a player class. You can choose warrior, mage, and lancelot. The default is warrior" << endl;
    cin >> playerclass;
    Player Player(0, 0, 0); // this is the default for the warrior class

    if ((playerclass == "Warrior") || (playerclass == "warrior"))
    {
        Player.setHealth(100);
        Player.setDamage(6);
        Player.setDefense(5);
    }
    else if ((playerclass == "lancelot") || (playerclass == "Lancelot"))
    {
        Player.setHealth(120);
        Player.setDamage(4);
        Player.setDefense(12);
    }
    else if ((playerclass == "Mage") || (playerclass == "mage"))
    {
        Player.setHealth(70);
        Player.setDamage(12);
        Player.setDefense(2);
    }
    else
    {
        cout << "No such class, pick again" << endl;
    }

    Enemy Goblin(30, 3, 3);
    cout << (Player.isDead() ? "alive" : "dead") << endl;

    while ((Player.isDead() == true) || (Goblin.isDead() == true))
    {
        cout <<"Your HP: "<< (Player.getHealth()) << endl;
        cout <<"Your Damage: "<< (Player.getDamage()) << endl;
        cout << "Your Defense: "<<(Player.getDefense()) << endl;
        cout << "What would you like to do? 1.attack, 2.heal"<< endl;
        char action;
        cin>>action;
        if (action == '1') {
            cout<<"attack"<<endl;
        } else{
             cout<<"heal"<<endl;
        }

    }

    return 0;
}