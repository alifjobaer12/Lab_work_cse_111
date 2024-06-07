#include <iostream>
using namespace std;
class myClass {
public:
    int u;
    int v;
    myClass() {cin>>u>>v;}
    myClass operator--() {
        --u;
        --v;
        return *this;
    }
};
int main() {
    myClass obj;
    cout << "Before : u = " << obj.u << ", v = " << obj.v << endl;
    --obj;
    cout << "After : u = " << obj.u << ", v = " << obj.v<< endl;
    return 0;
}
