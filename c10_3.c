#include <stdio.h>
#include <math.h>

typedef struct{
    double xaxis;
    double yaxis;
}point;

double length(point a,point b){
    point z;

    z.xaxis = b.xaxis-a.xaxis;
    z.yaxis = b.yaxis-a.yaxis;
    return(sqrt(pow(z.xaxis,2)+pow(z.yaxis,2)));
}

double area(point a,point b,point c){
    point z1,z2;
    z1.xaxis = b.xaxis - a.xaxis;
    z1.yaxis = b.yaxis - a.yaxis;
    z2.xaxis = c.xaxis - a.xaxis;
    z2.yaxis = c.yaxis - a.yaxis;
    return(fabs((z1.xaxis*z2.yaxis-z1.yaxis*z2.xaxis)/2));
}

int main(){
    point a,b,c;
    scanf("%lf %lf %lf %lf %lf %lf",&a.xaxis,&a.yaxis,&b.xaxis,&b.yaxis,&c.xaxis,&c.yaxis);
    printf("%f\n",length(a,b));
    printf("%f\n",length(b,c));
    printf("%f\n",length(c,a));
    printf("%f\n",area(a,b,c));

    return 0;
}