# 🌟 Improved Solar System Gravity Simulation

A **completely redesigned** 3D OpenGL-based gravity simulation featuring all the planets of our solar system with realistic orbital mechanics and beautiful visualization.

## ✨ What's New & Improved

### 🪐 Complete Solar System
- **Sun**: Bright yellow star at the center with glow effect
- **All 8 Planets**: Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune
- **Realistic Colors**: Each planet has its characteristic color
- **Proper Scaling**: Planets are sized and positioned according to real astronomical data

### 🚀 Enhanced Physics
- **Real Astronomical Data**: Uses actual masses, radii, and orbital distances
- **Accurate Orbital Mechanics**: Calculates proper orbital velocities for stable orbits
- **Real-time Gravitational Forces**: All bodies interact with each other
- **Collision Detection**: Handles planet collisions realistically

### 🎮 Better Controls & Interface
- **Smooth Camera Movement**: Improved WASD controls with better sensitivity
- **Mouse Look**: Free camera rotation for exploring the solar system
- **Zoom Controls**: Scroll wheel for getting closer to planets
- **Reset Camera**: 'R' key to return to optimal viewing position
- **Pause/Resume**: 'K' key to control simulation speed
- **Better Window Title**: "Solar System Simulation" instead of "3D_TEST"

### 🎨 Visual Improvements
- **Smoother Spheres**: Higher resolution sphere rendering (25x25 segments)
- **Better Lighting**: Improved shader effects for realistic appearance
- **Grid System**: Reference grid showing gravitational field distortion
- **Optimized Scaling**: Better size ratios for visibility

## 🎯 How to Run

### Quick Start
1. **Double-click `build.bat`** - This will automatically build and run the simulation
2. **Or manually build**:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ./GravitySim
   ```

### What You'll See
When the simulation starts, you should see:
- **Yellow Sun** glowing in the center
- **8 colored planets** orbiting at different distances:
  - Mercury (gray) - closest to Sun
  - Venus (orange) 
  - Earth (blue) - our home planet
  - Mars (red)
  - Jupiter (brown) - largest planet
  - Saturn (light brown)
  - Uranus (light blue)
  - Neptune (dark blue) - farthest from Sun

## 🎮 Controls

| Key | Action |
|-----|--------|
| **WASD** | Move camera forward/backward/left/right |
| **Mouse** | Look around (camera rotation) |
| **Scroll Wheel** | Zoom in/out |
| **Space/Shift** | Move camera up/down |
| **R** | Reset camera to optimal position |
| **K** | Pause/Resume simulation |
| **Q** | Quit application |

## 🌍 Solar System Data

The simulation uses real astronomical data:

| Body | Mass (kg) | Radius (km) | Distance from Sun (AU) | Color |
|------|-----------|-------------|------------------------|-------|
| Sun | 1.989×10³⁰ | 696,340 | 0.0 | Yellow |
| Mercury | 3.285×10²³ | 2,439.7 | 0.387 | Gray |
| Venus | 4.867×10²⁴ | 6,051.8 | 0.723 | Orange |
| Earth | 5.972×10²⁴ | 6,371.0 | 1.0 | Blue |
| Mars | 6.39×10²³ | 3,389.5 | 1.524 | Red |
| Jupiter | 1.898×10²⁷ | 69,911 | 5.203 | Brown |
| Saturn | 5.683×10²⁶ | 58,232 | 9.537 | Light Brown |
| Uranus | 8.681×10²⁵ | 25,362 | 19.191 | Light Blue |
| Neptune | 1.024×10²⁶ | 24,622 | 30.069 | Dark Blue |

## 🔧 Technical Features

### Physics Implementation
- **Gravitational Force**: F = G × (m₁ × m₂) / r²
- **Orbital Velocities**: Calculated using circular orbit approximation
- **Real-time Calculations**: All gravitational forces computed every frame
- **Collision Handling**: Elastic collisions between celestial bodies

### Rendering Features
- **OpenGL 3.3 Core Profile**: Modern shader-based rendering
- **Smooth Spheres**: High-quality sphere generation with proper lighting
- **Depth Testing**: Proper 3D depth rendering
- **Blending**: Alpha blending for grid effects

### Performance Optimizations
- **Efficient Physics**: Optimized gravitational force calculations
- **Memory Management**: Proper cleanup of OpenGL resources
- **Smooth Animation**: 60+ FPS on modern hardware

## 🐛 Troubleshooting

### If you only see one object:
1. Press **R** to reset camera position
2. Use **scroll wheel** to zoom out
3. Use **WASD** to move around and find the planets
4. Check console output for initialization messages

### If planets are too small:
- Use **scroll wheel** to zoom in closer
- The planets are scaled for realistic proportions
- Inner planets (Mercury, Venus, Earth, Mars) are closer to the Sun
- Outer planets (Jupiter, Saturn, Uranus, Neptune) are further out

### Build issues:
- Ensure you have MSYS2 with all required packages installed
- Check that your `CMakeLists.txt` paths match your system
- Make sure you have a C++17 compatible compiler

## 🚀 Future Enhancements

Potential improvements for future versions:
- Add moons for major planets
- Implement elliptical orbits
- Add asteroid belt
- Include spacecraft trajectories
- Add time controls (speed up/slow down)
- Implement more accurate orbital mechanics
- Add texture mapping for planets
- Include atmospheric effects

## 📝 Code Structure

The improved simulation features:
- **`CelestialBody` class**: Represents planets and stars with physics properties
- **`SolarSystemData` struct**: Stores astronomical data for initialization
- **`InitializeSolarSystem()`**: Sets up the solar system with realistic initial conditions
- **Modern OpenGL shaders**: Handle lighting and rendering effects
- **Real-time physics loop**: Calculates gravitational forces and updates positions

## 🎓 Educational Value

This simulation is perfect for:
- **Astronomy Education**: Learn about the solar system
- **Physics Learning**: Understand gravitational forces and orbital mechanics
- **Programming Practice**: Study OpenGL, C++, and real-time simulation
- **Visualization**: See how the solar system actually works

---

**Enjoy exploring our solar system!** 🌟 