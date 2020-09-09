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

namespace PressureConv
{
    class Converter
    {

    private:

        /*  -- 1 millibar used to convert --
         *
         *  Following values are based on 1 mbar.
         */

        /// Millibar
        const double mbar = 1;

        /// Megapascal equal to 1 millibar
        const double MPa = 0.0001;

        /// Bar equal to 1 millibar
        const double bar = 0.001;

        /// Kilogram force per square centimetre equal to 1 millibar
        const double kgf_cm2 = 0.001019716;

        /// Kilopascal equal to 1 millibar
        const double kPa = 0.1;

        /// Hectopascal equal to 1 millibar
        const double hPa = 1;

        /// Kilogram force per square meter equal to 1 millibar
        const double kgf_m2 = 10.19716;

        /// Pascal equal to 1 millibar
        const double Pa = 100;

        /// Kilopound per square inch equal to 1 millibar
        const double ksi = 0.000014504;

        /// Pound per square inch equal to 1 millibar
        const double psi = 0.01450377;

        /// Pound per square foot equal to 1 millibar
        const double psf = 2.088543;

        /// Centimetre of water equal to 1 millibar
        const double cmH2O = 1.019744289;

        /// Millimetre of water equal to 1 millibar
        const double mmH2O = 10.19744289;

        /// Feet of water equal to 1 millibar
        const double ftH2O = 0.033456177;

        /// Inch of water equal to 1 millibar
        const double inH2O = 0.401474129;

        /// Physical atmosphere equal to 1 millibar
        const double atm = 0.000986923;

        /// Technical atmosphere equal to 1 millibar
        const double tech_atm = 0.001019716;

        /// Inch of mercury
        const double inHg = 0.02953007;

        /// Centimetre of mercury
        const double cmHg = 0.07500638;

        /// Millimetre of mercury
        const double mmHg = 0.7500638;

        /// Torr
        const double torr = 0.7500638;

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

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, const double& inVal, UNITS outUnit);
    };
}

#endif // CONVERTER_H
