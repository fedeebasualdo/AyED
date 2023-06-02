#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
    float c=0;
    int k=0;
    for(k=0; k<229826; k++){
        c+= ((pow((-1), k) / ((2*k)+1))*4);
       }
    cout.precision(7);
    cout<<"Pi: "<<c<<endl;
    cout<<k;
    return 0;
}


