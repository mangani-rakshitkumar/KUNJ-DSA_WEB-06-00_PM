#include <iostream>
using namespace std;

class Gadget{

private:
    int usecount = 0;

public:
    string name;
    int powerlevel;

//for nobita to see the gadget inventory 

  void display(string n, int p){
    name = n;
    powerlevel = p;

    cout<<"Gadget : "<<name<<"      "<<"PowerLevel : "<<powerlevel<<endl;
  }

//update use count only doraemon can update.

  void update(){
    
    usecount++;

    if (usecount > 10)
    {
        cout<<"warning ! you are overusing gadget"<<endl;
    }

  }

};

int main(){
   
int size;

   Gadget doraemon,nobita;

   cout<<endl<<"( Doraemon Gadget Inventory )"<<endl<<endl;

   nobita.display("Bamboo Copter",60);
   nobita.display("Anywhere door",80);
   nobita.display("Big Light",40);
   nobita.display("Air Cannon",83);
   nobita.display("Animal beam",94);


   cout<<endl<<"Doraemon is using gadget...."<<endl<<endl;

   cout<<"how much time you want to use gadget : ";
   cin>>size;
   cout<<endl; 

   for (int i = 0; i < size; i++)
   {
       cout<<"using gadget for "<<(i + 1)<<endl;

       doraemon.update();
   }
   

   return 0;

}