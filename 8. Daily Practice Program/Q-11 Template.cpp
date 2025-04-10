#include<iostream>
using namespace std;

template <typename T>

T add(T x,T y)
{
  cout<< x + y <<endl;
  cout<< x - y <<endl;
}

int main()
{
  int x,y;
  float K =  add <float> (1,1);

}