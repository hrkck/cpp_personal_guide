#include <iostream>

using namespace std;

class Enemy {
protected:
        int attackPower;
public:
        void setAttackPower(int a){
                attackPower = a;
        }
};

class Ninja : public Enemy {
public:
        void attack(){
                cout << "Ninja Attack! Your XP goes -" << attackPower << endl;
        }
};

class Monster : public Enemy {
public:
        void attack(){
                cout << "Monster Attack! Your XP goes -" << attackPower << endl;
        }
};

class Enemy1 {
public:
        virtual void attack(){
        }
};

class Ninja1 : public Enemy1 {
public:
        void attack(){
                cout << "Ninja Attack -" << endl;
        }
};

class Monster1 : public Enemy1 {
public:
        void attack(){
                cout << "Monster Attack -" << endl;
        }
};


int main(){
        /*
           Ninja nin;
           Monster sweetM;

           Enemy *enemy1 = &nin;
           Enemy *enemy2 = &sweetM;

           enemy1->setAttackPower(25);
           enemy2->setAttackPower(45);

           nin.attack();
           sweetM.attack();*/

        Ninja1 n;
        Monster1 m;
        Enemy1* e1 = &n;
        Enemy1* e2 = &m;

        e1->attack();
        e2->attack();
}
