#include <iostream>
#include <cmath>
using namespace std;
bool xet(long long a){
for(long long i = 0;i*i<=a;i++){
    if(i*i==a) return true;
}
return false;
}
int main() {
long long L, R;
cin >> L >> R;
int dem = 0;
for(long long i = L;i<=R;i++){
    if(xet(i)&&i%9==0) dem++;
}
cout<<dem;
return 0;
}
