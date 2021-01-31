//冒泡排序
 #include<iostream>
//声明
int BubbleSort(int *,int);
int swap(int *,int *);
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
     BubbleSort(data,num);
     for (int i=0;i<num;++i){
         cout<<data[i]<<endl;
     }

     return 0;
 }

 int BubbleSort(int* array,int num){
     for(int i=0;i<num-1;++i){
         //这里j的条件搞错过
         for (int j=0;j<num-1-i;++j){
             if ( array[j] <array[j+1])
                swap( array+j, array+j+1 );
         }
     }
     return 1;
 }

  int swap(int* a,int* b){
     int temp = *a;
     *a=*b;
     *b=temp;
     return 1;

 }