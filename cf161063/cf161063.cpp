#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x, y, z;;
void sq(){

            for (int i = 0; i < x; i++) {
               for (int j = 0; j < x; j++) {
                if ((i == 0 || i == x - 1) || (j == 0 || j == x - 1))printf("*");
                else printf(" ");
                }
             printf("\n");
            }
    }
void print() {
    printf("Enter number : ");
    scanf("%d", &x);
    if (x <= 0) {
        printf("Error");
    }
    else {
        printf("Area is : %d\n", x*x);
        sq();
    }
}

int main() {
    print();
    y = x;
    printf("\n");
    print();
    z = x;
    printf("\n");
    x = y + z;
    printf("Total area is : %d",(y+z)*(y+z));
    printf("\n");
    sq();

   
	return 0;

}