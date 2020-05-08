// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

using System;

namespace Ocean
{
    public static class Program
    {
        [STAThread]
        static void Main()
        {
            using (OceanGame game = new OceanGame())
                game.Run();
        }
    }
}
