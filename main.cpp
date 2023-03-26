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
    cout << "Choose a player class. You can choose warrior, mage, and lancelot" << endl;
    cin >> playerclass;
    Player Player(100, 10, 5); //this is the default for the warrior class

    
    if ((playerclass == "lancelot") || (playerclass == "Lancelot"))
    {
        Player.setHealth(120);
        Player.setDamage(4);
        Player.setDefense(12);
    }
    else if((playerclass == "Mage") || (playerclass == "mage"))
    {
        Player.setHealth(1200);
        Player.setDamage(4);
        Player.setDefense(12);
    }

    Enemy Goblin(30, 3, 3);

    
    
    
    cout << (Player.getHealth()) << endl;
    cout << (Player.getDamage()) << endl;
    cout << (Player.getDefense()) << endl;

    return 0;
}