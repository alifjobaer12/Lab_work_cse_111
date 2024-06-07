#include<iostream>
using namespace std;

class parant
{
    int a[5], s=0;
public:
    int set_data()
    {
        for(int i=0; i<5; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        return s;
    }
};
class child : public parant
{
    public:
    void ava()
    {
        cout<<set_data()/5<<endl;
    }
};
int main()
{
    child b;
    b.ava();
}
