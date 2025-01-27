// 5. Call by Value vs Call by Reference:

// .Implement functions that swap two values using Call by Value and Call by Reference.
// .Compare the results.

#include <iostream>
using namespace std;

void one(int a, int b)
{

   int temp;
    
   temp = a;
   a = b;
   b = temp;

  cout<<"call by value : "<<a <<" "<<b<<endl;

}
void sec(int &c, int &d)
{

   int temp;

   temp = c;
   c = d;
   d = temp;

  cout<<"call by reference : "<<c <<" "<<d<<endl;
}

int main()
{
 
 int x = 5;
 int y = 10;
 cout<<"before x : "<<x<<endl;
 cout<<"before y: "<<y<<endl;

 one(x,y);
 sec(x,y);

 cout<<"after x: "<<x<<endl;
 cout<<"after y: "<<y<<endl;
}