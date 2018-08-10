#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    int mi = min(x,y);
    int mx = max(x,y);
    int sum = 0;
    for(int i=mi+1; i<mx; i++){
        if(i%2==1 || i%2==-1){
            sum+=i;
        }
    }
    cout << sum << endl;



    return 0;
}
