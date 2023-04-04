//azhibaj22
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double add()
{
    double nr1, nr2;
    scanf("%lf%lf", &nr1, &nr2);
    return nr1+nr2;
}

double sub()
{
    double nr1, nr2;
    scanf("%lf%lf", &nr1, &nr2);
    return nr1-nr2;
}

double mult()
{
    double nr1, nr2;
    scanf("%lf%lf", &nr1, &nr2);
    return nr1*nr2;
}

double divi()
{
    double nr1, nr2;
    scanf("%lf%lf", &nr1, &nr2);
    return nr1/nr2;
}

double squareR()
{
    double nr;
    scanf("%lf", &nr);
    return sqrt(nr);
}

double po()
{
    int nr1, nr2;
    scanf("%d%d", &nr1, &nr2);
    return pow(nr1, nr2);
}

double operationType (char o)
{
    if (o=='+')
        return add();
    else if (o=='-')
        return sub();
    else if (o=='*')
        return mult();
    else if (o=='/')
        return divi();
    else if (o=='s')
        return squareR();
    else if (o=='^')
        return po();
    else
        return 0;

}

double areaCircle(int radius)
{
    return (double) radius*radius*3.141;
}

double perimeterCircle(int radius)
{
    return (double) 2*radius*3.141;
}

double areaOrPeri(char o)
{
    int r;
    scanf("%d", &r);
    if (o=='a')
        return areaCircle(r);
    else if (o=='p')
        return perimeterCircle(r);
    return 0;
}

int main()
{
    double result;
    char opera;
    scanf("%c", &opera);
    result=operationType(opera);
    printf("%.2lf", result);

    char aOp;
    scanf("%c", &aOp);
    double result2 = areaOrPeri(aOp);
    printf("%.2lf", result2);
    return 0;
}
