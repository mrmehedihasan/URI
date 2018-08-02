#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double arr[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
    int a,b;
    cin>>a>>b;
    cout << fixed;
    cout <<setprecision(2) << "Total: R$ " << arr[a]*b << endl;
    return 0;
}
