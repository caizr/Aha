//快速排序
 #include<iostream>
//声明
int QuickSort(int*,int);
int SeqProcess(int *,int,int);
int swap(int*,int*);
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
    QuickSort(data,num-1);
    for (int i=0;i<num;++i){
        cout<<data[i]<<endl;
    }
    return 0;
 }

 int QuickSort(int* array, int num){
     // array: 数组
     // num: 数组的长度
     SeqProcess(array,0,0+num);
    return 0;
 }

 int SeqProcess(int* array, int begin, int end){
     int len_seq=end-begin;   //序列的长度 如果3个元素，那就是2的len
     int position = 0;          //交换的位置标记
     int head_num=array[begin]; //序列的第一个数字作为对比数字
     int head_guard=begin;      //头部哨兵
     int tail_guard=end;        //尾部哨兵
     
    while(head_guard!=tail_guard){
        // 尾部哨兵移动
        for(; tail_guard!=begin; --tail_guard){
            if ( *(array+tail_guard) <head_num )
                break;
        }
        //头部哨兵移动
        for(; head_guard!=tail_guard; ++head_guard){
            if ( *(array+head_guard) >head_num)
                break;
        }

        // 哨兵没有碰面，交换它们的值，并且需要继续移动
        if(head_guard!=tail_guard){
            swap(  array+head_guard,  array+tail_guard   );
        }else{
            position=head_guard;
            swap(  array+begin, array+head_guard);
        }
    }

    
    //打印
    for (int i=0;i<10;++i){
        cout<<array[i]<<' ';
    }
    cout<<endl;
    //递归处理
     if(position-1 != begin){   //当序列不能划分的更小时，停止迭代
         SeqProcess(array,begin, position-1);
     }else{
        return 1;
     }
     if(position+1 !=end){
         SeqProcess(array,position+1, end);
     }else{
        return 1;
     }
     return 0;
 }

int swap(int* a,int* b){
     int temp = *a;
     *a=*b;
     *b=temp;
     return 1;
 }