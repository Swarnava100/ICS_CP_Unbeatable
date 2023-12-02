/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int square()
{
    printf("Enter the side of square: ");
    float a;
    scanf("%f", &a);
    float Area = a * a;
    printf("The area of square is %.3f*%.3f=%.3f  units²\n", a, a, Area);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
int rectangle()
{
    float l;
    float b;
    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);
    float Area = l * b;
    printf("The area of rectangle is %.3f*%.3f=%.3f  units²\n", l, b, Area);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
int triangle()
{
    float a;
    float b;
    float c;
    printf("Enter the first side of traingle: ");
    scanf("%f ", &a);
    printf("Enter the second side of traingle: ");
     scanf("%f ", &b);
     printf("Enter the third side of traingle: ");
     scanf("%f ", &c);
    float s = (a + b + c) / 2;
    float t = s * (s - a) * (s - b) * (s - c);
    float Area = sqrt(t);
   if (a + b > c && a + c > b && b + c > a){
   printf("The area of triangle is s=(%.3f+%.3f+%.3f)/2\n", a, b, c);
    printf("s*(s-%.3f)*(s-%.3f)*(s-%.3f)\n", a, b, c);
    printf("%.3f units²\n", Area);
       
   }
   
    else
    {
        printf("Triangle with sides %.3f, %.3f, and %.3f cannot be formed.\n", a, b, c);
    }
}
int parallelogram()
{
    float w;
    float i;
    printf("Enter the base of parallelogram: ");
    scanf("%f", &w);
    printf("Enter the height of parallelogram: ");
    scanf("%f", &i);
    float Area = w * i;
    printf("The area of parallelogram is%.3f*%.3f=%.3f  units²\n", w, i, Area);
    for (int i = 0; i < w; i++)
    {
        // Print spaces before each row
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        // Print asterisks for the parallelogram
        for (int j = 0; j < w; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
}
int trapezium()
{
    float p;
    float q;
    float h;
    printf("Enter the sides which are parallel: ");
    scanf("%f%f", &p, &q);
    printf("Enter teh height of trapezium: ");
    scanf("%f", &h);
    float Area = (1 / 2) * (p + q) * h;
    printf("The area of trapezium is (1/2)*(%.3f+%.3f)*%.3f=%.3f  units²\n", p, q, h, Area);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h + q; j++)
        {
            if (j >= (h - i) && j < (h - i + p))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int circle()
{
    float z;
    printf("Enter the radius of circle: ");
    scanf("%f", &z);
    float Area = 3.14 * z * z;
    printf("The area of circle is 3.14*%.3f*%.3f=%.3f  units²\n", z, z, Area);
    int i, j;
    for (i = -z; i <= z; i++)
    {
        for (j = -z; j <= z; j++)
        {
            if (i * i + j * j <= z * z)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
int regular_polygon()
{
    float s;
    float n;
    printf("Enter the no of sides of the polygon: ");
    scanf("%f", &n);
    printf("Enter the side length: ");
    scanf("%f", &s);
    float Area = (n * pow(s, 2)) / (4 * tan(3.14 / n));
    printf("The area of this polygon is %.3f  units²\n", Area);
}
int cylinder()
{
    float r;
    float d;
    printf("Enter the radius of the base: ");
    scanf("%f", &r);
    printf("Enter the height of cylinder: ");
    scanf("%f", &d);
    float Area = 2 * 3.14 * r * d + 2 * 3.14 * r * r;
    float Volume = 3.14 * r * r * d;
    printf("The area of cylinder is 2*3.14*%.3f*%.3f+2*3.14*%.3f*%.3f=%.3f  units²\n", r, d, r, r, Area);
    printf("The volume of cylinder is 3.14*%.3f*%.3f*%.3f=%.3f  cubeunits\n", r, r, d, Volume);
}
int cone()
{
    float y, u, o;
    printf("Enter the radius of the base: ");
    scanf("%f", &y);
    printf("Enter the height of cone: ");
    scanf("%f", &u);
    printf("Enter teh slant height of cone: ");
    scanf("%f", &o);
    float Area = 3.14 * y * o + 3.14 * y * y;
    float Volume = (1 / 3) * 3.14 * y * y * u;
    printf("The area of cylindre is 3.14*%f*%f+3.14*%.3f*%.3f=%.3f  units²\n", y, o, y, y, Area);
    printf("The volume of cylinder is (1/3)3.14%.3f*%.3f*%.3f=%.3f  cubeunits\n", y, y, u, Volume);
}
int sphere()
{
    float r;
    printf("Enter the radius of sphere: ");
    scanf("%f", &r);
    float Area = 4 * 3.14 * r * r;
    float Volume = (4 / 3) * 3.14 * r * r * r;
    printf("The area of sphere is 4*3.14*%.3f*%.3f=%.3f   units²\n", r, r, Area);
    printf("Thea volume of sphere is (4/3)3.14%.3f*%.3f*%.3f=%.3f   cubeunits\n", r, r, r, Volume);
}
int cube_or_cuboid()
{
    float a,b,c;
    printf("Enter the length of shape: ");
    scanf("%f", &a);
    printf("Enter the bradth of shape: ");
    scanf("%f", &b);
    printf("Enter the heigth of shape: ");
    scanf("%f", &c);
    float Area = 2 * (a * b + b * c + c * a);
    float Volume = a * b * c;
    printf("The area of figure is 2*(%.3f*%.3f+%.3f*%.3f+%.3f*%.3f)=%.3f  units²\n", a, b, b, c, c, a, Area);
    printf("The volume of the figure is %.3f*%.3f*%.3f=%.3f  cubeunits\n", a, b, c, Volume);
    
}
int square_pyramid()
{
    float l, h, s;
    printf("Enter the base side length: ");
    scanf("%f", &l);
    printf("Enter the heigth of pyramid: ");
    scanf("%f", &h);
    printf("Enter the slant perpendicular length: ");
    scanf("%f", &s);
    float Area = l * l + 2 * l * s;
    float Volume = (1 / 3) * l * l * h;
    printf("The area of square pyramid is %.3f*%.3f+2*%.3f*%.3f=%.3f  units²\n", l, l, l, s, Area);
   // printf("THe volume of square pyramid is (1/3)*%.3f*%.3f*%.3f=%.3f\n", l, l, h, Volume);
    for (int i = 0; i < l; i++)
    {
        // Print leading spaces
        for (int j = 0; j < l - i - 1; j++)
        {
            printf(" ");
        }

        // Print the pyramid base
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
  int Ellipse(){
      float maj,min;
      printf("Enter the length of semi major axis: ");
      scanf("%f",&maj);
      printf("Enter the length of semi minor axis: ");
      scanf("%f",&min);
      float area =3.14*min*maj;
      printf("The area of ellipse is %.3f  units²",area);
  }
int main()
{
    printf("******************************************************************************\n");

    printf("WELCOME TO THE PROGRAMME OF AREA VOLUME CALCULATION OF DIFFERENT SHAPES\n");
    printf("******************************************************************************\n");
    printf("Which shape would you like to learn about ?\n");
    printf("Press  the appropriate number:\n");
    printf("1.Square\n");
    printf("2.Rectangle \n");
    printf("3.Triangle \n");
    printf("4.Parrallogram\n");
    printf("5.Trapezium\n");
    printf("6.Circle\n");
    printf("7.Regular polygon\n");
    printf("8.Cylinder\n");
    printf("9.Cone\n");
    printf("10.Sphere\n");
    printf("11.Cube or cuboid\n");
    printf("12.Square pyramid\n");
    printf("13.Ellipse\n");
    printf("Enter the figure code:");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        square();
        break;
    case 2:
        
        rectangle();
        break;

    case 3:
        triangle();
        break;
    case 4:
        parallelogram();
        break;

    case 5:
        trapezium();
        break;

    case 6:
        circle();
        break;

    case 7:
        regular_polygon();
        break;
    case 8:
        cylinder();
        break;

    case 9:
        cone();
        break;

    case 10:
        sphere();
        break;

    case 11:
        cube_or_cuboid();
        break;

    case 12:
        square_pyramid();
        break;
    case 13:
        Ellipse();
        break;
    default:
        printf("Incorrect number entered:");
        return 0;
    }
}
