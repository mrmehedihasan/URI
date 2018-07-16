#include <iostream>
using namespace std;

int main(){
    int d;
    cin>>d;
    int m = 0;
    int y = 0;
    while(d>=265){
        d-=365;
        y++;
    }
    while(d>=30){
        d-=30;
        m++;
    }
    cout << y <<" ano(s)"<<endl;
    cout << m <<" mes(es)"<<endl;
    cout << d <<" dia(s)"<<endl;
    return 0;
}
