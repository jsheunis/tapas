/* aponteeduardo@gmail.com */
/* copyright (C) 2015 */


#ifndef FMRIEULER_H
#define FMRIEULER_H

#include "libs/Fmri.hpp"
#include "mpdcm.hcu"

namespace Host
{

//class Fmri;

class FmriEulerBilinear : public Fmri 
{
    public:
        FmriEulerBilinear();

        int
        launch_kernel(const DataArray *y, const DataArray *u,
            const ThetaFmriArray *theta, const PThetaFmri *ptheta);

};

} // Host

#endif
