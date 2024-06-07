#include<iostream>
using namespace std;

class a
{
protected:
    int n1;
public:
    int input1()
    {
        cin>>n1;
        return n1;
    }
};
class b
{
protected:
    int n2;
public:
    int input2()
    {
        cin>>n2;
        return n2;
    }
};
class c : public a, public b
{
    int s;
public:
    void sum()
    {
        input1();
        input2();
        cout<<endl<<n1+n2<<endl;
    }
};
int main()
{
    c x;
    x.sum();
    return 0;
}
