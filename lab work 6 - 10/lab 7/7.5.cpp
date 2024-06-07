#include<iostream>
using namespace std;

class employee
{
    int s;
    int d;
public:
    string n;
    void input()
    {
        cout<<"Enter name, salary, date of hire (year): "<<endl;
        cin>>n>>s>>d;
    }
    void output ()
    {
        cout<<endl<<"Name: "<<n<<endl<<"Salary: "<<s<<endl<<"Hiring Year: "<<d<<endl;
    }
    friend int service_year(employee x);
};

int service_year(employee x)
{
    cout<<"total year of service : "<<endl;
    int b;
    b=2024-x.d;
    if (b>1)
        cout<<b<<" year's"<<endl;
    else
        cout<<b<<" year"<<endl;
    return 0;
}

int main()
{
    employee a;
    a.input();
    a.output();
    service_year(a);
    return 0;
}


