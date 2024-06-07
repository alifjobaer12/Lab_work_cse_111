#include<iostream>
using namespace std;
class alif
{
protected:
    string name,id;
    void set_data ()
    {
        cin>>name>>id;
    }
};
class student : public alif
{
public:
    void get_data(){
        set_data();
    cout<<"Name : "<<name<<endl<<"Id : "<<id<<endl;}
} ;
int main()
{
    student a;
    a.get_data();
    return 0;
}

