// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

using System;
using System.Runtime.InteropServices;

namespace Ocean
{
    internal static class Program
    {
        [DllImport("x86\\Ocean.Core.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetRandomSeed", ExactSpelling = true)]
        private static extern IntPtr SetRandomSeed(int seed);

        [DllImport("x64\\Ocean.Core.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetRandomSeed", ExactSpelling = true)]
        private static extern IntPtr SetRandomSeed64(int seed);

        [STAThread]
        private static void Main()
        {
            if (Environment.Is64BitProcess)
                SetRandomSeed64(Environment.TickCount);
            else
                SetRandomSeed(Environment.TickCount);

            using (OceanGame game = new OceanGame())
                game.Run();
        }
    }
}
