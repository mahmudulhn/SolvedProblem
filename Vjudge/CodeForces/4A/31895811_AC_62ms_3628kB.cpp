    #include<stdio.h>
    int main()
    {
        int a;
        scanf("%d",&a);
        if(a==2)
            printf("NO\n");
        else if(a%2==0)
            printf("Yes\n");
        else
            printf("NO\n");
        return 0;
    }