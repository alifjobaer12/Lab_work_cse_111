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
    int service_year()
    {
      cout<<"total year of service : "<<endl;
      int b;
      b=2024-d;
      if (b>1)
      cout<<b<<" year's"<<endl;
      else
        cout<<b<<" year"<<endl;
      return 0;
    }
};

int main()
{
    employee a;
    a.input();
    a.output();
    a.service_year();
    return 0;
}

