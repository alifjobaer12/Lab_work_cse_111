#include<iostream>
using namespace std;

class student
{
    string n;
    int c,r,m;
public:
    void set_data()
    {
        cin>>n>>c>>r>>m;
    }
    int calculation()
    {
        if(m<101&&m>79){
                cout<<"A+  ";
            return m;}
        else if (m<76&&m>74){
            cout<<"A-  ";
            return m;}
        else if (m<75&&m>69){
            cout<<"B+  ";
            return m;}
        else if(m<41&&m>0){
            cout<<"F  ";
            return m;}
    }
    void get_data()
    {
        cout<<"Name :"<<n<<endl<<"Class :"<<c<<endl<<"Roll :"<<r<<endl<<"Mark & Grade :"<<calculation()<<endl;
    }
};
int main()
{
    student a;
    a.set_data();
    a.get_data();

    return 0;
}
