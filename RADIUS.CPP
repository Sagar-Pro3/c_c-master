# include <iostream.h>
# include <conio.h>
void radius();
float r,area_of_circle;

void main(){
cout<<"Enter the radious of circle";
cin>>r;
radius();
getch();
}

void radius(){
area_of_circle=3.14*r*r;
cout<<"Area of circle is:"<<area_of_circle<<endl;
}