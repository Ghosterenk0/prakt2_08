#include <iostream>
#include<math.h>

class Triangle {
	float side1;
	float side2;
	float side3;
public:
	Triangle(float s1, float s2, float s3) {
		side1 = s1;
		side2 = s2;
		side3 = s3;
	}
	float S() {
		float p = side1 + side2 + side3;
		float res = sqrt((p * (p - side1) * (p - side2) * (p - side3)));
		return res;
	}
};

int main()
{
	float s1, s2, s3;
	std::cin >> s1;
	std::cin >> s2;
	std::cin >> s3;
	Triangle tr = Triangle(s1, s2, s3);
	std::cout << tr.S();
}
