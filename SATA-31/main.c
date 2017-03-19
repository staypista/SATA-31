#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100]={0};
    int i, j=99;
    for(i=0;i<100;i++){
        for(j++;;j++){
            if(!(j%37) && !(j%43)) {
                break;
            }
        }
        array[i]=j;
    }
    for(i=0;i<100;i++ )printf("%d\t", array[i]);

    printf("\n\n");
    for(i=99;i>0;i--){
        if(!(array[i]%3)) break;
    }
    printf("Legnagyobb 3-al oszthato tomb elem:%d", array[i]);

    printf("\n\n");
    printf("%d", array[1]); /** Mivel a tömb sorban van.*/
    return 0;
}

