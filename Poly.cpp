#include "Poly.h"

Poly::Poly()
{
	
}

Poly::Poly(const POLY_VEC& inCoeff, const char inVar)
	:coeff(inCoeff), var(inVar)
{

}

std::vector<int> Poly::getcoeff()
{
	return coeff;
}

Poly::~Poly()
{
}

std::ostream& operator<<(std::ostream& out, Poly& A) 
{

	int expIndex = A.coeff.size() - 1;

	out << A.coeff[0] << A.var << "^" << expIndex;

	--expIndex;

	for (std::vector<int>::iterator it = A.coeff.begin() + 1; it != A.coeff.end() - 1; ++it)
	{
		
		if(*it != 0)
			out << " + " << *it << A.var << "^" << expIndex;

		--expIndex;
	}
	
	if (A.coeff.back() != 0)
		out << " + " << A.coeff.back();
	

	return out;




}

Poly& operator+(Poly & A, Poly & B)
{
	if (B.coeff.size() < A.coeff.size())
	{ 
		std::vector<int>::reverse_iterator orit = B.coeff.rbegin();
		for (std::vector<int>::reverse_iterator rit = A.coeff.rbegin(); orit != B.coeff.rend(); ++rit, ++orit)
		{
			*rit += *orit;
		}
	}
	else
	{
		//copy loop if A smaller...function better?
	}

	return A;
}

//Poly & operator-(Poly & A, Poly & B)
//{
//	return NULL;
//}
//
//Poly & operator*(Poly & A, Poly & B) 
//{
//	return NULL;
//}
