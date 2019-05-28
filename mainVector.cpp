#include<bits/stdc++.h>
#include "vector.h"
using namespace std;
int main()
{
    Vector <string> a;
    a.push_back("A");
    a.push_back("B");
    a.push_back("C");
    a.resize(2);
    cout<<"size: "<<a.size()<<endl;
    a.Find_data("c");
    a.display();
    return 0;
}
