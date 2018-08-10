#include <iostream>

using namespace std;

int main() {

    int t;
    cin>>t;
    int c = 0;
    for(int i = 0; ; i++){
        if(t%2==1){
            cout << t << endl;
            c++;
        }
        t++;
        if(c==6){
            break;
        }
    }

    return 0;
}
