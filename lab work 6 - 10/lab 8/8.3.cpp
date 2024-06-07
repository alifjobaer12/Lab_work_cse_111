#include<iostream>
using namespace std;
class student
{
private:
    string name,id,mark;
public:
    void set_data ()
    {
        cin>>name>>id>>mark;
    }
    void get_data()
    {
        cout<<"Name : "<<name<<endl<<"Id : "<<id<<endl<<"Mark : "<<mark<<endl;
    }
};
class result : private student
{
public:
    void out()
    {
        set_data();
        get_data();
    }
} ;
int main()
{
    result a;
    a.out();
    return 0;
}


