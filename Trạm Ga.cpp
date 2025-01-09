/*   Trạm ga
Trong một quốc gia nhỏ có tên là XYZ, có bốn thành phố lớn. Những thành phố này được bố trí trên bản đồ theo cấu trúc một lưới 2x2, mỗi thành phố nằm ở một ô riêng. Thông qua hệ thống đường sắt, mỗi thành phố có thể kết nối với nhau. Mỗi thành phố, nếu được xây dựng trạm ga sẽ được đánh dấu trên bản đồ là ký tự "#", còn thành phố không có trạm ga thì sẽ được đánh dấu là ký tự là  ".".

Quốc gia nhỏ XYZ có tài chính còn eo hẹp nên chỉ xây dựng các tuyến đường sắt giữa hai thành phố có trạm ga và hai thành phố này phải kề nhau (chung cạnh trên bản đồ) . Hai thành phố có trạm ga nhưng không kề nhau thì có thể di chuyển qua lại bằng cách di chuyển thông qua những thành phố trung gian khác. 

Chính phủ XYZ đã xây dựng một số trạm ga ở trong một số thành phố (có ít nhất 2 thành phố có trạm ga), nhưng không biết là hai thành phố có trạm ga khác nhau có thể di chuyển qua lại với nhau được hay không.

Bạn hãy viết chương trình để kiểm tra thử xem là các thành phố có trạm ga có thể di chuyển qua lại được không nhé!

 Input: 

-Dòng thứ nhất, gồm 2 ký tự biểu diễn có trạm ga hay không ở hai thành phố góc trên bên trái và góc trên bên phải.
-Dòng thứ hai, gồm 2 ký tự biểu diễn có trạm ga hay không ở hai thành phố góc dưới bên trái và góc dưới bên phải. 

Output: In ra “Yes” nếu các thành phố có trạm ga có thể di chuyển qa lại được. Ngược lại, in ra “No”.

Input	                          Output
-----------------------------------------------
##                              YES
.#  

*/

#include <iostream>
#include <math.h>
#include <algorithm>
#define MAX 10000
using namespace std;
bool kiemtra(char a[2][2]){
for(int i = 0; i<2;i++){
    for(int j = 0; j<2;j++){
        if(a[i][j]=='#'){
            bool xet = false;
            if(i<1 &&a[i+1][j]=='#') xet = true;
            if(i>0&&a[i-1][j]=='#') xet = true;
            if(j<1 && a[i][j+1]=='#') xet = true;
            if(j>0 && a[i][j-1]=='#') xet = true;
            if(!xet) return false;
        }
    }
}return true;
}
int main(){
char a[2][2];
for(int i = 0; i<2;i++){
    for(int j = 0; j<2;j++){
        cin>>a[i][j];
    }
}
if(kiemtra(a)){
    cout<<"Yes";
}else cout<<"No";
}
