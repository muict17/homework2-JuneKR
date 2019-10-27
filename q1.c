#include<stdio.h>
int main(){
    int n, result = 0, armNum = 0, pow = 1;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //armNum
    for(int j = n-1 ; j >= 0; j--){
        armNum += arr[j] * pow;
        pow *= 10;
    }
    for(int x = 0; x < n; x++){
        arr[x] = arr[x] * arr[x] * arr[x];
        result += arr[x];
    }
    printf("\n");
    if(result == armNum){
        printf("ArmStrong Number!!");
    }else{
        printf("It's not ArmStrong Number");
    }
    return 0;
}