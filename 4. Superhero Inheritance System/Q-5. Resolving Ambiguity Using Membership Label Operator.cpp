#include <iostream>
using namespace std;

class flyinghero {
public:

  void fly(){
     cout <<"flying" <<endl;
  }

};
class fightinghero {
public:

  void fly(){
     cout <<"flying" <<endl;
  }

};

class ironman : public flyinghero, public fightinghero {
public:

  void iron(){
     cout <<"ironman" <<endl;
  }  

};

int main(){

 ironman obj1;

 obj1.iron();

obj1.flyinghero::fly();
obj1.fightinghero::fly();

}