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
 * Purpose: IConnection
 * Since:   2011-12-08
 */

#ifndef _NAPI_ICONNECTION_
#define _NAPI_ICONNECTION_

#include <Name.h>
#include <Requirements.h>
#include <Events.h>

#include <vector>

namespace Homer { namespace Base {

///////////////////////////////////////////////////////////////////////////////

class IConnection
{
public:
	IConnection(){ }
    virtual ~IConnection(){ }

    virtual int availableBytes() = 0;
    virtual void read(char* pBuffer, int &pBufferize) = 0;
    virtual void write(char* pBuffer, int pBufferSize) = 0;
    virtual bool getBlocking() = 0;
    virtual void setBlocking(bool pState) = 0;
    virtual Name* getRemoteName() = 0;

    virtual bool isClosed() = 0;
    virtual Name* getName() = 0;
    virtual void cancel() = 0;
    virtual bool changeRequirements(Requirements *pRequirements) = 0;
    virtual Requirements* getRequirements() = 0;
    virtual Events getEvents() = 0;
};

typedef std::vector<IConnection*> IConnections;

///////////////////////////////////////////////////////////////////////////////

}} // namespaces

#endif
