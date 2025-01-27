// 4. Passing Arrays to Functions:

// .Create functions to print and calculate the sum of an array using pointers.

#include <iostream>
using namespace std;

void sum(int *b[], int a[])
{

  int sum = 0;

  for (int i = 0; i <= 4; i++)
  {
    b[i] = &a[i]; 
  }
  for (int i = 0; i <= 4; i++)
  {
    sum += *b[i];
  }
  cout << sum << endl;
  
}

int main(){

 int arr[5] = {2,4,6,8,10} ;

 int *a[5];

 sum(a,arr); 

}
