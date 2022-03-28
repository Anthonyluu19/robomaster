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

#ifndef TAPROOT_ERROR_CONTROLLER_MOCK_HPP_
#define TAPROOT_ERROR_CONTROLLER_MOCK_HPP_

#include <string>

#include <gmock/gmock.h>

#include "tap/errors/error_controller.hpp"

/**
 * @param[in] error Error to check.
 * @param[in] substr Substring to check in the error description for.
 */
bool errorDescriptionContainsSubstr(
    const tap::errors::SystemError& error,
    const std::string& substr);

namespace tap
{
namespace mock
{
class ErrorControllerMock : public tap::errors::ErrorController
{
public:
    ErrorControllerMock(tap::Drivers* drivers);
    virtual ~ErrorControllerMock();

    MOCK_METHOD(void, addToErrorList, (const tap::errors::SystemError& error), (override));
};  // class ErrorControllerMock
}  // namespace mock
}  // namespace tap

#endif  // TAPROOT_ERROR_CONTROLLER_MOCK_HPP_
