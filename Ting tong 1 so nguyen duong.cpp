#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
long long n; cin>>n;
double tong= 0;
double mauso = 0;
for(int i = 1;i<=n;i++){
 mauso+=i;
 tong+=1.0*1/mauso;
}cout<<setprecision(10)<<tong<<endl;
}
