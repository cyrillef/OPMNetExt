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

//- IDynamicProperty2.h

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
        [InteropServices::Guid("9CAF41C2-CA86-4ffb-B05A-AC43C424D076")]
        [InteropServices::InterfaceTypeAttribute(InteropServices::ComInterfaceType::InterfaceIsIUnknown)]
        [InteropServices::ComVisible(true)]
        public interface class IDynamicProperty2
        {
          void GetGUID(
            [InteropServices::Out] System::Guid% propGUID
          );
          void GetDisplayName(
            [InteropServices::Out,
             InteropServices::MarshalAs(
              InteropServices::UnmanagedType::BStr
             )
            ] interior_ptr<System::String^> name);
          void IsPropertyEnabled(
            [InteropServices::In,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::IUnknown
             )
            ] Object^ pUnk,
            [InteropServices::Out] System::Int32% bEnabled
          );
          void IsPropertyReadOnly(
            [InteropServices::Out] System::Int32% bReadonly
          );
          void GetDescription(
            [InteropServices::Out,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::BStr
             )
            ] interior_ptr<System::String^> description
          );
          void GetCurrentValueName(
            [InteropServices::Out,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::BStr
             )
            ] interior_ptr<System::String^> name
          );
          void GetCurrentValueType(
            [InteropServices::Out] ushort% pVarType
          );
          void GetCurrentValueData(
            [InteropServices::In,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::IUnknown
             )
            ] Object^ pUnk,
            [InteropServices::In,
             InteropServices::Out,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::Struct
             )
            ] interior_ptr<Object^> varData
          );
          void SetCurrentValueData(
            [InteropServices::In,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::IUnknown
             )
            ] Object^ pUnk,
            [InteropServices::In,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::Struct
             )
            ] Object^ varData
          );
          void Connect(
            [InteropServices::In,
             InteropServices::MarshalAs(
               /*IDynamicPropertyNotify2*/
               InteropServices::UnmanagedType::IUnknown
             )
            ] Object^ pSink
          );
          void Disconnect();
        };
        [InteropServices::Guid(
           "975112B5-5403-4197-AFB8-90C6CA73B9E1"
        )]
        [InteropServices::InterfaceTypeAttribute(
           InteropServices::ComInterfaceType::InterfaceIsIUnknown
        )]
        [InteropServices::ComVisible(true)]
        public interface class IDynamicPropertyNotify2
        {
          void OnChanged(
            [InteropServices::In,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::IUnknown
             )
            ] Object^ pDynamicProperty
          );
          void GetCurrentSelectionSet(
            [InteropServices::In,
             InteropServices::Out,
             InteropServices::MarshalAs(
               InteropServices::UnmanagedType::Struct
             )
            ] interior_ptr<Object^> pSelection
          );
        };
      }
    }
  }
}