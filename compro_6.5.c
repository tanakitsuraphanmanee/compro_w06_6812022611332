#include <stdio.h>

int main() {
    int x = 12, y = 7, z = 12;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    

    printf("%d\n", x > y);  
   
    printf("%d\n", x < z);  
   
    printf("%d\n", x == z); 
   
    printf("%d\n", x != y); 
    
    printf("%d\n", !(2*5 >= y) || (5 != (5/3))); 
    
    printf("%d\n", !(x < y)); 
    
    printf("%d\n", (x + y) > (z * 2)); 
   
    printf("%d\n", (x % 2 == 0) || (y % 2 == 1));
    
    printf("%d\n", (x > y) && (z < y)); 
   

    return 0;
}