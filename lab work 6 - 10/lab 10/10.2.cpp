#include<iostream>
using namespace std;
class pr
{
    string name ;
    int mark;
public:
    void input()
    {
        cin>>name>>mark;
    }
    void output()
    {
        cout<<endl<<name<<"\t"<<mark<<endl;
    }
};
int main()
{
    pr v[3];
    for(int i=0; i<3; i++)
    {
        v[i].input();
    }
    for(int i=0; i<3; i++)
    {
        v[i].output();
    }
    return 0;
}
