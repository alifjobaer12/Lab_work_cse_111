#include<iostream>
using namespace std;
class person
{
    string name,dob,add,bg;
    string in;
public:
    int contain()
    {
        cin>>name>>add>>bg>>dob>>in;
        return 0;
    }
    int display()
    {
        cout<<endl<<"Name : "<<name<<endl<<"Address : "<<add<<endl<<"Blood Group : "<<bg<<endl<<"Date Of Birth : "<<dob<<endl<<"Identification no : "<<in<<endl;
        return 0;
    }

};
int main()
{
    person a;
    a.contain();
    a.display();
    return 0;
}

