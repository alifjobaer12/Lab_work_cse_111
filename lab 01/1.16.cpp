#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
     if (a>='a'&&a<='z')
        cout<<"its a small letter";
    else if (a>='A'&&a<='Z')
        cout<<"its a capital letter";
   else if (a>='0'&&a<='9')
        cout<<"number";
    else
        cout<<"its a special symbol";
    return 0;
}
