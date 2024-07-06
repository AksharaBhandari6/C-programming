//24 hour digital clock, enter the hour minute and second and it will start working
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int h,m,s;

    int d = 1000;
    printf("Set the time: \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>24||m>60||s>60)
    {
        printf("ERROR!! Try Again!");
    }
 else{

    while(1)
    {
       
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>=24)
        {
            h=0;
        }
        printf("\nClock: %02d:%02d:%02d",h,m,s);
        Sleep(d);
        system("clear");
      
    }
    
}
return 0;
}