#include<iostream>
using namespace std;
void arg(char a)
{
    if (a>='0' && a<='9')
        cout<<"number"<<endl;
    else if (a>='A' && a<='Z')
        cout<<"capital letter"<<endl;
    else if (a>='a' && a<='z')
        cout<<"small letter"<<endl;
    else
        cout<<"symbol"<<endl;
}
int main()
{
    char n;
    cin>>n;
    arg(n);
    return 0;
}
