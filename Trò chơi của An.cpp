/*
Trò chơi của An
Trò chơi Flappy Bird đã trở thành một hiện tượng toàn cầu, với cơ chế điều khiển đơn giản nhưng những thách thức mà trò chơi tạo ra rất ức chế. 
Trong trò chơi, mục tiêu của người chơi là hướng dẫn một chú chim bay qua một loạt các cột đứng (cột dài vô tận) , mỗi cây cột đứng thứ i đều có vị trí khoét lỗ từ vị trí có chiều cao ai đến bi (tính từ mặt đất).
An đang muốn thực hiện lại trò chơi này, nhưng khổ nỗi là tính năng trò chơi của An vẫn chưa đầy đủ (không thể điều khiển chú chim lên xuống như trò chơi gốc) mà tính năng chỉ là chọn vị trí bắt đầu (vị trí nguyên) của chú chim, sau đó là chú chim sẽ bay theo đường thẳng. Nếu chú chim bay qua tất cả N cột mà không chạm vào cột nào thì sẽ là một lần chơi thắng.

An tự hỏi không biết có bao nhiêu vị trí bắt đầu mà để thắng trò chơi này. Bạn hay giúp An trả lời câu hỏi nhé!

Input: 
-Dòng đầu tiên chứa số nguyên N (1≤N≤10^5) là số lượng cột trong trò chơi.
-Dòng tiếp theo chứa N số nguyên a1,a2,…,aN với ai (1≤ai≤10^9) là vị trí bị khoét thấp nhất của cây cột thứ i.
-Dòng cuối cùng chứa N số nguyên b1,b2,…,bN với bi (1≤bi≤10^9) là vị trí bị khoét cao nhất của cây cột thứ i.

Ouput:
Số lượng vị trí có thể thắng trong trò chơi này.
Input	                          Output
-----------------------------------------------
3                               2
3 2 5
6 9 8

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#define MAX 100000
using namespace std;

int main(){
int n;
cin>>n;
int a[MAX];
int b[MAX];
for(int i = 0; i<n;i++){
    cin>>a[i];
}
for(int i = 0; i < n; i++){
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+n);
int vtthap = a[n - 1];
int vtcao = b[0];
int dem = max(0,vtcao-vtthap+1);
cout<<dem;
}
