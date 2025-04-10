#include<iostream>
using namespace std;

 class kumar{
    public:
    void create(){
        cout<<"hello-1"<<endl;
    }
    void read(){
        cout<<"hello-2"<<endl;
    }
    void insert(){
        cout<<"hello-3"<<endl;
    }
    void remove(){
        cout<<"hello-4"<<endl;
    }
    void exit(){
        cout << "exit sucessfully....." << endl;
    }
 };
 
 int main(){
   int red;
    
    kumar s1;
   do
   {
    cout<<"1.create"<<endl;
    cout<<"2.read"<<endl;
    cout<<"3.insert"<<endl;
    cout<<"4.remove"<<endl;
    cout <<"0.exit" << endl;
    cin>>red;

    switch (red)
    {
    case 1:
        s1.create();
        break;
    case 2:
        s1.read();
        break;
    case 3:
        s1.insert();
        break;
    case 4:
        s1.remove();
        break;
    case 0:
        s1.exit();
        break;
    
    default:
      cout << "invalid" << endl;
      break;
         
    }
   } while (red !=0);
   
 }