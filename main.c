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
int main()
{
    double result;
    char opera;
    scanf("%c", &opera);
    result=operationType(opera);
    printf("%.2lf", result);
    return 0;
}
