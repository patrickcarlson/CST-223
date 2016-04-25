#ifndef POLY_H
#define POLY_H

#include <vector>
#include <iostream>
#include <string>

typedef std::vector<int> POLY_VEC;

class Poly
{
public:
	Poly();
	Poly(const POLY_VEC& inCoeff, const char inVar);
	friend std::ostream& operator<<(std::ostream& out, Poly& A);
	std::vector<int> getcoeff();
	friend Poly& operator+(Poly& A, Poly& B);
	//friend Poly& operator-(Poly& A, Poly& B);
	//friend Poly& operator*(Poly& A, Poly& B);
	~Poly();

private:

	POLY_VEC coeff;
	char var;

};

#endif