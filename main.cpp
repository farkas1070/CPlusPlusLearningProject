#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Player.hpp"
#include "Enemy.hpp"


int main(){
    
    Enemy Goblin (30,3,3);
    Player Player(100,10,5);
    Player.attack(Goblin);
    cout<<(Goblin.getHealth())<<endl;
    
    
    return 0;
}