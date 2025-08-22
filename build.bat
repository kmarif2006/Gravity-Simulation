@echo off
echo Building Improved Solar System Simulation...

if not exist build mkdir build
cd build

echo Running CMake...
cmake .. -G "MinGW Makefiles"

if %ERRORLEVEL% NEQ 0 (
    echo CMake failed! Please check your setup.
    pause
    exit /b 1
)

echo Building with Make...
mingw32-make

if %ERRORLEVEL% NEQ 0 (
    echo Build failed! Please check for errors.
    pause
    exit /b 1
)

echo Build successful! Running improved solar system simulation...
echo.
echo ========================================
echo SOLAR SYSTEM SIMULATION
echo ========================================
echo.
echo You should now see:
echo - Yellow Sun in the center
echo - 8 colored planets orbiting around it:
echo   * Mercury (gray)
echo   * Venus (orange) 
echo   * Earth (blue)
echo   * Mars (red)
echo   * Jupiter (brown)
echo   * Saturn (light brown)
echo   * Uranus (light blue)
echo   * Neptune (dark blue)
echo.
echo Controls:
echo - WASD: Move camera
echo - Mouse: Look around
echo - Scroll: Zoom in/out
echo - R: Reset camera position
echo - K: Pause/Resume
echo - Q: Quit
echo.

GravitySim.exe

pause
