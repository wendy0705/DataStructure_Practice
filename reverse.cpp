#include <iostream>
#include <cstring>

using namespace std;
// 把char陣列內容顛倒

void reverse(char p[]){ //在函數參數中，char p[] 與 char* p 是等價的
    int n = strlen(p);
    char* temp = new char[n]; //產生一串temp指標
    for(int i = 0; i < n; i++){ //n = 3
        temp[i] = p[n-i-1]; //ex.temp[0]指向p[2]的值
    };
    for(int i = 0; i < n; i++){
        p[i] = temp[i];
    };
    delete [] temp;
};

void print(char* p){
    cout<<p<<"\n";
};

int main(){
    char s[100] = "12345";
    reverse(&s[2]);
    //reverse全部的方法:
    // 1.
    // char* ptr = s;
    // reverse(ptr); 多此一舉，但仍可行
    // 2.
    // reverse(s); 陣列本身即是指標
    // 3.
    // reverse(&s[0]);
    print(s);
    return 0;
}