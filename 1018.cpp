#include <iostream>

using namespace std;

int main(){
    int note;
    cin>>note;
    int temp = note;
    int countF100 = 0;
    int  countF50 = 0;
    int countF20 = 0;
    int countF10 = 0;
    int countF5 = 0;
    int countF2 = 0;
    int countF1 = 0;
    while(note>=100){
        note-=100;
        countF100++;
    }
    while(note>=50){
        note-=50;
        countF50++;
    }
    while(note>=20){
        note-=20;
        countF20++;
    }
    while(note>=10){
        note-=10;
        countF10++;
    }
    while(note>=5){
        note-=5;
        countF5++;
    }
    while(note>=2){
        note-=2;
        countF2++;
    }
    while(note>=1){
        note-=1;
        countF1++;
    }
    cout << temp << endl;
    cout << countF100 << " nota(s) de R$ 100,00" <<endl;
    cout << countF50 << " nota(s) de R$ 50,00" <<endl;
    cout << countF20 << " nota(s) de R$ 20,00" <<endl;
    cout << countF10 << " nota(s) de R$ 10,00" <<endl;
    cout << countF5 << " nota(s) de R$ 5,00" <<endl;
    cout << countF2 << " nota(s) de R$ 2,00" <<endl;
    cout << countF1 << " nota(s) de R$ 1,00" <<endl;


    return 0;
}
