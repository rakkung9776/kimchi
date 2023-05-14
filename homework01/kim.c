#include <stdio.h>
#include "kim.h"

int kim()
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
							screen[b]='Y';
						}
						else if(a==3&&b==5)
						{
							screen[b]='o';
						}
						else if(a==3&&b==6)
						{
							screen[b]='u';
						}
						else if(a==3&&b==7)
						{
							screen[b]=' ';
						}
						else if(a==3&&b==8)
						{
							screen[b]='W';
						}
						else if(a==3&&b==9)
						{
							screen[b]='i';
						}
						else if(a==3&&b==10)
						{
							screen[b]='l';
						}
						else if(a==3&&b==11)
						{
							screen[b]='l';
						}
						else if(a==3&&b==12)
						{
							screen[b]=' ';
						}
						else if(a==3&&b==13)
						{
							screen[b]='D';
						}
						else if(a==3&&b==14)
						{
							screen[b]='e';
						}
						else if(a==3&&b==15)
						{
							screen[b]='v';
						}
						else if(a==3&&b==16)
						{
							screen[b]='e';
						}
						else if(a==3&&b==17)
						{
							screen[b]='l';
						}
						else if(a==3&&b==18)
						{
							screen[b]='o';
						}
						else if(a==3&&b==19)
						{
							screen[b]='p';
						}
						else if(a==4&&b==5)
						{
							screen[b]='Y';
						}
						else if(a==4&&b==6)
						{
							screen[b]='o';
						}
						else if(a==4&&b==7)
						{
							screen[b]='u';
						}
						else if(a==4&&b==8)
						{
							screen[b]='r';
						}
						else if(a==4&&b==9)
						{
							screen[b]=' ';
						}
						else if(a==4&&b==10)
						{
							screen[b]='C';
						}
						else if(a==4&&b==11)
						{
							screen[b]='h';
						}
						else if(a==4&&b==12)
						{
							screen[b]='a';
						}
						else if(a==4&&b==13)
						{
							screen[b]='r';
						}
						else if(a==4&&b==14)
						{
							screen[b]='a';
						}
						else if(a==4&&b==15)
						{
							screen[b]='c';
						}
						else if(a==4&&b==16)
						{
							screen[b]='t';
						}
						else if(a==4&&b==17)
						{
							screen[b]='e';
						}
						else if(a==4&&b==18)
						{
							screen[b]='r';
						}
						else if(a==4&&b==19)
						{
							screen[b]=' ';
						}
						else if(a==4&&b==20)
						{
							screen[b]='a';
						}
						else if(a==4&&b==21)
						{
							screen[b]='n';
						}
						else if(a==4&&b==22)
						{
							screen[b]='d';
						}
						else if(a==5&&b==4)
						{
							screen[b]='L';
						}
						else if(a==5&&b==5)
						{
							screen[b]='e';
						}
						else if(a==5&&b==6)
						{
							screen[b]='a';
						}
						else if(a==5&&b==7)
						{
							screen[b]='r';
						}
						else if(a==5&&b==8)
						{
							screen[b]='n';
						}
						else if(a==5&&b==9)
						{
							screen[b]=' ';
						}
						else if(a==5&&b==10)
						{
							screen[b]='T';
						}
						else if(a==5&&b==10)
						{
							screen[b]='h';
						}
						else if(a==5&&b==11)
						{
							screen[b]='h';
						}
						else if(a==5&&b==12)
						{
							screen[b]='e';
						}else if(a==5&&b==13)
						{
							screen[b]=' ';
						}
						else if(a==5&&b==14)
						{
							screen[b]='I';
						}
						else if(a==5&&b==15)
						{
							screen[b]='m';
						}
						else if(a==5&&b==16)
						{
							screen[b]='p';
						}
						else if(a==5&&b==17)
						{
							screen[b]='o';
						}
						else if(a==5&&b==18)
						{
							screen[b]='r';
						}
						else if(a==5&&b==19)
						{
							screen[b]='t';
						}
						else if(a==5&&b==20)
						{
							screen[b]='a';
						}
						else if(a==5&&b==21)
						{
							screen[b]='n';
						}
						else if(a==5&&b==22)
						{
							screen[b]='c';
						}
						else if(a==5&&b==23)
						{
							screen[b]='e';
						}
						else if(a==6&&b==5)
						{
							screen[b]='O';
						}
						else if(a==6&&b==6)
						{
							screen[b]='f';
						}
						else if(a==6&&b==7)
						{
							screen[b]=' ';
						}
						else if(a==6&&b==8)
						{
							screen[b]='C';
						}
						else if(a==6&&b==9)
						{
							screen[b]='h';
						}
						else if(a==6&&b==10)
						{
							screen[b]='o';
						}
						else if(a==6&&b==11)
						{
							screen[b]='i';
						}
						else if(a==6&&b==12)
						{
							screen[b]='c';
						}
						else if(a==6&&b==13)
						{
							screen[b]='e';
						}
						else if(a==6&&b==14)
						{
							screen[b]='s';
						}
						else if(a==6&&b==15)
						{
							screen[b]='.';
						}
						else if(a==7&&b==4)
						{
							screen[b]='N';
						}
						else if(a==7&&b==5)
						{
							screen[b]='o';
						}
						else if(a==7&&b==6)
						{
							screen[b]='r';
						}
						else if(a==7&&b==7)
						{
							screen[b]='m';
						}
						else if(a==7&&b==8)
						{
							screen[b]='o';
						}
						else if(a==7&&b==9)
						{
							screen[b]='l';
						}
						else if(a==7&&b==10)
						{
							screen[b]=' ';
						}
						else if(a==7&&b==11)
						{
							screen[b]='P';
						}
						else if(a==7&&b==12)
						{
							screen[b]='e';
						}
						else if(a==7&&b==13)
						{
							screen[b]='r';
						}
						else if(a==7&&b==14)
						{
							screen[b]='s';
						}
						else if(a==7&&b==15)
						{
							screen[b]='o';
						}
						else if(a==7&&b==16)
						{
							screen[b]='n';
						}
						else if(a==8&&b==5)
						{
							screen[b]='O';
						}
						else if(a==8&&b==6)
						{
							screen[b]='R';
						}
						else if(a==8&&b==7)
						{
							screen[b]=' ';
						}
						else if(a==8&&b==8)
						{
							screen[b]='G';
						}
						else if(a==8&&b==9)
						{
							screen[b]='r';
						}
						else if(a==8&&b==10)
						{
							screen[b]='e';
						}
						else if(a==8&&b==11)
						{
							screen[b]='a';
						}
						else if(a==8&&b==12)
						{
							screen[b]='t';
						}
						else if(a==8&&b==13)
						{
							screen[b]=' ';
						}
						else if(a==8&&b==14)
						{
							screen[b]='P';
						}
						else if(a==8&&b==15)
						{
							screen[b]='e';
						}
						else if(a==8&&b==16)
						{
							screen[b]='r';
						}
						else if(a==8&&b==17)
						{
							screen[b]='s';
						}
						else if(a==8&&b==18)
						{
							screen[b]='o';
						}
						else if(a==8&&b==19)
						{
							screen[b]='n';
						}
						else if(a==9&&b==4)
						{
							screen[b]='O';
						}
						else if(a==9&&b==5)
						{
							screen[b]='R';
						}
						else if(a==9&&b==6)
						{
							screen[b]=' ';
						}
						else if(a==9&&b==7)
						{
							screen[b]='E';
						}
						else if(a==9&&b==8)
						{
							screen[b]='v';
						}
						else if(a==9&&b==9)
						{
							screen[b]='i';
						}
						else if(a==9&&b==10)
						{
							screen[b]='l';
						}
						else if(a==9&&b==11)
						{
							screen[b]=' ';
						}
						else if(a==9&&b==12)
						{
							screen[b]='P';
						}
						else if(a==9&&b==13)
						{
							screen[b]='e';
						}
						else if(a==9&&b==14)
						{
							screen[b]='r';
						}
						else if(a==9&&b==15)
						{
							screen[b]='s';
						}
						else if(a==9&&b==16)
						{
							screen[b]='o';
						}
						else if(a==9&&b==17)
						{
							screen[b]='n';
						}
						else if(a==9&&b==18)
						{
							screen[b]='.';
						}
						else if(a==11&&b==2)
						{
							screen[b]='D';
						}
						else if(a==11&&b==3)
						{
							screen[b]='e';
						}
						else if(a==11&&b==4)
						{
							screen[b]='v';
						}
						else if(a==11&&b==5)
						{
							screen[b]='e';
						}
						else if(a==11&&b==6)
						{
							screen[b]='l';
						}
						else if(a==11&&b==7)
						{
							screen[b]='o';
						}
						else if(a==11&&b==8)
						{
							screen[b]='p';
						}
						else if(a==11&&b==9)
						{
							screen[b]=' ';
						}
						else if(a==11&&b==10)
						{
							screen[b]='Y';
						}
						else if(a==11&&b==11)
						{
							screen[b]='o';
						}
						else if(a==11&&b==12)
						{
							screen[b]='u';
						}
						else if(a==11&&b==13)
						{
							screen[b]='r';
						}
						else if(a==11&&b==14)
						{
							screen[b]='C';
						}
						else if(a==11&&b==15)
						{
							screen[b]='h';
						}
						else if(a==11&&b==16)
						{
							screen[b]='a';
						}
						else if(a==11&&b==17)
						{
							screen[b]='r';
						}
						else if(a==11&&b==18)
						{
							screen[b]='a';
						}
						else if(a==11&&b==19)
						{
							screen[b]='c';
						}
						else if(a==11&&b==20)
						{
							screen[b]='t';
						}
						else if(a==11&&b==21)
						{
							screen[b]='e';
						}
						else if(a==11&&b==22)
						{
							screen[b]='r';
						}
						else if(a==11&&b==23)
						{
							screen[b]=' ';
						}
						else if(a==11&&b==24)
						{
							screen[b]='w';
						}
						else if(a==11&&b==25)
						{
							screen[b]='e';
						}
						else if(a==11&&b==26)
						{
							screen[b]='l';
						}
						else if(a==11&&b==27)
						{
							screen[b]='l';
						}
						else if(a==12&&b==9)
						{
							screen[b]='G';
						}
						else if(a==12&&b==10)
						{
							screen[b]='O';
						}
						else if(a==12&&b==11)
						{
							screen[b]='O';
						}
						else if(a==12&&b==12)
						{
							screen[b]='D';
						}
						else if(a==12&&b==13)
						{
							screen[b]=' ';
						}
						else if(a==12&&b==14)
						{
							screen[b]='L';
						}
						else if(a==12&&b==15)
						{
							screen[b]='U';
						}
						else if(a==12&&b==16)
						{
							screen[b]='C';
						}
						else if(a==12&&b==17)
						{
							screen[b]='K';
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



