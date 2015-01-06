/*
 * FFT.h
 *
 *  Created on: 6 sty 2015
 *      Author: Adamek
 */

#ifndef ENGINE_FFT_H_
#define ENGINE_FFT_H_

#include <vector>
#include <cmath>
#include <ostream>

namespace Engine {

const double PI = 3.1415926535897932384626434;

typedef std::vector<double> VecD;
/**
 * Class which represents a row of Fourier Transform
 * Has tables of Real and Imaginary part
 */
class FFTCol {
private:
	VecD Xreal;
	VecD Ximag;

	/**
	 * private default constructor
	 */
	FFTCol();
public:
	/**
	 * Constructor which input is column of raw, MDS or R/L-MDS matrix
	 */
	FFTCol(const VecD & Xin);

	/**
	 * printing the FFT
	 */
	friend std::ostream & operator<<(std::ostream&, const FFTCol &m);

	VecD getReal() const {
		return Xreal;
	}

	VecD getImag() const {
		return Ximag;
	}
};


} /* namespace Engine */

#endif /* ENGINE_FFT_H_ */
