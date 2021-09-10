#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *allZombie = new Zombie[N];
    for (int i = 0; i < N; i++) {
        allZombie[i].setName(name);
    }
    return (allZombie);
}