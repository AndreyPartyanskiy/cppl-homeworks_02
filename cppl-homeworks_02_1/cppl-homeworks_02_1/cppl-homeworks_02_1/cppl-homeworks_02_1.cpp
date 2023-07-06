// cppl-homeworks_02_1.cpp 

#include <iostream>
using namespace std; 

struct point
{
	int m_x;
	int m_y;
};

void print_point(const point& point_object)
{
	cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << endl;
}

int main()
{
	int i;
	
	for (i = 0; i < 5; i++) 
	{
		point my_point{ i,i*2 };
		print_point(my_point);
	}
	return 0;
}
