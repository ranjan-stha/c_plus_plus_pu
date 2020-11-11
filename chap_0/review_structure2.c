#include <stdio.h>

/**
 * A simple example on Structure
 * 
 * author: ranjan-stha
 */

struct Student{
    int rollno;
    float c_marks;
};

int main(){
    struct Student ram;
    
    printf("Enter rollno of Ram ");
    scanf("%d", &ram.rollno);
    printf("Enter C marks of Ram ");
    scanf("%f", &ram.c_marks);
    
    // Display
    printf("\nRoll no is %d", ram.rollno);
    printf("\nC marks is %.2f", ram.c_marks);
    
    printf("\nTotal bytes occupied is %ld", sizeof(ram));
    
    return 0;
}