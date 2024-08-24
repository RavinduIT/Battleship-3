#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    double a, b, k, n, handfora, handforb, newbox, newboxhand, oldmarble;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &k);
    scanf("%lf", &n);
    handfora = rand() % 2;    //if 0 its right hand if 1 its left hand
    
    while(n) { 
     if(handfora == 0){
        handforb = 1;
        }else {
          handforb = 0;
       }

       newbox = a + b;
       if( a > b ){
            oldmarble += b;
          b = 0;
         if(handfora == 0){
                handfora = 1;
            }
     }else if (a < b){
        oldmarble += a;
        a = b;
        b = 0;
          if(handforb == 0){
            handforb = 1;
           }
       }
        newboxhand = 0;
        newbox = k * (newbox);
       b = a;
        a = newbox;
       handfora = newboxhand;
       handforb = 1;
       n--;
    }
    printf("%.6lf", oldmarble/a);
    return 0;  
}




/*min(a,b)
new_box_count=a+b
a box=0
b box=0
//removing a min(a,b) box
max(a,b)=max eke thibba gana refill wenva
if max(a,b) in right hand{
move it to left hand}else {keep it
and get a+b to right hand
}

a+b box = 

*/
