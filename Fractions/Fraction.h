#pragma once
#include <iostream> 

using namespace std;

namespace Mathlib {

	template<typename T>

	class Fraction {
	public:

		Fraction() = default;
		Fraction(T num,  T denom) :
		
		f_num{num},
		f_denom{denom}
		{

		}
		~Fraction() {}

		Fraction operator + (const Fraction& other) const {

			return Fraction(f_num + other.f_num, f_denom + other.f_denom);
		}

		Fraction operator - (const Fraction& other) const {

			return Fraction(f_num - other.f_num, f_denom - other.f_denom);
		}

		Fraction operator * (const Fraction& other) const {

			return Fraction(f_num * other.f_num, f_denom * other.f_denom);
		}

		Fraction operator / (const Fraction& other) const {

			return Fraction(f_num / other.f_num, f_denom / other.f_denom);
		}

		bool operator == (const Fraction& other) const {

			return f_num == other.f_num && f_denom == other.f_denom;
		}

		bool operator != (const Fraction& other) const {

			return !(*this == other);
		}

		bool operator >= (const Fraction<T>& other) const {

			return this->toFloat() >= other.toFloat();
		}

		bool operator <= (const Fraction<T>& other) const {

			return this->toFloat() <= other.toFloat();
		}

		bool operator > (const Fraction<T>& other) const {

			return this->toFloat() > other.toFloat();
		}

		bool operator < (const Fraction<T>& other) const {

			return this->toFloat() < other.toFloat();
		}

		friend ostream& operator << (ostream& out, const Fraction& frac){

			out << frac.f_num << "/" << frac.f_denom;

			return out;
		}

		friend istream& operator >> (istream& in, Fraction& frac) {

			in >> frac.f_num;
			in >> frac.f_denom;

			return in;
		}

		void Simplify() {

			T gcd = findGCD(f_num, f_denom );
			f_num /=  gcd;
			f_denom /=  gcd;


			if (f_denom < 0) {

				f_num *= -1;
				f_denom *= -1;
			}
		}

		static T findGCD(T a, T b) {

			//Euclidean algorithm to find GCD
			while (b != 0) {

				T temp = b;
				b = a % b;
				a = temp;
			}
			
			return a;
		}
			
		float toFloat() const {

			return f_num/ (float)f_denom;
		}
	private:

		T f_num;
		T f_denom;
	};
}