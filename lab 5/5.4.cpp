#include<iostream>
using namespace std;
class card
{
    string bt,a;
    int n;
public:
    int store()
    {
        cin>>bt>>a>>n;
        return 0;
    }
    void display()
    {
        cout<<endl<<"Book Title : "<<bt<<endl<<"Author : "<<a<<endl<<"No Of Book On Hand : "<<n<<endl;
    }
};
int main()
{
    card a;
    a.store();
    a.display();
    return 0;

}
