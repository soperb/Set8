#include <stdio.h>
#include <stdlib.h>


struct fig_geom
{
    char nume;
    union fig
    {
        int raza;
        int lungimep;
        struct c
        {
            int lungime;
            int latime;
        }d;

    }z ;
};

void tot(struct fig_geom x)
{
    int perimetru,arie;
    switch (x.nume)
    {
    case 'c':
        printf("Introduceti raza:");
        scanf("%d",&x.z.raza);
        printf("figura: cerc\nperimetru: %.3f\narie: %.3f\n",(float)x.z.raza*2*3.14,(float)x.z.raza*(float)x.z.raza*3.14);
        break;
    case 'p':
        printf("dati lungimea laturii ");
        scanf("%d",&x.z.lungimep);
        printf("figura introdusa este patrat\nperimetrul figurii este:%d \naria este: %d",4*x.z.lungimep,x.z.lungimep*x.z.lungimep);
        break;

    case 'd':
        printf("dati lungimea laturii ");
        scanf("%d",&x.z.d.lungime);
        perimetru=2*x.z.d.lungime;
        arie=x.z.d.lungime;
        printf("dati latimea laturii ");
        scanf("%d",&x.z.d.latime);
        printf("figura: dreptunghi\nperimetru: %d\narie: %d\n",perimetru+2*x.z.d.latime,arie*x.z.d.latime);
        break;
    default:
        printf("caracterul introdus nu reprezinta o figura geometrica");
        exit(1);
    }

}


int main()
{

    struct fig_geom x;
    printf("introduceti tipul figurii geometrice \nc-cerc\np-patrat\nd-dreptunghi \n");
    scanf("%c",&x.nume);
    tot(x);

    return 0;
}
