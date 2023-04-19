#include<stdio.h>

int top=-1,stack[20],max;
void push();
void pop();
void peek();
void display();

int main()
{
    int x;
    printf("enter max size of array:");
    scanf("%d",&max);
    stack[max];
    while(1)
    {
        printf("\n\n1:PUSH 2:POP 3:PEEK 4:EXIT\n");
        printf("enter a function:");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                exit(1);

            default:
                printf("wrong choice entered");
        }
    }

return 0;
}