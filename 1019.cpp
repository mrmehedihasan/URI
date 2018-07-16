#include <iostream>
using namespace std;

int main(){
    int s;
    cin>>s;
    int m = 0;
    int h = 0;
    while(s>=60){
        s-=60;
        m++;
    }
    while(m>=60){
        m-=60;
        h++;
    }
    cout << h << ":" << m << ":" << s << endl;

    return 0;
}
