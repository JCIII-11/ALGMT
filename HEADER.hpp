#include"TOOLS.h"
#include<math.h>
#include<stdlib.h>
#include<conio.h>

short com;

void setcol()
{
    int i;
    for(i = 0;i < 16;i++)
    {
        ccolor(i);
        printf("%d - %c",i,219);
        printf("\n");
    }
    ccolor(cc);
    scanf("%d",&com);
    cc = com;
    ccolor(cc);
}
long fact(int x)
{
    if(x == 0)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}
void drwsqe(int a,int b,int c)
{
    printf("%d",a);
    printf("x%c",253);
    if(b >= 0) printf("+%d",b);
    if(b < 0) printf("%d",b);
    printf("x");
    if(c >= 0) printf("+%d",c);
    if(c < 0) printf("%d",c);
    printf(" = 0");
    printf("\n");
}
void sqeqbf(int a,int b,int c)
{
    drwsqe(a,b,c);
    int l;
    int m;
    int n;
    int o;
    printf("\n");
    printf("-%d%c sqrt|%d%c -4*%d*%d |\n",b,241,b,253,a,c);
    printf("------------------------------\n");
    printf("     2*%d\n\n",a);
    l = -1*b;
    m = pow(b,2);
    n = -4*a*c;
    o = 2*a;
    printf("\n");
    printf("%d%c sqrt|%d +(%d)|\n",l,241,m,n);
    printf("-----------------------\n");
    printf("     %d\n\n",o);
    int p = m + n;
    printf("%d%c sqrt|%d|\n",l,241,p);
    printf("-----------------------\n");
    printf("     %d\n\n",o);
    float mu;
    float nu;
    if(p < 0)
    {
        ccolor(4);
        printf("CANNOT SOLVE THIS EQUATION!\n");
        Beep(300,200);
        ccolor(cc);
    }
    else
    {
        mu = (l+sqrt(p))/o;
        nu = (l-sqrt(p))/o;
        printf("    %d +sqrt|%d|\n",l,p);
        printf("x1= ---------------\n");
        printf("        %d\n",o);
        printf("\n\n");
        printf("    %d -sqrt|%d|\n",l,p);
        printf("x2= ---------------\n");
        printf("        %d\n",o);
        printf("\n\n   x1 = %f  |  x2 = %f\n\n",mu,nu);
    }
}

float degtrad(float deg)
{
    return (M_PI/180)*deg;
}
float radtdeg(float rad)
{
    return (rad*180)/M_PI;
}
float Logarthm(int base,float exp)
{
    if(base != 1 && base > 0 && exp > 0)
    {
        return log10(exp)/log10(base);
    }
}
void trydg(float fg)
{
    printf("0: RETURN\n");
    printf("1: SINE\n");
    printf("2: COSINE\n");
    printf("3: TANGENT\n");
    scanf("%d",&com);
    if(com == 0) Sleep(20);
    if(com == 1)
    {
        printf("\n sin %f = %f\n\n",fg,sin(degtrad(fg)));
    }
    if(com == 2)
    {
        printf("\n cos %f = %f\n\n",fg,cos(degtrad(fg)));
    }
    if(com == 3)
    {
        printf("\n tan %f = %f\n\n",fg,tan(degtrad(fg)));
    }
}
void tryrd(float fg)
{
    printf("0: RETURN\n");
    printf("1: SINE\n");
    printf("2: COSINE\n");
    printf("3: TANGENT\n");
    scanf("%d",&com);
    if(com == 0) Sleep(20);
    if(com == 1)
    {
        printf("\n sin %f = %f\n\n",fg,sin(fg));
    }
    if(com == 2)
    {
        printf("\n cos %f = %f\n\n",fg,cos(fg));
    }
    if(com == 3)
    {
        printf("\n tan %f = %f\n\n",fg,tan(fg));
    }
}
void tryin(float fg)
{
    printf("0: RETURN\n");
    printf("1: ARC SINE\n");
    printf("2: ARC COSINE\n");
    printf("3: ARC TANGENT\n");
    scanf("%d",&com);
    if(com == 0) Sleep(20);
    if(com == 1)
    {
        printf("\n sin %f = %f rad = %f%c\n\n",fg,asin(fg),radtdeg(asin(fg)),167);
    }
    if(com == 2)
    {
        printf("\n sin %f = %f rad = %f%c\n\n",fg,acos(fg),radtdeg(acos(fg)),167);
    }
    if(com == 3)
    {
        printf("\n sin %f = %f rad = %f%c\n\n",fg,atan(fg),radtdeg(atan(fg)),167);
    }
}
void Lineal()
{
    int a;
    int b;
    int c;
    int d;
    float res;
    printf("THE EQUATION HAVE TO BE IN THIS FORM: ax + b = cx + d\n\n");
    printf("TYPE THE VALUE OF A: ");
    scanf("%d", &a);
    printf("TYPE THE VALUE OF B: ");
    scanf("%d", &b);
    printf("TYPE THE VALUE OF C: ");
    scanf("%d", &c);
    printf("TYPE THE VALUE OF D: ");
    scanf("%d", &d);
    printf("\n\n");
    if(a == c)
    {
        ccolor(4);
        printf("CANNOT SOLVE THIS EQUATION!\n");
        Beep(300,200);
        ccolor(cc);
    }
    else
    {
        printf("%dx +(%d) = %dx +(%d) \n\n",a,b,c,d);
        b = b*-1;
        c = c*-1;
        printf("%dx +(%dx) = %d +(%d) \n\n",a,c,d,b);
        a = a+c;
        d = d+b;
        printf("%dx = %d \n\n",a,d);
        res = d/a;
        printf("x = (%d/%d) APROX= %f\n\n",d,a,res);
    }
}
void wirad()
{
    int a;
    int b;
    int c;
    float res;
    printf("THE EQUATION HAVE TO BE IN THIS FORM: sqrt|ax + b| = c\n\n");
    printf("TYPE THE VALUE OF A: ");
    scanf("%d",&a);
    printf("TYPE THE VALUE OF B: ");
    scanf("%d",&b);
    printf("TYPE THE VALUE OF C: ");
    scanf("%d",&c);
    printf("\n\n");
    if(a == 0)
    {
        ccolor(4);
        printf("CANNOT SOLVE THIS EQUATION!\n");
        Beep(300,200);
        ccolor(cc);
    }
    else
    {
        printf("sqrt|%dx +(%d)| = %d\n\n",a,b,c);
        c = pow(c,2);
        printf("%dx +(%d) = %d\n\n",a,b,c);
        b = b*-1;
        printf("%dx = %d +(%d)\n\n",a,c,b);
        c = c+b;
        printf("%dx = %d \n\n",a,c);
        res = c/a;
        printf("x = (%d/%d) APROX= %f\n\n",c,a,res);
    }
}
void raceq1()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    float res;
    printf("                                       ax + b   dx + e \n");
    printf("THE EQUATION HAVE TO BE IN THIS FORM: ------- = ------ \n");
    printf("                                          c        f   \n");
    printf("TYPE THE VALUE OF A: ");
    scanf("%d",&a);
    printf("TYPE THE VALUE OF B: ");
    scanf("%d",&b);
    printf("TYPE THE VALUE OF C: ");
    scanf("%d",&c);
    printf("TYPE THE VALUE OF D: ");
    scanf("%d",&d);
    printf("TYPE THE VALUE OF E: ");
    scanf("%d",&e);
    printf("TYPE THE VALUE OF F: ");
    scanf("%d",&f);
    printf("\n\n");
    printf("%dx +(%d)       %dx +(%d)\n",a,b,d,e);
    printf("------------- = -------------\n");
    printf("    %d             %d    \n\n",c,f);
    a = f*a;
    b = f*b;
    d = c*d;
    e = c*e;
    c = c*f;
    printf("%dx +(%d)       %dx +(%d)\n",a,b,d,e);
    printf("------------- = -------------\n");
    printf("    %d             %d    \n\n",c,c);
    printf("%dx +(%d)           %dx +(%d)\n",a,b,d,e);
    printf("------------ * %d = ------------ * %d\n",c,c);
    printf("    %d                  %d    \n\n",c,c);
    printf("%dx +(%d) = %dx +(%d)\n\n",a,b,d,e);
    b = b*-1;
    d = d*-1;
    printf("%dx +(%dx) = %d +(%d)\n\n",a,d,e,b);
    a = a+d;
    e = e+b;
    if(a != 0)
    {
        printf("%dx = %d\n\n",a,e);
        res = e/a;
        printf("x = (%d/%d) APROX= %f\n\n",e,a,res);
    }
    if(a == 0)
    {
        ccolor(4);
        printf("CANNOT SOLVE THIS EQUATION!\n");
        Beep(300,200);
        ccolor(cc);
    }
}
