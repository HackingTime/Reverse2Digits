#include <stdio.h>


int main()

{
int i;
int j;
int k;
printf("Enter digits to be reversed(two only!): ");
scanf("%d", &i);

j = i % 10; 
k = i / 10; 

printf("%d%d\n", j, k);

}
