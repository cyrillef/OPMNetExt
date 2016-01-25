// (C) Copyright 2008-2009 by Autodesk, Inc. 
//
// Permission to use, copy, modify, and distribute this software in
// object code form for any purpose and without fee is hereby granted, 
// provided that the above copyright notice appears in all copies and 
// that both that copyright notice and the limited warranty and
// restricted rights notice below appear in all supporting 
// documentation.
//
// AUTODESK PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
// AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC. 
// DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
// UNINTERRUPTED OR ERROR FREE.
//
// Use, duplication, or disclosure by the U.S. Government is subject to 
// restrictions set forth in FAR 52.227-19 (Commercial Computer
// Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
// (Rights in Technical Data and Computer Software), as applicable.

#pragma once

using namespace System;
using namespace System::Runtime;
using namespace System::Runtime::InteropServices;
using namespace Autodesk::AutoCAD::Runtime;
using namespace Autodesk::AutoCAD::DatabaseServices;

#include "dynprops.h"
#include "OPMPropertyExtension.h"
#include "OPMPropertyExtensionFactory.h"

namespace Autodesk
{
  namespace AutoCAD
  {
    namespace Windows
    {
      namespace OPM
      {
        public ref class xOPM
        {
        public protected:
          xOPM() {}

        public:
          static AcMgdOPMPropertyExtensionFactory^ xGET_OPMEXTENSION_CREATE_PROTOCOL();
          static Object^ xGET_OPMPROPERTY_MANAGER(RXClass^ pAcRxClass);
        };
      }
    }
  }
}
