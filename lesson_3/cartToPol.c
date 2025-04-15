#include<stdio.h>
#include<math.h>

void CartToPol(float i_x, float i_y, float *o_r, float *o_theta)
{
	*o_r=sqrt(pow(i_x,2)+pow(i_y,2));
	*o_theta=atan(i_x/i_y);
}

float RadToDeg(float i_angle)
{
	return i_angle*180.0f/3.14f;
}

int main()
{
	float x, y, r, theta;
	printf("enter a value for x\n");
	scanf("%f",&x);
	printf("enter a value for y\n");
	scanf("%f",&y);
	CartToPol(x,y,&r,&theta);
	printf("the coordinate for (%.2f,%.2f) in polar is (%.2f,%.2f)\n",x,y,r,RadToDeg(theta));
}
