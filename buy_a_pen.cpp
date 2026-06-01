#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

int r,g,b;
string color;
cin>>r>>g>>b>>color;


if(color=="Red"){
    cout<<min(g,b)<<endl;
}
else if(color=="Green"){
    cout<<min(r,b)<<endl;

}
else{
    cout<<min(r,g)<<endl;

}
    return 0;
}