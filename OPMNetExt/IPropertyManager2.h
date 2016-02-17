// (C) Copyright 2005-2007 by Autodesk, Inc. 
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

namespace Autodesk
{
  namespace AutoCAD
  {
    namespace Windows
    {
      namespace OPM
      {
        [InteropServices::Guid(
          "FABC1C70-1044-4aa0-BF8D-91FFF9052715"
         )]
        [InteropServices::InterfaceTypeAttribute(
          InteropServices::ComInterfaceType::InterfaceIsIUnknown
         )]
        [InteropServices::ComVisible(true)]

        public interface class IPropertyManager2
        {
          void AddProperty(
            [InteropServices::In,
              InteropServices::MarshalAs(
                InteropServices::UnmanagedType::IUnknown
              )
            ] Object^ pDynPropObj
          );
          void RemoveProperty(
            [InteropServices::In,
              InteropServices::MarshalAs(
                InteropServices::UnmanagedType::IUnknown
              )
            ] Object^ pDynPropObj
          );
          void GetDynamicProperty(
            [InteropServices::In] long index,
            [InteropServices::Out,
              InteropServices::MarshalAs(
                InteropServices::UnmanagedType::IUnknown
              )
            ] interior_ptr<Object^> value
          );
          void GetDynamicPropertyByName(
            [InteropServices::In,
              InteropServices::MarshalAs(
                InteropServices::UnmanagedType::BStr
              )
            ] System::String^ name,
            [InteropServices::Out,
              InteropServices::MarshalAs(
                InteropServices::UnmanagedType::IUnknown
              )
            ] interior_ptr<Object^> value
          );
          void GetDynamicPropertyCountEx(
            [InteropServices::Out] long* count
            );
          void GetDynamicClassInfo(
            [InteropServices::In,
              InteropServices::MarshalAs(
                InteropServices::UnmanagedType::IUnknown
              )
            ] Object^ pDynPropObj,
            [InteropServices::Out,
              InteropServices::MarshalAs(
                /*InteropServices::UnmanagedType::ITypeInfo*/
                InteropServices::UnmanagedType::IUnknown
              )
            ] interior_ptr<Object^> typeInfo,
            [InteropServices::Out] unsigned long* dwCookie
          );
        };
      }
    }
  }
}
