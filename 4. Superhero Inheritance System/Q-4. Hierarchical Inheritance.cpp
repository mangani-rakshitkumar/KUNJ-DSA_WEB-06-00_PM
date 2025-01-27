#include <iostream>
using namespace std;

class superhero{

public:

    void fly(){
     cout <<"flying" <<endl;
    }
    void fight(){
     cout <<"fighting" <<endl;
    }
 
};

class ironman : public superhero {

public:   

    void iron(){
     cout <<"ironman" <<endl;
     cout <<"nitro" <<endl;
     cout <<"jarvis" <<endl;
    }  

};
class batman : public  superhero {

public:   

    void bat(){
     cout <<"batman" <<endl;
     cout <<"call bats" <<endl;
     cout <<"speed" <<endl;
    }  
     
};
class superman : public superhero {

public:   

    void super(){
     cout <<"superman" <<endl;
     cout <<"strength" <<endl;
     cout <<"endurance" <<endl;
    }  
     
};
class spiderman : public superhero {

public:   

    void spider(){
     cout <<"spideman" <<endl;
     cout <<"throw spider nets" <<endl;
     cout <<"call spider" <<endl;
    }  
     
};

int main(){

spiderman obj1;
superman obj2;
batman obj3;
ironman obj4;

obj1.spider();
obj1.fly();
obj1.fight();

cout<<"---------------------------------"<<endl;

obj2.super();
obj2.fly();
obj2.fight();

cout<<"---------------------------------"<<endl;

obj3.bat();
obj3.fly();
obj3.fight();

cout<<"---------------------------------"<<endl;

obj4.iron();
obj4.fly();
obj4.fight();

}