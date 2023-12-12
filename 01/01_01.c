#include <unistd.h>
#include <stdio.h>

void combo(){
    int count[] = {0,1,2};
    int j = -1;
    int i = -1;
    int n = 48;

while (1)
{
   // printf("%i-",j);
    while (i++ < 2)
    {
        //printf("%i",i);
        n = 48 + count[i];        
        write(1,&n,1); 
    }
    write(1,"\n",1);   
    i = -1;
 if((count[0] == 7) &&  (count[1] == 8) && (count[2] == 9))
    break;

    if(count[2] == 9){
        
        if (count[1] < 8)
        {
            count[1]++;
            count[2] = count[1];
        }else{
            count[0]++;
            count[1] = count[0]+1; 
            count[2] = count[1];
        }
        
    }
        count[2]++;
} 
    
}

int main(void)
{
    combo();
    return 0;
}