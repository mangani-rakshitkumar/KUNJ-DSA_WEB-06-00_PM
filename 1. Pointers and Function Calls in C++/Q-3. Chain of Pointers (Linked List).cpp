// 3. Chain of Pointers (Linked List):

// .Create a simple linked list using dynamically allocated memory.
// .Display the linked list and free memory.

#include <iostream>
using namespace std;

int main()
{

 int k;
 cout<<"k : ";
 cin >> k;

 int *p;

 p = &k;

 int **ptr;

 ptr = &p;

 cout<<"chain of pointer : " <<**ptr<<endl;

}