#include <iostream>
using namespace std;

int main() {

    int a,b,c;  //make three variables;
    cin>>a>>b>>c; //store three variables
    int mn,mx; //mn to store min and mx to store max
    mn=min({a,b,c}); // built in function to get min
    mx=max({a,b,c}); // built in function to get max
    cout<<mn<<' '<<mx;
    return 0;
}
 
