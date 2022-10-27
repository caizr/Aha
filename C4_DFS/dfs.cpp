#include<iostream>
#include<vector>

using namespace std;

vector<int> book(10,0);
vector<int> a(10,0);
int n;
void dft(int step){
    if(step==n+1){
        int data1=a[1]*100+a[2]*10+a[3];
        int data2=a[4]*100+a[5]*10+a[6];
        int data3=a[7]*100+a[8]*10+a[9];
        if(data1+data2 == data3) {
            for(int k=1;k<=n;++k){
                cout<<a[k]<<' ';
            }
            cout<<endl;
        }
        return;
    }
    for(int i = 1;i<=n;++i){
        if(book[i]==0){
            a[step]=i;
            book[i]=1;
            dft(step+1);
            book[i]=0;
        }
       
    }
}
int main(){
    n=9;
    dft(1);
    return 0;
}