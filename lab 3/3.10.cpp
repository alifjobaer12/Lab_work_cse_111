#include <iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string s ;
    getline(cin,s);
    int i;
for (i = 0; s[i] != '\0'; ++i);
    cout<<i;
    return 0;
}
