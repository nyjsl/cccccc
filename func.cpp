// 仅在c++中 int arr[] 等价于 int* arr
int sum_arr(int arr[],int n);

int sum_arr(const int* begin,const int* end);

int sum_arr(int arr[],int n){
    int total = 0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }
    return total;
}
//通过区间计算
int sum_arr(const int* begin,const int* end){
    int total = 0;
    for(const int* cur = begin;cur!= end;cur++){
        total+= *cur;
    }
    return total;
}
