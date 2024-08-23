#include"HEADER.hpp"

bool z = true;
int num;
int num2;
int num3;
float numf;
int main(int argc, char *args[])
{
    bool de = false;
    //THIS SECCTION DOESN'T MATTER
    Beep(750,600);
    ccolor(cc);
    printf("STARTING...\n");
    Sleep(750);

    //MAIN PAGE
    printf("MATH TOOLS[Version STD 1.4.90]\n");
    printf("\n");
    while(z)
    {
        printf("1: QUADRATIC EQUATIONS\n");
        printf("2: FACTORIAL\n");
        printf("3: ANGLES\n");
        printf("4: LOGARTHMS\n");
        printf("5: TRIGONOMETRY\n");
        printf("6: LINEAL EQUATIONS\n");
        printf("TYPE 0 TO CONFIG\n");
        scanf("%d",&com);
        // CONFIG
        if(com == 0)
        {
            printf("1: EXIT\n");
            printf("2: SET COLOUR\n");
            printf("3: RETURN\n");
            scanf("%d",&com);
            if(com == 1) z = false;
            if(com == 2) setcol();
            if(com == 3) Sleep(500);
            com = 0;
        }
        // Q EQUATIONS
        if(com == 1)
        {
            printf("PLEASE TYPE A VALUE OF A: ");
            scanf("%d",&num);
            printf("PLEASE TYPE A VALUE OF B: ");
            scanf("%d",&num2);
            printf("PLEASE TYPE A VALUE OF C: ");
            scanf("%d",&num3);
            printf("\n");
            sqeqbf(num,num2,num3);
            Beep(600,450);
            com = 0;
        }
        // FACTORIAL
        if(com == 2)
        {
            printf("TYPE A NUMBER: ");
            scanf("%d",&num);
            printf("%d%c = %d\n\n",num,33,fact(num));
            Beep(625,400);
            printf("\n");
            com = 0;
        }
        //ANGLES
        if(com == 3)
        {
            printf("0: RETURN\n");
            printf("1: DEG TO RAD\n");
            printf("2: RAD TO DEG\n");
            scanf("%d",&com);
            if(com == 0) Sleep(20);
            if(com == 1)
            {
                printf("TYPE AN ANGLE IN DEGREES: ");
                scanf("%f",&numf);
                printf("\n%f%c = %f rad\n\n",numf,248,degtrad(numf));
                Beep(625,400);
                com = 0;
            }
            if(com == 2)
            {
                printf("TYPE AN ANGLE IN RADIANS: ");
                scanf("%f",&numf);
                printf("\n%f rad = %f%c\n\n",numf,radtdeg(numf),248);
                Beep(625,400);
                com = 0;
            }
        }
        //LOGARITHMS
        if(com == 4)
        {
            printf("0: RETURN\n");
            printf("1: NATURAL LOGARTHM\n");
            printf("2: LOGARITHM\n");
            scanf("%d",&com);
            if(com == 0) Sleep(20);
            if(com == 1)
            {
                printf("TYPE A NUMBER: ");
                scanf("%f",&numf);
                if(numf <= 0)
                {
                    ccolor(4);
                    printf("CANNOT SOLVE THIS LOGARITM!\n");
                    Beep(300,200);
                    ccolor(cc);
                }
                else
                {
                    printf("\n ln %f = %f\n\n",numf,log(numf));
                }
                Beep(625,400);
                com = 0;
            }
            if(com == 2)
            {
                printf("TYPE A LOGARITHM BASE: ");
                scanf("%d",&num);
                printf("TYPE A NUMBER: ");
                scanf("%f",&numf);
                if(num <= 1 || numf <= 0)
                {
                    ccolor(4);
                    printf("CANNOT SOLVE THIS LOGARITM!\n");
                    Beep(300,200);
                    ccolor(cc);
                }
                else
                {
                    printf("\n log%d |%f| = %f\n",num,numf,Logarthm(num,numf));
                }
                Beep(625,400);
                com = 0;
            }
        }
        //TRIGONOMETRY
        if(com == 5)
        {
            printf("0: RETURN\n");
            printf("1: DEG\n");
            printf("2: RAD\n");
            printf("3: INVERSE\n");
            scanf("%d",&com);
            if(com == 0) Sleep(20);
            if(com == 1)
            {
                printf("TYPE A VALUE OF THE ANGLE: ");
                scanf("%f",&numf);
                trydg(numf);
                Beep(600,450);
                com = 0;
            }
            if(com == 2)
            {
                printf("TYPE A VALUE OF THE ANGLE: ");
                scanf("%f",&numf);
                tryrd(numf);
                Beep(600,450);
                com = 0;
            }
            if(com == 3)
            {
                printf("TYPE A NUMBER: ");
                scanf("%f",&numf);
                tryin(numf);
                Beep(600,450);
                com = 0;
            }
        }
        //LINEAL EQUATIONS
        if(com == 6)
        {
            printf("0: RETURN\n");
            printf("1: LINEAL\n");
            printf("2: RATIONAL\n");
            printf("3: WITH RADICALS\n");
            scanf("%d",&com);
            if(com == 0) Sleep(20);
            if(com == 1) Lineal();
            if(com == 2)
            {
                printf("0: RETURN\n");
                printf("1: WITH X IN NUMERATOR\n");
                printf("2: WITH X IN DENOMINATOR\n");
                scanf("%d",&com);
                if(com == 0) Sleep(20);
                if(com == 1) raceq1();
                com == 0;
            }
            if(com == 3) wirad();

            Beep(600,450);
            com = 0;
        }
        Sleep(50);
    }
    return 0;
}
