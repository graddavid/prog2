#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, stevilo, temp;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (!i)
        {
            stevilo = temp;
            continue;
        }
        if (temp != stevilo)
        {
            printf("0\n");
            return 0;
        }
        
        
    }
    printf("1\n");
    
    return 0;
}
