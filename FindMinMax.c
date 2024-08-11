#include<stdio.h>

int maxElement();
int minElement();
int main(){
    int Arr[] = {9, 6, 5, 4, 7, 3, 8, 1, 2, 10};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int maxelement = maxElement(Arr, n);
    int minelement = minElement(Arr, n);

    printf("In Given Array Maximum Element is %d\n", maxelement);
    printf("In Given Array Minimum Element is %d\n", minelement);
}

int maxElement(int arr[],int n){
    int maxe = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i]>maxe)
            maxe = arr[i];
    }
    return maxe;
}

int minElement(int arr[],int n){
    int mine = arr[0];
    for (int i = 0; i < n;i++){
        if(arr[i]<mine)
            mine = arr[i];
    }
    return mine;
}