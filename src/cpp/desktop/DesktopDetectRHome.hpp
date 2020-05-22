/*
 * DesktopDetectRHome.hpp
 *
 * Copyright (C) 2020 by RStudio, PBC
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */
#ifndef DESKTOP_DETECT_R_HOME_HPP
#define DESKTOP_DETECT_R_HOME_HPP

#include <QString>
#include <QSettings>

#include "DesktopOptions.hpp"
#include "DesktopRVersion.hpp"

namespace rstudio {
namespace desktop {

bool prepareEnvironment(Options& settings);

} // namespace desktop
} // namespace rstudio


#endif // DESKTOP_DETECT_R_HOME_HPP
