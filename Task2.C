#include <stdio.h>

// Adding the assignment function
int toggleBit(int num, int position) {
    return num ^ (1 << position);
}

int main() {
    int myNum = 5; // Binary: 0101
    int pos = 1;   // We want to toggle the bit at index 1
    
    printf("Original: %d\n", myNum);
    printf("After Toggling bit %d: %d\n", pos, toggleBit(myNum, pos));
    
    return 0;
}