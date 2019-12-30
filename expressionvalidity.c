#include<stdio.h>
#define size 10
#define TRUE 1// gobal declaration of variables
#define FALSE 0// gobal declaration of variables
struct stack
{
    int top;
    char Item[size];
};
struct stack s;
int Intialize(void)
{
    s.top=-1;
}
 int StackTop()
 {
     int x;// it stores the top element of the stack
     x=s.Item[s.top];
     return x;


 }
int Empty()
{
    if(s.top==-1)
        return TRUE;
    else
        return FALSE;
}
void Push(int x)// push is void because it does not return any value
{
    if(s.top==size-1)
        printf("Stack Overerflow");
    else
        s.top=s.top+1;
        s.Item[s.top]=x;
}
int Pop()// pop has integer return type because t is returning an integer(x) to the main
{
    int r;// it stores the deleted element from the array
    if(Empty(s))
        printf("Stack Underflow");
    else
        r=s.Item[s.top];
        s.top--;
        return r;
}
 void ParanthesisCheck(char str[10])
 {
      int valid=TRUE;
     Intialize();
     int i=0;// it stands as an index variable 
     while(str[i]!='\0')
     {
         if(str[i]=='(')
         {
         Push(str[i]);
         }
         else
         {
             if(str[i]==')')
             {
                 if(!Empty())
                    Pop();
             }
             else{
                valid=FALSE;
             break;
         }
         }
         i++;

     }
         if(valid==FALSE)
            printf("Invalid expression");
         else
         {
             if(Empty())
                printf("Valid expression");
             else
                printf("Invalid expression");
         }

     }



 void main()
 {
    char str[10]="(a+(b*c))";
     ParanthesisCheck(str);

 }


