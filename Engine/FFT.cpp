/*
 * FFT.cpp
 *
 *  Created on: 6 sty 2015
 *      Author: Adamek
 */

#include "FFT.h"

namespace Engine {

	FFTCol::FFTCol(const VecD & Xin) {
		int N = Xin.size();
		Xreal.resize(N, 0.0);
		Ximag.resize(N, 0.0);
		for (int k = 0; k< N; ++k) {

			for (int t = 0; t<N; ++t) {
				Xreal[k]+=  Xin[t]*cos(2*PI*t*k/N);
				Ximag[k]+= -Xin[t]*sin(2*PI*t*k/N);
			}
		}
	}

	std::ostream& operator<<(std::ostream& o, const FFTCol &col)
	{
		o.setf(std::ios::fixed, std::ios::floatfield);
		o.precision(7);
		o<<"Real\t\tImag"<<std::endl;
		for (int i = 0; i<col.getReal().size(); ++i) {
			o<<col.getReal()[i]<<"\t"<<col.getImag()[i];
			o<<std::endl;
		}
		return o;
	}

} /* namespace Engine */
