#include <stdio.h>
int main(int argc, char const *argv[])
{
    int najvecje = -1;
    int drugonajvecje = -1;
    int n, temp;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (temp >= najvecje)
        {
            drugonajvecje = najvecje;
            najvecje = temp;
        } else if(temp > drugonajvecje){
            drugonajvecje = temp;
        }
        
    }
    printf("%d\n", drugonajvecje);
    


    return 0;
}