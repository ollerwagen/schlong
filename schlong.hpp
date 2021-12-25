#ifndef __SCHLONG
#define __SCHLONG

#include <iostream>

#include <cstdint>
#include <iostream>

#define LONGEST_COCK  0x0000007fffffffff
#define SHORTEST_COCK 0xffffff8000000000

namespace std // stands for sexually transmittable disease
{
	class schlong
	{

	private:

		static constexpr int64_t BYTES = 0xffffffffff;
		static constexpr int64_t LAST_BYTE = 0x8000000000;

		int64_t benis;

		void adj() { benis &= BYTES; if (benis & LAST_BYTE) benis |= ~BYTES; }

	public:

		// Constructors and Destructor
		inline schlong() { benis = 69; } // why not
		inline schlong(int64_t value) { benis = value; adj(); }
		inline schlong(const schlong &s) { benis = s.benis; adj(); }
		inline ~schlong() {}

		// Assignment Operators
		inline schlong operator= (const schlong &s) { benis = s.benis; adj(); return *this; }
		template<class T> schlong operator= (T value) { benis = value; adj(); return *this; }

		// Unary Operators
		inline friend schlong operator- (const schlong &s) { return schlong(-s.benis); }

		// Casting
		inline operator bool() { return benis == 0 ? false : true; }
		inline operator int64_t() { return benis; }
		template<class T> operator T() { return (T)((int64_t)*this); }

		// Comparison Operators
		inline bool operator== (const schlong &s) { return (benis & BYTES) == (s.benis & BYTES); }
		template<class T> bool operator== (T value) { return (benis & BYTES) == value; }
		inline bool operator!= (const schlong &s) { return !(*this == s); }
		template<class T> bool operator!= (T value) { return !(*this == value); }
		inline bool operator> (const schlong &s) { return benis > s.benis; }
		template<class T> bool operator> (T value) { return benis > value; }
		inline bool operator< (const schlong &s) { return benis < s.benis; }
		template<class T> bool operator< (T value) { return benis < value; }
		inline bool operator>= (const schlong &s) { return !(*this < s); }
		template<class T> bool operator>= (T value) { return !(*this < value); }
		inline bool operator<= (const schlong &s) { return !(*this > s); }
		template<class T> bool operator<= (T value) { return !(*this > value); }

		// Arithmetic Operators
		inline schlong operator+ (const schlong &s) { return schlong(benis + s.benis); }
		template<class T> schlong operator+ (T value) { return schlong(benis + value); }
		inline schlong operator- (const schlong &s) { return schlong(benis - s.benis); }
		template<class T> schlong operator- (T value) { return schlong(benis - value); }
		template<class T> friend schlong operator- (T value, const schlong &s) { return schlong(value - s.benis); }
		inline schlong operator* (const schlong &s) { return schlong(benis * s.benis); }
		template<class T> schlong operator* (T value) { return schlong(benis * value); }
		inline schlong operator/ (const schlong &s) { return schlong(benis / s.benis); }
		template<class T> schlong operator/ (T value) { return schlong(benis / value); }
		template<class T> friend schlong operator/ (T value, const schlong &s) { return schlong(value / s.benis); }
		inline schlong operator% (const schlong &s) { return schlong(benis % s.benis); }
		template<class T> schlong operator% (T value) { return schlong(benis % value); }
		template<class T> friend schlong operator% (T value, const schlong &s) { return schlong(value % s.benis); }

		// Logic Operators
		inline friend schlong operator~ (const schlong &s) { return schlong(~s.benis); }
		inline schlong operator& (const schlong &s) { return schlong(benis & s.benis); }
		template<class T> schlong operator& (T value) { return schlong(benis & value); }
		inline schlong operator| (const schlong &s) { return schlong(benis | s.benis); }
		template<class T> schlong operator| (T value) { return schlong(benis | value); }
		inline schlong operator^ (const schlong &s) { return schlong(benis ^ s.benis); }
		template<class T> schlong operator^ (T value) { return schlong(benis ^ value); }
		inline schlong operator>> (const schlong &s) { return schlong(benis >> s.benis); }
		template<class T> schlong operator>> (T shamt) { return schlong((benis & BYTES) >> shamt); }
		inline schlong operator<< (const schlong &s) { return schlong(benis << s.benis); }
		template<class T> schlong operator<< (T shamt) { return schlong(benis << shamt); }

		// Increment / Decrement
		inline schlong operator++ () { auto res = *this; benis++; adj(); return res; }
		inline schlong operator++ (int) { benis++; adj(); return *this; }
		inline schlong operator-- () { auto res = *this; benis--; adj(); return res; }
		inline schlong operator-- (int) { benis--; adj(); return *this; }

		// Fancy Assignment Operators
		inline schlong operator+= (const schlong &s) { return *this = *this + s; }
		template<class T> schlong operator+= (T value) { return *this = *this + value; }
		inline schlong operator-= (const schlong &s) { return *this = *this - s; }
		template<class T> schlong operator-= (T value) { return *this = *this - value; }
		inline schlong operator*= (const schlong &s) { return *this = *this * s; }
		template<class T> schlong operator*= (T value) { return *this = *this * value; }
		inline schlong operator/= (const schlong &s) { return *this = *this / s; }
		template<class T> schlong operator/= (T value) { return *this = *this / value; }
		inline schlong operator%= (const schlong &s) { return *this = *this % s; }
		template<class T> schlong operator%= (T value) { return *this = *this % value; }
		inline schlong operator&= (const schlong &s) { return *this = *this & s; }
		template<class T> schlong operator&= (T value) { return *this = *this & value; }
		inline schlong operator|= (const schlong &s) { return *this = *this | s; }
		template<class T> schlong operator|= (T value) { return *this = *this | value; }
		inline schlong operator^= (const schlong &s) { return *this = *this ^ s; }
		template<class T> schlong operator^= (T value) { return *this = *this ^ value; }
		inline schlong operator>>= (const schlong &s) { return *this = *this >> s; }
		template<class T> schlong operator>>= (T shamt) { return *this = *this >> shamt; }
		inline schlong operator<<= (const schlong &s) { return *this = *this << s; }
		template<class T> schlong operator<<= (T shamt) { return *this = *this << shamt; }

		// I/O
		inline friend std::ostream& operator<< (std::ostream &o, const schlong &s)
		{
			std::ios_base::fmtflags ff = o.flags();
			switch (ff & std::ios_base::basefield)
			{
			case std::ios_base::dec:
				o << s.benis;
				break;
			case std::ios_base::oct:
			case std::ios_base::hex:
				o << (s.benis & BYTES);
				break;
			default:
				break;
			}
			
			return o;
		}
		inline friend std::istream& operator>> (std::istream &i, schlong &s) { i >> s.benis; s.adj(); return i; };
	};
}

#endif // __SCHLONG
