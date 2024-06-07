#include<iostream>
using namespace std;

class online_shopping_platfrom
{
    int p;

    string n,d;
public:
     int t=1;
    void details_input()
    {
        cin>>n>>d>>p;
    }
    void get_name()
    {
        cout<<n<<endl;
    }
    void get_data()
    {
        cout<<"Name : "<<n<<endl<<"Description : "<<d<<endl<<"Price : "<<p<<endl;
    }
    ~online_shopping_platfrom()
    {
        if(t>=1)
        {
            cout<<endl<<"Thank You for your visit (^.^) "<<endl;
            cout<<"\t\t\t\t program writer ---J.I.AliF "<<endl;
            t=0;
        }

    }
};
int main()
{
    int a,b;
    cout<<"How many product you want to add : "<<endl;
    cin>>a;
    online_shopping_platfrom product[a];
    for (int i=0; i<a; i++)
    {
        cout<<"SL : "<<i+1<<endl;
        product[i].details_input();
    }
    cout<<"\t\tAll Product\t\t "<<endl;
    for (int i=0; i<a; i++)
    {
        cout<<"SL : "<<i+1<<endl;
        product[i].get_name();
    }
    cout<<"Which product details you want to know :"<<endl;

    cin>>b;
    product[b].get_data();

    return 0;
}
