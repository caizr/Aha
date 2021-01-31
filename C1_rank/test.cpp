#include<iostream>
// 冒泡排序
// decleration
int swap(int*,int*);
using namespace std;
 int main(){
     
     int a[10]={1,2,4,5,6,7,8,9,11,12};

     for(int i=0;i<10-1;++i){
         for (int j=0;j<10-1;++j){
             if ( a[j] <a[j+1])
                swap( a+j, a+j+1 );
         }
     }
     for (int i =0;i<10;++i){
         cout<< a[i]<<endl;
     }
     cout<<"hello "<<endl;
     return 0;
 }
 int swap(int* a,int* b){
     int temp = *a;
     *a=*b;
     *b=temp;
     return 1;

 }