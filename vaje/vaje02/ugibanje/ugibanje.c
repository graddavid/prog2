#include <stdio.h>

int main(int argc, char const *argv[])
{
    int leva, desna;
    scanf("%d%d", &leva, &desna);

    int priblizek = (leva + desna)/2;
    while (1)
    {
        int priblizek = (leva + desna)/2;
        int temp;
        scanf("%d", &temp);
        if (temp == 1)
        {
            leva = priblizek + 1;
        } else if(temp == -1) {
            desna = priblizek - 1;
        } else if(!temp) {
            if (leva == desna)
            {
                printf("%d", leva);
                return 0;
            }
            printf("%d %d", leva, desna);
            return 0;
        }
        if (leva > desna)
        {
            printf("PROTISLOVJE\n");
            return 0;
        }
        
        
        
        
    }
    

    return 0;
}
