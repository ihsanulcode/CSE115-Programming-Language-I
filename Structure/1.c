#include<stdio.h>
struct Shape
{
    double length;
    double width;
};
int findArea(struct Shape R)
{
    return (R.length*R.width);
}
int findPerimeter(struct Shape R)
{
    return (2*(R.length+R.width));
}
int main()
{
    struct Shape Rectangle;
    printf("Length: ");
    scanf("%lf",&Rectangle.length);
    fflush(stdin);
    printf("Width: ");
    scanf("%lf",&Rectangle.width);

    int area = findArea(Rectangle);
    int peri = findPerimeter(Rectangle);
    printf("\nArea: %d\nPerimeter: %d\n",area,peri);
    return 0;

}
