/*=============================================================================
 Copyright (C) 2009 Ryan Hope <rmh3093@gmail.com>
 Copyright (C) 2010 WebOS Internals <support@webos-internals.org>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 =============================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "luna_service.h"
#include "luna_methods.h"

bool client_status(LSHandle* lshandle, LSMessage *message, void *ctx) {

  bool retVal = true;

  LSError lserror;
  LSErrorInit(&lserror);

  char *jsonResponse = 0;
  int len = 0;

  len = asprintf(&jsonResponse, "{\"serviceVersion\":\"%s\"}", VERSION);
  if (jsonResponse) {
    LSMessageReply(lshandle,message,jsonResponse,&lserror);
    free(jsonResponse);
  } else
    LSMessageReply(lshandle,message,"{\"returnValue\":-1,\"errorText\":\"Generic error\"}",&lserror);

  LSErrorFree(&lserror);

  return retVal;
}

LSMethod lscommandmethods[] = {
  { "status", client_status },
  { 0, 0 }
};

bool register_methods(LSPalmService *serviceHandle, LSError lserror) {
  return LSPalmServiceRegisterCategory(serviceHandle, "/", lscommandmethods,
				       NULL, NULL, NULL, &lserror);
}
