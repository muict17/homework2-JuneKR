#include<stdio.h>
int main(){
    int n;
    //insert size of matrix!!
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("=================\n");
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                printf("%d ", arr[i][j]);
            }
        }else if(i % 2 != 0){
            for(int j = n-1; j >= 0; j--){
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}