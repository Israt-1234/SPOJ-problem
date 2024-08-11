#include <stdio.h>
#include<math.h>

double calculateDiameter(double radius) {
    return 2*radius;
}
double calculateCircumference(double radius) {
  return M_PI*2*radius;
}
double calculateArea(double radius) {

    return M_PI*radius*radius;
}
int main() {
    
double radius;

 while(1){
 printf("Enter the radius of the circle (or enter a negative value to exit): ");
 scanf("%lf", &radius);
   if(radius < 0){
      break;
   }

  else{
      double diameter = calculateDiameter(radius);
      double Circumference = calculateCircumference(radius);
      double area = calculateArea(radius);
      printf("diameter is %lf\n", diameter);
      printf("circumference is %lf\n", Circumference);
      printf("area is %lf\n ", area);
  }
}

    return 0;
}