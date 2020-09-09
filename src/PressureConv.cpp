/*
 * Copyright (C) 2020 Lukas Pfeifer
 * for PressureConv version 1.0
 *      https://github.com/luv4bytes/PressureConv
 *
 * This file is part of PressureConv.
 *
 * PressureConv is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PressureConv is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with PressureConv. If not, see <http://www.gnu.org/licenses/>.
 *
*/

#include "PressureConv.h"

double PressureConv::Converter::Convert(PressureConv::Converter::UNITS inUnit,
                                       const double& inVal,
                                       PressureConv::Converter::UNITS outUnit)
{
    double millibar = 0.0d;
    double result = 0.0d;

    switch(inUnit)
    {
        case MBAR:
            millibar = inVal;
            break;

        case MPA:
            millibar = inVal / MPa;
            break;

        case BAR:
            millibar = inVal / bar;
            break;

        case KGF_CM2:
            millibar = inVal / kgf_cm2;
            break;

        case KPA:
            millibar = inVal / kPa;
            break;

        case HPA:
            millibar = inVal / hPa;
            break;

        case KGF_M2:
            millibar = inVal / kgf_m2;
            break;

        case PA:
            millibar = inVal / Pa;
            break;

        case KSI:
            millibar = inVal / ksi;
            break;

        case PSI:
            millibar = inVal / psi;
            break;

        case PSF:
            millibar = inVal / psf;

        case CMH2O:
            millibar = inVal / cmH2O;
            break;

        case MMH2O:
            millibar = inVal / mmH2O;
            break;

        case FTH20:
            millibar = inVal / ftH2O;
            break;

        case INH20:
            millibar = inVal / inH2O;
            break;

        case ATM:
            millibar = inVal / atm;
            break;

        case TECH_ATM:
            millibar = inVal / tech_atm;
            break;

        case INHG:
            millibar = inVal / inHg;
            break;

        case CMHG:
            millibar = inVal / cmHg;
            break;

        case MMHG:
            millibar = inVal / mmHg;
            break;

        case TORR:
            millibar = inVal / torr;
            break;

        default:
            break;
    }

    switch(outUnit)
    {
        case MBAR:
            result = millibar;
            break;

        case MPA:
            result = millibar * MPa;
            break;

        case BAR:
            result = millibar * bar;
            break;

        case KGF_CM2:
            result = millibar * kgf_cm2;
            break;

        case KPA:
            result = millibar *  kPa;
            break;

        case HPA:
            result = millibar * hPa;
            break;

        case KGF_M2:
            result = millibar * kgf_m2;
            break;

        case PA:
            result = millibar * Pa;
            break;

        case KSI:
            result = millibar * ksi;
            break;

        case PSI:
            result = millibar * psi;
            break;

        case PSF:
            result = millibar * psf;

        case CMH2O:
            result = millibar * cmH2O;
            break;

        case MMH2O:
            result = millibar * mmH2O;
            break;

        case FTH20:
            result = millibar * ftH2O;
            break;

        case INH20:
            result = millibar * inH2O;
            break;

        case ATM:
            result = millibar * atm;
            break;

        case TECH_ATM:
            result = millibar * tech_atm;
            break;

        case INHG:
            result = millibar * inHg;
            break;

        case CMHG:
            result = millibar * cmHg;
            break;

        case MMHG:
            result = millibar * mmHg;
            break;

        case TORR:
            result = millibar * torr;
            break;

        default:
            break;
    }

    return result;
}
