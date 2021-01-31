//冒泡排序
 #include<iostream>

 using namespace std;

 int main(){
     int num=0;
     cout<<"enter number to sort: "<<endl;
     cin>>num; 
     int data[num]={0};
     cout<<"enter all numbers seperated by space: "<<endl;
     for (int i=0;i<num;++i){
         cin>>data[i];
     }

     return 0;
 }

 int BubbleSort(int* array){
     for(int i=0;i<10-1;++i){
         for (int j=0;j<10-1;++j){
             if ( a[j] <a[j+1])
                swap( a+j, a+j+1 );
         }
     }
 }