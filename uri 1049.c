#include<stdio.h>
#include<string.h>
int main()
{
    char a[20], b[20], c[20];
    scanf("%s%s%s", a, b, c);
    if(a == "vertebrado" && b == "ave" && c == "carnivoro"){
        printf("aguia\n");
    }
    else if(a == 'vertebrado' && b == 'ave' && c == 'onivoro'){
        printf("pomba\n");
    }
    else if(a == 'vertebrado' && b == 'mamifero' && c == 'onivoro'){
        printf("homen\n");
    }
    else if(a == 'vertebrado' && b == 'mamifero' && c == 'herbivoro'){
        printf("pomba\n");
    }

    return 0;
}
