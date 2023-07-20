
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h> 
int main(){

    int num1 = 0, num2 = 0, num3 = 0;
    printf( "Please enter value (num1 num2 num 3) : " ) ;
    scanf( "%d %d %d", &num1, &num2, &num3 ) ;
    printf( "Answer = %d", num1+num2+num3 ) ;
    return 0 ;  
}