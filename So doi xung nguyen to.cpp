#include <iostream>
#include <cmath>
using namespace std;

bool nt(int n){
    if(n!=2 && n%2==0) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

bool dx(long long x){
    long long tmp1 = x, tmp2 = 0;
    while(tmp1 > 0){
        tmp2 = tmp2*10 + tmp1%10;
        tmp1 /= 10;
    }
    if(tmp2 == x) return 1;
    else return 0;
}

int main() {
    long long n;
    cin >> n;
    while(1){
        n++;
        if(dx(n) && nt(n)){
            cout << n;
            return 0;
            
        }
    }
    return 0;
}
