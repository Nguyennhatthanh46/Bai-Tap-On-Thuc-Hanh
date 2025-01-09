/*
Bạn Bình vừa gặp một đề Nhập môn lập trình rất dễ như sau: Cho số nguyên dương N, tìm 4 số nguyên dương a, b, c, d sao cho ab+cd=N. Sở dĩ bài này dễ vì có thể có rất nhiều đáp án.
Ví dụ 2*3 + 2*2 = 10 mà 2*1 + 2*4 thì cũng là 10. Đề dễ thì để Bình làm, còn công việc của các bạn là đếm xem với một số nguyên dương N như vậy thì có tổng cộng bao nhiêu đáp án thỏa mãn yêu cầu.

INPUT
Một số nguyên có giá trị từ hai đến hai chục ngàn.

OUTPUT
Số đáp án có thể có của bài toán Bình cần làm.

INPUT           OUTPUT          GIải thích     
-----------------------------------------------------------------------
4               8                8 đáp án có thể có đó là: 1*1+1*3=4 
                                                           1*1+3*1=4
                                                           1*2+1*2=4
                                                           1*2+2*1=4
                                                           1*3+1*1=4
                                                           2*1+1*2=4
                                                           2*1+2*1=4
                                                           3*1+1*1=4      	      
-----------------------------------------------------------------------
292             10886
-----------------------------------------------------------------------
19876	          2219958

*/
#include <iostream>
#include <cmath>
using namespace std;

int tinh(int n){
    int dem = 0;
for(int i = 1;i*i<=n;i++){
    if(n%i==0){
    if(i*i==n){
        dem++;
    }else dem+=2;
}
}return dem;
}

int main()
{
    int n;
    cin>>n;
    int dem = 0;
    for(int x = 0;x<=n;x++){
        dem+=tinh(x)*tinh(n-x);
    }
    cout<<dem;
    return 0;
}
