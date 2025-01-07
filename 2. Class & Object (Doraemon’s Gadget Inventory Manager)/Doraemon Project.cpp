#include <iostream>
using namespace std;

class Gadget{

private:
    int usecount = 0;

public:
    string name;
    int powerlevel;

  void display(string n, int p){
    name = n;
    powerlevel = p;

    cout<<"Gadget : "<<name<<"      "<<"PowerLevel : "<<powerlevel<<endl;
  }

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

   cout<<endl <<"( Doraemon Gadget )" <<endl;

   cout<<endl<<"Doraemon using Gadget"<<endl<<endl;

   cout<<"how mani time to use Gadget : ";
   cin>>size;
   cout<<endl; 

   for (int i = 0; i < size; i++)
   {
       cout<<"using Gadget for "<<(i + 1)<<endl;

       doraemon.update();
   }
   

   return 0;

}