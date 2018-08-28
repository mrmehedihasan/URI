#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {

  float a,b,c;
  cin>>a>>b>>c;
  cout<<fixed;
  if(a+b>c && b+c>a && c+a>b){
    cout << setprecision(1) << "Perimetro = "  << a+b+c << endl;
  }else{
    cout << setprecision(1) << "Area = "  << .5*(a+b)*c << endl;
  }

  return 0;
}
