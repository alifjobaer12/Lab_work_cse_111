#include<iostream>
using namespace std;

class employee
{
    string n,a;
    int yj,s;
public:
    void put_data()
    {
        cout<<"Name : ";
        cin>>n;
        cout<<"Year of Joining : ";
        cin>>yj;
        cout<<"Salary : ";
        cin>>s;
        cout<<"Address : ";
        cin>>a;
    }
    void get_data()
    {

        cout<<n<<"\t\t"<<yj<<"\t\t\t"<<s<<"\t\t"<<a<<endl;
    }


};
int main()
{
    int b;
    cout<<"Enter the total employee: ";
    cin>>b;
    employee a[b];
    for (int i=0; i<b; i++)
    {
        cout<<"SL: "<<i+1<<endl;
        a[i].put_data();
    }
    cout<<"Name\t\t"<<"Year of Joining\t\t"<<"Salary\t\t"<<"Address\t\t\t"<<endl;
    for (int i=0; i<b; i++)
    {
        a[i].get_data();
    }
    return 0;
}
