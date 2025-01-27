#include <iostream>
using namespace std;

class superhero{

public:

    void fly(){
    cout <<"flying" <<endl;
    }

    void brucewayne(){
    cout <<"brucewayne" <<endl;
    }

    void jump(){
    cout <<"jump" <<endl;
    }

    void laser(){
    cout <<"laser" <<endl;        
    }
 
};

class fightinghero : public superhero{

public:

    void fight(){
     cout <<"fighting" <<endl;
    }
};

class batman : public fightinghero{

public:

   void bat(){
    cout <<"batman" <<endl;
   }

};

int main(){

batman obj1;

obj1.bat();
obj1.fight();
obj1.fly();

cout <<"-------------------------" <<endl;

obj1.brucewayne();
obj1.fight();
obj1.fly();
obj1.jump();
obj1.laser();

}