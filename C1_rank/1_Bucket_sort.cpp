// 桶排序 Bucket Sort
#include<iostream>

using namespace std;
int main(){
    int a[10]={0};
    for (int i=0;i<5;++i){
        int score=0;
        cin>>score;
        a[score]++;
    }
    // 下面这一段打印的内容是看了书的
    for (int i=9;i>=0;--i){
        for ( int j=0;j<a[i];++j){
            cout<<i<<" ";
        }
    }
    return 0;
}