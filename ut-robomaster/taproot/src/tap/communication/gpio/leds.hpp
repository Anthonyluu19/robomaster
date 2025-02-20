/*
 * Copyright (c) 2020-2021 Advanced Robotics at the University of Washington <robomstr@uw.edu>
 *
 * This file is part of Taproot.
 *
 * Taproot is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Taproot is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Taproot.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef TAPROOT_LEDS_HPP_
#define TAPROOT_LEDS_HPP_

#include <cstdint>

#include "tap/util_macros.hpp"

namespace tap
{
namespace gpio
{
/**
 * A class specifically for handling the wrapping of the digital
 * pins connected to LEDs on the RoboMaster development board.
 */
class Leds
{
public:
    Leds() = default;
    DISALLOW_COPY_AND_ASSIGN(Leds)
    mockable ~Leds() = default;

    /**
     * The LEDs correspond to the color on the RoboMaster type C board.
     */
    enum LedPin
    {
        Green,
        Red,
        Blue
    };

    /**
     * Initializes the LEDs by putting the pins in output mode and settting
     * all the pins to low.
     */
    mockable void init();

    /**
     * Sets a given led to either high or low.
     *
     * @note setting an LED to high (`isSet=true`) will turn the LED off and setting
     *      an LED to low (`isSet=false`) will turn the LED on.
     * @param[in] pin the LED to set
     * @param[in] isSet `true` if you want to turn the LED off, `false` if you want
     *      to turn the LED on.
     */
    mockable void set(LedPin pin, bool isSet);
};  // class Leds

}  // namespace gpio

}  // namespace tap

#endif  // TAPROOT_LEDS_HPP_
