#include <iostream>
using namespace std;

class flyinghero{

public:

    void fly(){
    cout<<"flying"<<endl;
    }
 
};

class fightinghero{

public:    

    void fight(){
        cout<<"fighting"<<endl;
    }
};

class Ironman : public flyinghero, public fightinghero{

public:

    void laser(){
        cout<<"Ironman shooting laser"<<endl;
    }

};


class Superman : public flyinghero, public fightinghero{

public:

    void heat(){
        cout<<"Superman heat vision"<<endl;
    }

};

int main(){

Superman obj1;
Ironman obj2;

obj1.heat();
obj1.fly();
obj1.fight();

cout<<"-----------------------------"<<endl;

obj2.laser();
obj2.fly();
obj2.fight();

}