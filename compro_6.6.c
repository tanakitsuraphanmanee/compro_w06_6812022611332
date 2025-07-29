#include <stdio.h> 

int main() {
    int a = 5, b = 2; //ตัวแปร
    float x = 3.0, y = 4.5;

    int r1 = a++*b+(int)y % 3; //คำนวณ r1
    printf("r1 %d\n" , r1 ); //แสดงผลลัพธ์
    
    int r2 = (a>b) && ((int)x/b<2);//คำนวณ r2
    printf("r2 = %d\n" , r2); 

    float r3 =(++x *y -a/2);
    printf("r3 = %.2f\n" ,r3);

    float r4 =(( x +=1.5 )>y)||(b-->0);
    printf("r4 = %.2f\n" ,r4);

    return 0;
}