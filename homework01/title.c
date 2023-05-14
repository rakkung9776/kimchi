#include <stdio.h>
#include "kim.h"

int title()
{
        char screen[5000];

        int a = 0;
        while(a<15)
        {
                int b=0;
                while(b<30)
                {
                        if(a==0||a==14)
                        {
                                screen[b]='*';
                        }
                        else if(b==0||b==29)
                        {
                                screen[b]='*';
                        }
                        else if(a==3&&b==4)
                        {       
                                screen[b]='*';
                        }
                        else if(a==3&&b==5)
                        {       
                                screen[b]='C';
                        }
                        else if(a==3&&b==6)
                        {       
                                screen[b]='O';
                        }
                        else if(a==3&&b==7)
                        {       
                                screen[b]='N';
                        }
                        else if(a==3&&b==8)
                        {       
                                screen[b]='T';
                        }
                        else if(a==3&&b==9)
                        {       
                                screen[b]='R';
                        }
                        else if(a==3&&b==10)
                        {       
                                screen[b]='O';
                        }
                        else if(a==3&&b==11)
                        {       
                                screen[b]='L';
                        }
                        else if(a==3&&b==13)
                        {       
                                screen[b]='O';
                        }
                        else if(a==3&&b==14)
                        {       
                                screen[b]='N';
                        }
                        else if(a==3&&b==15)
                        {       
                                screen[b]='E';
                        }
                        else if(a==3&&b==16)
                        {       
                                screen[b]='"';
                        }
                        else if(a==3&&b==17)
                        {       
                                screen[b]='S';
                        }
                        else if(a==3&&b==19)
                        {       
                                screen[b]='L';
                        }
                        else if(a==3&&b==20)
                        {       
                                screen[b]='I';
                        }
                        else if(a==3&&b==21)
                        {       
                                screen[b]='F';
                        }
                        else if(a==3&&b==22)
                        {       
                                screen[b]='E';
                        }
                        else if(a==3&&b==23)
                        {       
                                screen[b]='*';
                        }
                        else if(a==6&&b==9)
                        {       
                                screen[b]='1';
                        }
                        else if(a==6&&b==10)
                        {       
                                screen[b]='.';
                        }
                        else if(a==6&&b==11)
                        {       
                                screen[b]='S';
                        }
                        else if(a==6&&b==12)
                        {       
                                screen[b]='T';
                        }
                        else if(a==6&&b==13)
                        {       
                                screen[b]='A';
                        }
                        else if(a==6&&b==14)
                        {       
                                screen[b]='R';
                        }
                        else if(a==6&&b==15)
                        {       
                                screen[b]='T';
                        }
                        else if(a==8&&b==9)
                        {       
                                screen[b]='2';
                        }
                        else if(a==8&&b==10)
                        {       
                                screen[b]='.';
                        }
                        else if(a==8&&b==11)
                        {       
                                screen[b]='M';
                        }
                        else if(a==8&&b==12)
                        {       
                                screen[b]='E';
                        }
                        else if(a==8&&b==13)
                        {       
                                screen[b]='N';
                        }
                        else if(a==8&&b==14)
                        {       
                                screen[b]='U';
                        }
                        else if(a==10&&b==9)
                        {       
                                screen[b]='3';
                        }
                        else if(a==10&&b==10)
                        {       
                                screen[b]='.';
                        }
                        else if(a==10&&b==11)
                        {       
                                screen[b]='E';
                        }
                        else if(a==10&&b==12)
                        {       
                                screen[b]='X';
                        }
                        else if(a==10&&b==13)
                        {       
                                screen[b]='I';
                        }
                        else if(a==10&&b==14)
                        {       
                                screen[b]='T';
                        }
                        else
                        {
                                screen[b]=' ';
                        }
                        b+=1;
                }
                screen[30]='\n';
                printf("%s",screen);
                a+=1;
        }
        return 0;
}
