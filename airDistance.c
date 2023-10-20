#include<stdio.h>
#include<math.h>
double Degree_to_Radian(double value);
{
    double lon1,lati1,lon2,lati2;
    double distance = 0 , delta = 0;
    const int RADIUS = 6371;

    printf("Enter the latitude 1 in degree -90 to 90 : ");
    scanf("%lf",&lati1);
    printf("Enter the longitude 1 in degree -180 to 180 : ");
    scanf("%lf",&lon1);
    printf("Enter the latitude 2 in degree -90 to 90 : ");
    scanf("%lf",&lati2);
    printf("Enter the longitude 1 in degree -180 to 180 : ");
    scanf("%lf",&lon1);

    lon1 = Degree_to_Radian(lon1);
    lati1= Degree_to_Radian(lati1);
    lon2 = Degree_to_Radian(lon2);
    lati2 = Degree_to_Radian(lati2);

    delta = lon2 - lon1;
    distance = (acos(sin(lati1))*sin(lati2)+cos(lati2)*cos(lati2)*cos(delta))*RADIUS;

    
}