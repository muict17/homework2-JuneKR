#include<stdio.h>
int main(){
    //h เข็มสั้นบอก ชม m คือเข็มยาวบอกนาที
    int h, m;
    float x = 0, y = 0, degree = 0;
    scanf("%d %d", &h ,&m);
    y = 6 * m;
    x = (0.5*((60*h)+m) - y);
    if(x < 0 ){
        x *= -1;
    }
    printf("%.2f ", x);
    return 0;
}