#include <iostream>
using namespace std;
int main(){
    int a, b;
    a = 12; b= 5;
    a++;
    a+=1;
    a= a+1;

    b--;
    b-=1;
    b= b-1;

    cout << ((a !=b) && (b>5)) << endl;
}
    