#include <iostream>
using namespace std;

class superheros
{
    public:
    void fly()
    {
      cout << "I Can Flay A Top" << endl;
    }
};
class kumar : public superheros{
    
};

int main()
{
    superheros s1;
    kumar m1;
    
    s1.fly();
    m1.fly();
}