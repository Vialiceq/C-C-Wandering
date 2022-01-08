#include <iostream>

int c(int &a){

    if (a>10) {
        return a=20;}
    else 
    {
     return a=0;
    }
    
}

using namespace std;

int main(){
    int a=1;
    c(a);
    cout<<a;
    return 0;
}