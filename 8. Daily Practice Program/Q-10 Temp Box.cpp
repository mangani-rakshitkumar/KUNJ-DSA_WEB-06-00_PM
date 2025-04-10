#include <iostream>
using namespace std;

int main()
{
    int size,temp;

    cout << "enter element in array: ";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "element: ";
        cin >> box[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    
    
    for (int  i = 0; i < size-1; i++)
    {
        for (int  j = 0; j < size; j++)//100 90 50 30 20
        {
            if(box[j] > box[j+1])
            {
                temp = box[j];
                box[j] = box[j+1];
                box[j+1] = temp;
            }
        }
    }
    

    cout << "------------------"<< endl;

    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }   
}