/**
 * Author:Hifza Nazir
 * Email: hifzanazir456@gmail.com
 * 
 * program for interactively prompts the user to enter the latitude and longitude
 * of two locations and then computes the distance between them using the formula.
 * distance = (acos(sin(lati1)*sin(lati2)+cos(lati2)*cos(lati2)*cos(delta))*RADIUS);
*/
#include<stdio.h>
#include<math.h>
int main()
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

   
    delta = lon2 - lon1;

    
    printf("Location Distance\n");
    printf("================\n");
     printf("origin = %lf %lf\n",lon1,lati1);
    printf("Distination = %lf %lf\n",lon2,lati2);


    lon1 = Degree_to_Radian(lon1);
    lati1= Degree_to_Radian(lati1);
    lon2 = Degree_to_Radian(lon2);
    lati2 = Degree_to_Radian(lati2);

  
    distance = (acos(sin(lati1)*sin(lati2)+cos(lati2)*cos(lati2)*cos(delta))*RADIUS);

   
   
    printf("Air Distance is %lf kms \n",distance);

    return 0;
}
