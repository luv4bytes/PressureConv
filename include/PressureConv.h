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

#ifndef CONVERTER_H
#define CONVERTER_H

#include <map>

namespace PressureConv
{
    class Converter
    {

    /*  -- 1 millibar used to convert --
    *
    *  Following values are based on 1 mbar.
    */

    public:

        /// Supported pressure units.
        enum UNITS
        {
            /// Millibar
            MBAR,
            /// Megapascal
            MPA,
            /// Bar
            BAR,
            /// Kilogram force per square centimetre
            KGF_CM2,
            /// Kilopascal
            KPA,
            /// Hectopascal
            HPA,
            /// Kilogram force per square meter
            KGF_M2,
            /// Pascal
            PA,
            /// Kilopound per square inch
            KSI,
            /// Pound per square inch
            PSI,
            /// Pound per square foot
            PSF,
            /// Centimetre of water
            CMH2O,
            /// Millimetre of water
            MMH2O,
            /// Feet of water
            FTH20,
            /// Inch of water
            INH20,
            /// Physical Atmosphere
            ATM,
            /// Technical atmosphere
            TECH_ATM,
            /// Inch of mercury
            INHG,
            /// Centimetre of mercury
            CMHG,
            /// Millimetre of mercury
            MMHG,
            /// Well... Torr
            TORR
        };

    private:

        /// Mappings for units based on 1 millibar
        std::map<UNITS, double> unitMap =
        {
            {MBAR, 1},
            {MPA, 0.0001},
            {BAR, 0.001},
            {KGF_CM2, 0.001019716},
            {KPA, 0.1},
            {HPA, 1},
            {KGF_CM2, 10.19716},
            {PA, 100},
            {KSI, 0.000014504},
            {PSI, 0.01450377},
            {PSF, 2.088543},
            {CMH2O, 1.019744289},
            {MMH2O, 10.19744289},
            {FTH20, 0.033456177},
            {INH20, 0.401474129},
            {ATM, 0.000986923},
            {TECH_ATM, 0.001019716},
            {INHG, 0.02953007},
            {CMHG, 0.07500638},
            {MMHG, 0.7500638},
            {TORR, 0.7500638}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, const double& inVal, UNITS outUnit);
    };
}

#endif // CONVERTER_H
