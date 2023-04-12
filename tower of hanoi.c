//tower of hanoi
#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);
int main()
{
    int n;
    printf("\n enter no of disk=");
    scanf("%d",&n);   //S=SOURCE   A=AUXILARY   D=DESTINATION
    TOH(n,'S','A','D');
}
void TOH(int n,char S,char A,char D)
{
    if(n==1)
    {
        printf("\n disk 1 transfer from %c to %c:",S,D);
        return 0;
    }
    else
    {
        TOH(n-1,S,D,A);
        printf("\n %d disk transfer from %c to %c.",n,S,D);
        TOH(n-1,A,S,D);
    }

}
