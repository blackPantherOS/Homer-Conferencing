/*****************************************************************************
 *
 * Copyright (C) 2011 Thomas Volkert <thomas@homer-conferencing.com>
 *
 * This software is free software.
 * Your are allowed to redistribute it and/or modify it under the terms of
 * the GNU General Public License version 2 as published by the Free Software
 * Foundation.
 *
 * This source is published in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License version 2 for more details.
 *
 * You should have received a copy of the GNU General Public License version 2
 * along with this program. Otherwise, you can write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111, USA.
 * Alternatively, you find an online version of the license text under
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 *****************************************************************************/

/*
 * Purpose: ISetup
 * Since:   2011-12-08
 */

#ifndef _NAPI_ISETUP_
#define _NAPI_ISETUP_

#include <Name.h>
#include <IConnection.h>
#include <ICEPBinding.h>
#include <Requirements.h>

namespace Homer { namespace Base {

///////////////////////////////////////////////////////////////////////////////

class ISetup
{
public:
	ISetup(){ }
    virtual ~ISetup( ){ }

    virtual IConnection* connect(Name *pName, Requirements *pRequirements = 0) = 0;
    virtual ICEPBinding* bind(Name *pName, Requirements *pRequirements = 0) = 0; //TODO: callback?
    virtual Requirements getCapabilities(Name *pName, Requirements *pImportantRequirements = 0) = 0;
};

///////////////////////////////////////////////////////////////////////////////

}} // namespaces

#endif
