# include <stdio.h>
# include <conio.h>
# include <math.h>
# define EPS 0.000001
# define F(x) x*x + 2.5*x -1.5

void fal(float *a, float *b, int *s, float *root, int *count);

void main()
{
    int s, count;
    float a, b, root;

    printf("\n");
    printf("SOLUTION BY FALSE POSITION METHOD \n");
    printf("\n");
    printf("Input starting values \n");
    scanf("%f, %f", &a, &b);

    float fa = F(a);
    float fb = F(b);

    printf("\n f(a) =  %f",fa);
    printf("\n f(b) =  %f",fb);

    printf("\n");

    if(&fa == NULL)
    {
        printf("\n The function does not exist at the user entered start value. Please try again. \n");
    }
    if(&fb == NULL)
    {
        printf("\n The function does not exist at the user entered end value. Please try again. \n");
    }

    else
    {
        fal(&a, &b, &s, &root, &count);

    if(s == 0)
    {
        printf("\n");
        printf("Starting points do not bracket any roots or contain even number of roots \n");
        printf("\n");
    }

    else
    {
        printf("\n");
        printf("Root = %f \n", root);
        printf("F(root) = %f \n", F(root));
        printf("No. of Iterations = %d \n", count);
        printf("\n");
    }
    }

}

void fal(float *a, float *b, int *s, float *root, int *count)
{
    float x1, x2, x0, f0, f1, f2;

    x1 = *a;
    x2 = *b;
    f1 = F(x1);
    f2 = F(x2);

    if(f1*f2 >0)
    {
        *s = 0;
        return;
    }
    else
    {
        
    *count = 1;

    printf("count \t");
    printf(" x1 \t\t");
    printf("f1 \t\t");
    printf("x2 \t\t");
    printf("f2 \t\t");
    printf("x0 \t");
    printf("\n");

    begin:

    x0 = x1 - f1 * (x2 - x1) /( f2 - f1);
    // x0 = ((x1*f2)-(x2*f1))/(f2-f1);
    f0 = F(x0);

    if(f0==0)
    {
        *s = 1;
        *root = x0;
         return;
    }

    if (f1*f0 < 0)
    {
        x2 = x0;
        f2 = f0;
    }
    else
    {
        x1 = x0;
        f1 = f0;
    }

    // printf("%5d %15.6f \n", *count, x1, x2);
    printf("%d \t", *count);
    printf("%f \t", x1);
    printf("%f \t", f1);
    printf("%f \t", x2);
    printf("%f \t", f2);
    printf("%f \t", x0);
    printf("\n");

    // if(fabs((x2-x1)/x2) < EPS)
    if(fabs(F(x0)) < EPS)
        {
            *s = 1;
            // *root = (x2+x1)/2.0;
            *root = x0;
            return;
        }
        else
        {
            *count = *count + 1;
            goto begin;
        }
    }
}

       
        
 