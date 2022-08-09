#include <stdio.h>

int main() {
int n1 = 0, n2 = 1, n3 = 0;
int value;

printf("Write down a number: ");
scanf("%d", &value);

while (value > n3) 
{
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
}

if (value == 0 || value == n3) 
{
    printf("The number %d", value);
    printf(" is in fibonacci");
}
else
{
    printf("The number %d", value);
    printf(" is not in fibonacci");
}

}