#include <iostream>
using namespace std;

class superhero{
public:
  int flyingpoints;
  int fightpoints;
  int powerlevel;

// constructor
  superhero(){
    flyingpoints = 10;
    fightpoints = 20;
    powerlevel = 0;
  }
// constructor

  string calculategrade(){
    
    if(powerlevel >= 80){
      return "A1 - TOP HERO";
    }
    else if(powerlevel >= 60){
      return "A2 - VERY GOOD";
    }
    else if(powerlevel >= 40){
      return "B - AVERAGE HERO";
    } 
    else if(powerlevel >= 20){
      return "C - NEED IMPROVEMENT";
    }

    return "Invalid Grade";    
  }

};

//used hierarchial inheritance

class ironman : public superhero{
public:

int uniqueiron = 40;

  int calpower(){
    return powerlevel = flyingpoints + fightpoints + uniqueiron;
  }

  void iron(){
   cout<<"Charachater : ironman"<<endl;
   cout<<"Ability : flying, fighting, speed"<<endl;
   cout<<"Powerlevel : "<<calpower()<<endl;
   cout<<"Grade : "<<calculategrade()<<endl;
  }
};

class spiderman : public superhero{
public:

int uniquespider = 10;

  int calpower(){
    return powerlevel = flyingpoints + fightpoints + uniquespider;
  }

  void spider(){
   cout<<"Charachater : spiderman"<<endl;
   cout<<"Ability : flying, fighting, throw spider(web)"<<endl;
   cout<<"Powerlevel : "<<calpower()<<endl;
   cout<<"Grade : "<<calculategrade()<<endl;
  }
};

class hulkman : public superhero{
public:

int uniquehulk = 170;

  int calpower(){
    return powerlevel = flyingpoints + fightpoints + uniquehulk;
  }

  void hulk(){
   cout<<"Charachater : hulk"<<endl;
   cout<<"Ability : flying, fighting, strength, endurance"<<endl;
   cout<<"Powerlevel : "<<calpower()<<endl;
   cout<<"Grade : "<<calculategrade()<<endl;
  }
};

class batman : public superhero{
public:

int uniquebat = 5;

  int calpower(){
    return powerlevel = flyingpoints + fightpoints + uniquebat;
  }

  void bat(){
   cout<<"Charachater : batman"<<endl;
   cout<<"Ability : flying, fighting, bats, endurance"<<endl;
   cout<<"Powerlevel : "<<calpower()<<endl;
   cout<<"Grade : "<<calculategrade()<<endl;
  }
};

int main(){
ironman obj1;
spiderman obj2;
hulkman obj3;
batman obj4;

obj1.iron();

cout<<endl<<"------------------------------------"<<endl<<endl;

obj2.spider();

cout<<endl<<"------------------------------------"<<endl<<endl;

obj3.hulk();

cout<<endl<<"------------------------------------"<<endl<<endl;

obj4.bat();

}