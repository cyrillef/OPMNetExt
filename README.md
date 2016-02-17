
# OPM.Net Extension

[![build status](https://img.shields.io/badge/build-passed-blue.svg)](https://github.com/cyrillef/OPMNetExt/tree/master/OPMNetSample)
[![ObjectARX](https://img.shields.io/badge/ObjectARX-2016-blue.svg)](http://usa.autodesk.com/adsk/servlet/index?siteID=123112&id=773204)
[![AutoCAD](https://img.shields.io/badge/AutoCAD-2016-green.svg)](http://www.autodesk.com/developautocad)
![Platforms](https://img.shields.io/badge/platform-windows-lightgray.svg)
[![License](http://img.shields.io/:license-mit-blue.svg)](http://opensource.org/licenses/MIT)


## Motivation

AutoCAD's Properties Palette - once known as the Object Properties Manager (OPM) - is a very handy
way to display properties inside your application, whether those properties are associated with 
individual objects or with the application itself. The Properties Palette uses COM to communicate 
with the object(s) in question, and has always required the use of C++ to expose particular interfaces 
that control the display of the properties in the palette, so its functionality has not been available 
to developers using managed .NET languages such as C# and VB.NET.
There is some portion of the Properties Palette functionality exposed via the 
Autodesk.AutoCAD.Windows.ToolPalette namespace, such as the IAcPiPropertyDisplay interface allowing 
objects and commands to customize the display of properties in the property inspector window, but 
this is far from complete. This library looks at exposing more of the standard Properties Palette 
functionality to .NET languages.


## Description



## Dependencies

* Visual Studio 2010
* ObjectARX and AutoCAD from 2010 to 2016


## Setup/Usage Instructions

Please read Kean Walmsley' blog articles on how to use the library.

- [Exposing AutoCAD's Properties Palette functionality to .NET - Part 1](http://through-the-interface.typepad.com/through_the_interface/2009/03/exposing-autocads-properties-palette-functionality-to-net---part-1.html)
- [Exposing AutoCAD's Properties Palette functionality to .NET - Part 2](http://through-the-interface.typepad.com/through_the_interface/2009/03/exposing-autocads-properties-palette-functionality-to-net---part-2.html)


--------

## License

This sample is licensed under the terms of the [MIT License](http://opensource.org/licenses/MIT).
Please see the [LICENSE](LICENSE) file for full details.


## Written by

Cyrille Fauvel (Autodesk Developer Network)<br />
http://www.autodesk.com/adn<br />
http://around-the-corner.typepad.com/<br />