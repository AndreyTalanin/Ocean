// Ocean - Copyright © Andrey Talanin 2020
// This file is subject to the terms and conditions defined in the
// file 'LICENSE.md', which is a part of this source code package.

using System;

using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;

namespace Ocean
{
    public class OceanGame : Game
    {
        private const bool c_isFullScreen = false;
        private const bool c_isHardwareFullScreen = false;
        private const int c_windowWidth = 1280;
        private const int c_windowHeight = 720;
        private const int c_targetFps = 25;

        protected GraphicsDeviceManager GraphicsDeviceManager { get; }

        public OceanGame()
        {
            GraphicsDeviceManager = new GraphicsDeviceManager(this)
            {
                IsFullScreen = c_isFullScreen,
                HardwareModeSwitch = c_isHardwareFullScreen,
                PreferredBackBufferWidth = c_windowWidth,
                PreferredBackBufferHeight = c_windowHeight
            };
            IsMouseVisible = true;
            IsFixedTimeStep = true;
            TargetElapsedTime = TimeSpan.FromSeconds(1) / c_targetFps;
        }

        protected override void Update(GameTime gameTime)
        {
            if (Keyboard.GetState().IsKeyDown(Keys.Escape))
                Exit();

            base.Update(gameTime);
        }

        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(Color.Black);

            base.Draw(gameTime);
        }
    }
}
