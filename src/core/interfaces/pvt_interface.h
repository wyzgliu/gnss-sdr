/*!
 * \file pvt_interface.h
 * \brief This class represents an interface to a PVT block.
 * \author Javier Arribas, 2011. jarribas(at)cttc.es
 *
 * Abstract class for PVT solvers. Since all its methods are virtual,
 * this class cannot be instantiated directly, and a subclass can only be
 * instantiated directly if all inherited pure virtual methods have been
 * implemented by that class or a parent class.
 *
 * -------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2019  (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software defined Global Navigation
 *          Satellite Systems receiver
 *
 * This file is part of GNSS-SDR.
 *
 * GNSS-SDR is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GNSS-SDR is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNSS-SDR. If not, see <https://www.gnu.org/licenses/>.
 *
 * -------------------------------------------------------------------------
 */


#ifndef GNSS_SDR_PVT_INTERFACE_H_
#define GNSS_SDR_PVT_INTERFACE_H_

#include "galileo_almanac.h"
#include "galileo_ephemeris.h"
#include "gnss_block_interface.h"
#include "gps_almanac.h"
#include "gps_ephemeris.h"

/*!
 * \brief This class represents an interface to a PVT block.
 *
 * Abstract class for PVT interfaces, derived from GNSSBlockInterface.
 * Since all its methods are virtual,
 * this class cannot be instantiated directly, and a subclass can only be
 * instantiated directly if all inherited pure virtual methods have been
 * implemented by that class or a parent class.
 */
class PvtInterface : public GNSSBlockInterface
{
public:
    virtual void reset() = 0;
    virtual void clear_ephemeris() = 0;
    virtual std::map<int, Gps_Ephemeris> get_gps_ephemeris() const = 0;
    virtual std::map<int, Galileo_Ephemeris> get_galileo_ephemeris() const = 0;
    virtual std::map<int, Gps_Almanac> get_gps_almanac() const = 0;
    virtual std::map<int, Galileo_Almanac> get_galileo_almanac() const = 0;

    virtual bool get_latest_PVT(double* longitude_deg,
        double* latitude_deg,
        double* height_m,
        double* ground_speed_kmh,
        double* course_over_ground_deg,
        time_t* UTC_time) = 0;
};

#endif /* GNSS_SDR_PVT_INTERFACE_H_ */
