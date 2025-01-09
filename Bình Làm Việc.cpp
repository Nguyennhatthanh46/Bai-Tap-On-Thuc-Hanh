/*
Ngay khi vừa đỗ đại học Bình đã đi xin việc làm thêm để phụ giúp gia đình trang trải cuộc sống. Do tình  hình kinh tế đang khó khăn, doanh nghiệp cắt giảm giờ làm và sa thải nhân công hàng loạt nên dù Bình xin vào làm ở một công ty công nghệ trong mảng thương mại điện tử nhưng cuối cùng lại nhận được công việc làm bốc vác trong kho. Nhà kho đang có rất nhiều thùng hàng xếp chồng lên nhau. Các chồng thùng hàng này được xếp vào cái nhà kho hình chữ nhật gồm có H hàng, mỗi hàng có W chồng thùng. Công việc đầu tiên Bình được giao là đem bớt các thùng trong kho này sang nhà kho kế bên xếp sao cho tất cả các chồng thùng còn lại đều có số thùng bằng nhau. Có như vậy thì thủ kho mới dễ kiểm đếm số thùng hàng trong kho được.

Để tiết kiệm công sức, Bình cần tính số thùng tổi thiểu cần phải khiêng sang nhà kho kế bên. Các bạn hãy tính giùm Bình nhé.

INPUT
Dòng đầu tiên là hai số nguyên dương H và W (không số nào lớn quá 100)

H dòng tiếp theo, mỗi dòng chứa W số nguyên. Đây là số thùng ở mỗi chồng.

OUTPUT
Số thùng tối thiểu Bình cần phải khiêng qua nhà kho kế bên.
VÍ DỤ

Input	                          Output
-----------------------------------------------
2 3
2 2 3                           2
3 2 2
-----------------------------------------------
3 3
99 99 99
99 0 99                         792
99 99 99
-----------------------------------------------
3 2
4 4
4 4                             0
4 4

*/
#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;


void Input(int a[MAX][MAX],int &n,int &m){
cin>>n;
cin>>m;
for(int i = 0; i < n;i++){
    for(int j = 0; j<m;j++){
        cin>>a[i][j];
    }
}
}
int Fun(int a[MAX][MAX],int &n,int &m){
int gan = a[0][0];
for(int i = 0; i < n;i++){
    for(int j = 0; j < m; j++)
        if(gan>=a[i][j]){
            gan = a[i][j];
        }
    }
    int tong = 0;
for(int i = 0; i < n;i++){
    for(int j = 0; j < m; j++){
        tong+=a[i][j]-gan;
    }
} return tong;
}

int main(){
int a[MAX][MAX];
int n;
int m;
Input(a,n,m);
cout<<Fun(a,n,m);
return 0;
}
