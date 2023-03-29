#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include "Player.hpp"
#include "Enemy.hpp"
#include "Healing_Items.hpp"

int main()
{
    string playerclass;
    cout << "Choose a player class. You can choose warrior, mage, and lancelot. The default is warrior" << endl;
    cin >> playerclass;
    Player Player(100, 6, 5);
    Healing_Item Health_Potion(25);
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
        Player.setDefense(0);
    }
    else
    {
        cout << "No such class, pick again" << endl;
    }

    Enemy Goblin(30, 7, 0);
    cout << (Player.isDead() ? "alive" : "dead") << endl;

    while ((Player.isDead() == false) || (Goblin.isDead() == false))
    {
        cout <<"Your HP: "<< (Player.getHealth()) << endl;
        cout <<"Goblin HP: "<< (Goblin.getHealth()) << endl;
        cout << "What would you like to do? 1.attack, 2.heal"<< endl;
        char action;
        cin>>action;
        if (action == '1') {
            Player.attack(Goblin);
            cout<<"You attacked!"<<endl;
            cout<<"The enemy has"<<(Goblin.getHealth())<<"Health left"<<endl;
            Goblin.attack(Player);
        } else if(action == '2') {
            cout<<"Which item you want to use? 1.Health Potion"<<endl;
            string healoption;
            cin >> healoption;
            if(healoption == "1") {
                cout<<"You have healed, you gained"<<(Health_Potion.get_heal_amount())<<"Amount of hp"<<endl;
            } else{
                 cout<<"Wrong, input you don't have one of those."<<endl;
            }
            Goblin.attack(Player);
        } else {
            cout<<"Wrong input, only 1 and 2 exists"<<endl;
        }

    }

    return 0;
}