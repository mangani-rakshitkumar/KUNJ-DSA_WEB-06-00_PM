#include<iostream>
using namespace std;
class a{
    public:
    void purvajit(){
       cout<<"hello-1"<<endl; 
    }
};
class b: public a {
  public:
 void madhav(){
    cout<<"hello-2"<<endl;
 }
};
class c: public a , public b {
  public:
 void darshan(){
    cout<<"hello-3"<<endl;
 }
};

int main(){
     c obj1;
     b obj2;
     obj1.madhav ();
     obj2.madhav ();
}