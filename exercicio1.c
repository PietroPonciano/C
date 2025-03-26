#include <bits/stdc++.h>

using namespace std;
int main()
{
    double glic;


    cout << "Qual sua glicose? ";
    getline(cin, glic);

    if(glic <= 100 ){
        cout << "Normal" << endl;
    }else if(glic <=140 && glic > 100){
        cout << "Elevado" << endl;
    }else{
        cout << "Diabetes" << endl;
    }

}
