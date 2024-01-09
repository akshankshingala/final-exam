/*out put  
Enter the value of a and b: 12
21

 swapp a = 21 && b = 12


*/
#include <stdio.h>
void main() {

    int a,b;
    int swap;
    int *a1,*a2;
    
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
   
   
    a1 = &a;
    a2 = &b;
 
    swap = *a1;
   
    *a1 = *a2;
    *a2 = swap;
    printf("\n swapp a = %d && b = %d", a,b);
   
}
