#include <stdio.h>

int main() {
    char name[] = "Ivy Lariosa";
    printf("STRING:\n");
    printf("My name is %s.\n", name);

    int num = 23;
    printf("INT:\n");
    printf("I am %d.\n", num);

    float weight = 45.0;
    printf("FLOAT:\n");
    printf("I weigh %.2f.\n", weight);

    double gpa = 1.38;
    printf("DOUBLE:\n");
    printf("I have a gpa of %lf\n", gpa);

    char blood_type = 'O';
    printf("CHAR:\n");
    printf("I think my blood type is %c.\n", blood_type);

    int hex_number = 255;
    printf("INT TO HEX:\n");
    printf("255 to %x.\n", hex_number);

    void *ptr = &num;
    printf("POINTER ADDRESS:\n");
    printf("Pointer address of ptr: %p\n", ptr);
    
    return 0;
}