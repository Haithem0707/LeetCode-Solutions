#include <stdbool.h>
bool isPalindrome(int x) {
        
    
    int reminder;
    long revers = 0 ;
    int temp = x;
 
    while(temp > 0){
         reminder = temp % 10;
         revers = revers *  10 + reminder;
         temp /=10;
        
    }
      if(revers == x)
            return true;
        else
            return false;
}
