#include  <stdio.h>
int stack[100],n,i,j,choice=0,top=-1;
void push();
void pop();
void show();
void main()
{
    printf("Enter the range of the array:");
    scanf("%d",&n);
    printf("Stack operation using array:");
    printf("\n");
    while (choice!=4)
    {
        printf("Choose one option from below:");
        printf("\n1.Push \n2.Pop \n3.Show \n4.Exit");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            printf("Exitng");
            break;
        }

        default:
           {
            printf("Please Enter a valid choice.");
           }
        };
    }

}
void push ()
{
    int val;
    if(top==n)
    printf("overflow");
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop ()
{
    if(top==-1)
    printf("underflow");
    else
    {
        top=top-1;
    }
}
void show()
{
    for(i=top; i>=0; i--)
    {
        printf("%d\n",stack[i]);
    }
    if (top==-1)
    {
        printf("Stack is empty.");
    }
}
