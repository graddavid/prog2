#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int palindrom(int n){
    int palidrom = 0;
    while (n)
    {
        palidrom*=10;
        palidrom += n%10;
        n/=10;
    }
    
    return palidrom;
}

int jeLychrelovo(int n, int k){
    if (k == 0)
    {
        return 1;
    }
    int a = n+palindrom(n);
    int b = palindrom(n+palindrom(n));
    if (a == b)
    {
        return 0;
    }
    return jeLychrelovo(a, k-1);
}

int main(int argc, char const *argv[])
{
    int a, b, k;
    scanf("%d%d%d", &k, &a, &b);
    int skupno = 0;
    for (size_t i = a; i <= b; i++)
    {
        if (jeLychrelovo(i, k))
        {
            skupno++;
        }
        
    }
    printf("%d\n", skupno);
    // int a = 605;
    // if(jeLychrelovo(182, 10)){
    //     printf("test test");
    // }
    return 0;
}
