# Half-Native, Half-Managed Ocean

### Overview

This program represents an environment emulating an ocean filled with objects, which are representatives of 4 types:

* **Rock.** Just a rock that can neither move nor die or take any other action.
* **Seaweed.** An ocean plant that reproduces if given free space and dies after some time. 
* **Herbivorous Fish.** A fish that eats seaweed. Reproduces if well-fed and dies at some age.
* **Carnivorous Fish.** Another fish that hunts the previous one and uses it as food. Reproduces and dies according to the same rules.

Rocks are displayed by dark gray points, while seaweed, herbivorous and carnivorous fish are marked with green, yellow, and red colors respectively.

The program demonstrates an example of how managed assembly (in this particular case a MonoGame application written in C#) can interoperate with a native library using the P/Invoke technology.

### Build notes

In order to build and run it yourself, you will need several tools and SDKs:

* A C/C++ compiler. The one that was used here is Visual C++ 14.2, but any other will do as well.
* [.NET Core 3.1 SDK](https://dotnet.microsoft.com/download/dotnet-core/3.1)
* [Microsoft Visual Studio 2019](https://visualstudio.microsoft.com/ru/downloads/) in order to use the solution file. It is also optional.

Please, note that you will need to build both x86 and x64 versions of the *Ocean.Core* library before running the *Ocean* application, since x86 and x64 processes use different libraries to call functions from.
