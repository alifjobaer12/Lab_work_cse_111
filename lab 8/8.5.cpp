#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
class base
{
public:
    string s;
    char b;

    void input()
    {
        getline(cin,s);
    }
};
class drive : public base
{
public:
    void output()
    {
        input();
        for(int i=0; i<s[i]!='\0'; i++)
        {
            b=toupper(s[i]);
            cout<<b;
        }
    }
};
int main()
{
    drive c;
    c.output();
}
