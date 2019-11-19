#include<stdio.h>

struct timp
{
    int ora;
    int minut;
    int secunda;
};

void CatECeasul(struct timp* a)
{

    do
    {
        printf("Introduceti ora: ");
        scanf("%d",&(*a).ora);
    }
    while((*a).ora>23||(*a).ora<0);



    do
    {
        printf("Introduceti minutul: ");
        scanf("%d",&(*a).minut);
    }
    while((*a).minut>59||(*a).minut<0);



    do
    {
        printf("Introduceti secunda: ");
        scanf("%d",&(*a).secunda);
    }
    while((*a).secunda>59||(*a).secunda<0);

}

struct timp CatENasul(struct timp a, struct timp b)
{
    struct timp c;
    if((a.ora+b.ora)>24)
    {
        c.ora=a.ora+b.ora-24;
    }
    else
        c.ora=a.ora+b.ora;

    if((a.minut+b.minut)>59)
    {
        c.ora=c.ora+1;
        c.minut=a.minut+b.minut-60;
    }
    else
        c.minut=a.minut+b.minut;

    if((a.secunda+b.secunda)>59)
    {
        c.minut=c.minut+1;
        c.secunda=a.secunda+b.secunda-60;
    }
    else
        c.secunda=a.secunda+b.secunda;
        return c;

}

int main()
{
struct timp t1,t2,t3;
CatECeasul(&t1);
CatECeasul(&t2);
t3=CatENasul(t1,t2);
printf("Current Time1: %2.d:%2.d:%2.d\n",t1.ora,t1.minut,t1.secunda);
printf("Current Time2: %2.d:%2.d:%2.d\n",t2.ora,t2.minut,t2.secunda);
printf("Current Time3: %2.d:%2.d:%2.d\n",t3.ora,t3.minut,t3.secunda);
}
