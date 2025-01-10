#include <iostream>
#include <string>
using namespace std;
void xet(string a, string b){
if(a=="BAO"&&b=="BUA") cout<<"A WON";
if(a=="BUA"&&b=="BAO") cout<<"B WON";
if(a=="KEO"&&b=="BUA") cout<<"B WON";
if(a=="BUA"&&b=="KEO") cout<<"A WON";
if(a=="BAO"&&b=="KEO") cout<<"B WON";
if(a=="KEO"&&b=="BAO") cout<<"A WON";
if(a=="BAO"&&b=="BAO") cout<<"DRAW";
if(a=="KEO"&&b=="KEO") cout<<"DRAW";
if(a=="BUA"&&b=="BUA") cout<<"DRAW";
}
int main(){
string A,B,C,D;
cin>>A>>B;
cin>>C>>D;
string a, b;
cin>>a>>b;
if (a == "PHAI" && b == "PHAI"){
    xet(A,C);
}
if(a=="TRAI" && b == "PHAI"){
    xet(B,C);
}
if(b=="TRAI"&& a =="TRAI"){
    xet(B,D);
}
if(a=="PHAI" && b=="TRAI"){
    xet(A,D);
}
}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    string an[2], binh[2];
    string res_an, res_binh, luot_choi;
    for(int i = 0; i < 2; i++){
        cin >> an[i];
    }
    for(int i = 0; i < 2; i++){
        cin >> binh[i];
    }
    
    cin >> luot_choi;
    if(luot_choi == "RIGHT"){
        res_an = an[0];
    }
    else{
        res_an = an[1];
    }
    
    cin >> luot_choi;
    if(luot_choi == "RIGHT"){
        res_binh = binh[0];
    }
    else{
        res_binh = binh[1];
    }
    
    if(res_an == "BUA"){
        if(res_binh == "BUA") cout << "DRAW!";
        else if(res_binh == "KEO") cout << "An WON!";
        else if(res_binh == "BAO") cout << "Binh WON!";
    }
    else if(res_an == "KEO"){
        if(res_binh == "KEO") cout << "DRAW!";
        else if(res_binh == "BAO") cout << "An WON!";
        else if(res_binh == "BUA") cout << "Binh WON!";
    }
    if(res_an == "BAO"){
        if(res_binh == "BAO") cout << "DRAW!";
        else if(res_binh == "BUA") cout << "An WON!";
        else if(res_binh == "KEO") cout << "Binh WON!";
    }
    return 0;
}
