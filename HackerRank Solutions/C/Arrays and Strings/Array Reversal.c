#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for (int arr_i=0; arr_i<num; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for (int arr_i=num-1; arr_i>=0; arr_i--){
        printf("%d ",arr[arr_i]);
  }
    return 0;
}
