#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("1.add\n 2.sub\n 3.mul\n 4.div\n");
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    printf("enter your choice");
    scanf("%d",&ch);
    
    if(ch==1) 
        c=a+b;
    else
        if (ch==2)
            c=a-b;
        else
            if (ch==3)
                c=a*b;
            else
                if (ch==4)
                    c=a/b;
                else
                printf("invalid choice");
            if ((ch>0)&&(ch<5))
                printf("ans=%d",c); 
    
    return 0;
}
 