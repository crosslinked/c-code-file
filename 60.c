#include <stdio.h>
 
int main() {
    int arr[] = {2, 4, 6, 8};
    int arrLen = sizeof arr / sizeof arr[0];
     printf("Rishabh Jain\n");
    for (int i = 0; i < arrLen; i++) {
        printf("Elemnt at index %d is %d\n", i,arr[i]);
    }
     
    return 0;
}