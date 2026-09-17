#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <cstdlib>
#include <ctime>
#include <map>

using namespace std;

// Base class
class Entity {
protected:
    string name;
    int health;
public:
    Entity(string n, int h) : name(n), health(h) {}
    virtual void displayStatus() {
        cout << name << " [HP: " << health << "]" << endl;
    }
    virtual ~Entity() {} // Virtual destructor
    string getName() { return name; }
    int getHealth() { return health; }
    void takeDamage(int dmg) {
        health -= dmg;
        if (health < 0) health = 0;
    }
    bool isDead() { return health <= 0; }
};

// Derived class
class Player : public Entity {
private:
    int score;
public:
    Player(string n) : Entity(n, 100), score(0) {}
    void heal() {
        health += 10;
        if (health > 100) health = 100;
        cout << "You healed. Current HP: " << health << endl;
    }
    void addScore(int s) { score += s; }
    int getScore() { return score; }
    void displayStatus() override {
        cout << "Player " << name << " [HP: " << health << ", Score: " << score << "]" << endl;
    }
};

class Monster : public Entity {
public:
    Monster(string n, int h) : Entity(n, h) {}
};

int main() {
    srand(time(0));
    try {
        auto player = make_shared<Player>("Hero");

        vector<shared_ptr<Monster>> monsters;

        // Monster types
        map<int, pair<string,int>> monsterTypes = {
            {1, {"Goblin", 30}},
            {2, {"Orc", 50}},
            {3, {"Dragon", 80}}
        };

        int turn = 1;
        while (!player->isDead()) {
            cout << "\n=== Turn " << turn++ << " ===\n";
            
            // Spawn monsters randomly
            if (rand() % 2 == 0) {
                int type = rand() % 3 + 1;
                auto m = make_shared<Monster>(monsterTypes[type].first, monsterTypes[type].second);
                monsters.push_back(m);
                cout << "A wild " << m->getName() << " appeared with HP: " << m->getHealth() << "!\n";
            }

            // Display status
            player->displayStatus();
            for (auto &m : monsters) {
                m->displayStatus();
            }

            // Player's choice
            cout << "\n1. Attack monster\n2. Heal\n3. Do nothing\nChoice: ";
            int choice;
            cin >> choice;

            if (choice == 1 && !monsters.empty()) {
                cout << "Choose monster to attack:\n";
                for (size_t i = 0; i < monsters.size(); i++)
                    cout << i+1 << ". " << monsters[i]->getName() << " [HP: " << monsters[i]->getHealth() << "]\n";
                
                int target;
                cin >> target;
                if (target >= 1 && target <= monsters.size()) {
                    int damage = rand()%20 + 5;
                    monsters[target-1]->takeDamage(damage);
                    cout << "You hit " << monsters[target-1]->getName() << " for " << damage << " damage!\n";
                    
                    if (monsters[target-1]->isDead()) {
                        cout << monsters[target-1]->getName() << " died!\n";
                        player->addScore(10);
                        monsters.erase(monsters.begin() + (target-1));
                    }
                }
            } else if (choice == 2) {
                player->heal();
            } else {
                cout << "You did nothing.\n";
            }

            // Monsters attack back
            for (auto &m : monsters) {
                int dmg = rand()%10 + 1;
                player->takeDamage(dmg);
                cout << m->getName() << " attacks you for " << dmg << " damage!\n";
            }
        }

        cout << "\n=== GAME OVER ===\n";
        cout << "Final Score: " << player->getScore() << endl;
    }
    catch (exception &e) {
        cerr << "Exception: " << e.what() << endl;
    }
    return 0;
}
