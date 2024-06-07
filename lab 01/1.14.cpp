#include<iostream>
using namespace std;
void mark (int a)
{
    if(a>=60)
        cout<<"First"<<endl;
    else if (a<51&&a>49)
        cout<<"Second"<<endl;
    else if (a<41&&a>39)
        cout<<"Third"<<endl;
   else if (a<=40)
        cout<<"Fall"<<endl;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    mark(x);
    mark(y);
    mark(z);
    return 0;
}


