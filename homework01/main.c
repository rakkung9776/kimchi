#include <stdio.h>
#include "kim.h"

int main()
{
    title();
    int game = 1;
    int a = 0;
    
    while(game)
    {
        scanf("%d",&a);
        if(a==2)
        {
            kim();
            while(game){
                scanf("%d", &a);
                if(a==1){
                    title();
                    game=0;
                }
                else if(a==2){
                    kim();
                }
                else{
                    game=1;
                }
            }
                game=1;
        }
        if(a==3)
        {
            game=0;
        }
        }
    return 0;
}
