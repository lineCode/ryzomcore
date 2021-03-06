// NeLNS - MMORPG Framework <http://dev.ryzom.com/projects/nel/>
// Copyright (C) 2010  Winch Gate Property Limited
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef NL_PATCH_H
#define NL_PATCH_H

#include <string>

#include "nel/misc/types_nl.h"
#include "nel/misc/config_file.h"

extern NLMISC::CConfigFile ConfigFile;

void startPatchThread (const std::string &serverPath, const std::string &serverVersion, const std::string &urlOk, const std::string &urlFailed, const std::string &logSeparator);
bool patchEnded (std::string &url, bool &ok);
bool patchState (std::string &state, std::string &stateLog);




// get the version with the VERSION file
std::string getVersion ();

// set the VERSION file with the version
void setVersion (const std::string &version);

#endif // NL_PATCH_H

/* End of patch.h */
