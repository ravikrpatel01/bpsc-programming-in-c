#include<iostream>

using namespace std;

int main() {
    int length, breadth, permimeter, area;
    cout<<"Enter length of rectangle: ";
    cin>>length;

    cout<<"Enter breadth of rectangle:";
    cin>>breadth;

    permimeter = 2*(length + breadth);
    area = length * breadth;

    cout<<"Perimeter = "<<permimeter<<endl;
    cout<<"area= "<<area<<endl;
    return 0;
}