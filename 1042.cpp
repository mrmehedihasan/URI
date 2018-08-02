#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a,b,c;
    vector<int>v;
    vector<int>x;
    cin>>a;
    cin>>b;
    cin>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    x = v;
    sort(v.begin(), v.end());
    for(int i=0; i<3; i++){
        cout << v.at(i) << endl;
    }
    cout << endl;
    for(int i=0; i<3; i++){
        cout << x.at(i) << endl;
    }
    return 0;

}
