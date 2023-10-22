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
//Function to convert degree to radian
int Degree_to_Radian(int num)
{
    float PI=3.14f;
    int radian=(num/180)*PI;
    return radian;
}
int main()
{
    //declear variables
    double lon1,lati1,lon2,lati2;
    double distance = 0 , delta = 0;
    const int RADIUS = 6371;

    //prompt the values from user in degrees...

    printf("Enter the latitude 1 in degree -90 to 90 : ");
    scanf("%lf",&lati1);
    printf("Enter the longitude 1 in degree -180 to 180 : ");
    scanf("%lf",&lon1);
    printf("Enter the latitude 2 in degree -90 to 90 : ");
    scanf("%lf",&lati2);
    printf("Enter the longitude 1 in degree -180 to 180 : ");
    scanf("%lf",&lon1);

   // finding dalta
    delta = lon2 - lon1;

    //print origin and distination
    printf("Location Distance\n");
    printf("================\n");
    printf("origin = %lf %lf\n",lon1,lati1);
    printf("Distination = %lf %lf\n",lon2,lati2);

    //call the function(Degree_t0_Radian)
    lon1 = Degree_to_Radian(lon1);
    lati1= Degree_to_Radian(lati1);
    lon2 = Degree_to_Radian(lon2);
    lati2 = Degree_to_Radian(lati2);

    // use formula for finding the distance
    distance = (acos(sin(lati1)*sin(lati2)+cos(lati2)*cos(lati2)*cos(delta))*RADIUS);

   
   //display result....
    printf("Air Distance is %lf kms \n",distance);

    return 0;
}
