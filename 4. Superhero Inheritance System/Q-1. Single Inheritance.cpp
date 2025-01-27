#include <iostream>
using namespace std;

class superhero{

public:

    void fly(){
    cout <<"ironman Flying" <<endl;
    }
    void savetheworld(){
    cout <<"ironman save the world" <<endl;
    }
};

class ironman : public superhero{

public:    

    void laser(){
        cout <<"ironman shooting laser" <<endl;
    }
};

int main(){
  ironman obj1;
  obj1.laser();
  obj1.fly();
  obj1.savetheworld();
  
}