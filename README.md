# 🌟Solar System Gravity Simulation

A sophisticated **OpenGL-based 3D gravity simulation** that demonstrates Newtonian physics, space-time distortion effects, and interactive celestial body creation. This project combines realistic physics with beautiful 3D visualization to create an educational and entertaining space simulation.

## ✨ Features

### 🪐 **Realistic Physics Engine**
- **Newtonian Gravitation**: Implements F = G × (m₁ × m₂) / r² with real gravitational constant
- **Real Astronomical Masses**: Uses actual masses of celestial bodies (Sun: 1.989×10²⁵ kg, Earth: 5.972×10²³ kg)
- **Collision Detection**: Objects bounce off each other with energy loss
- **Real-time Force Calculation**: All objects interact gravitationally every frame

### 🌟 **Space-Time Visualization**
- **Dynamic Grid System**: Reference grid that bends around massive objects
- **General Relativity Effects**: Visual representation of space-time distortion using Schwarzschild radius
- **Center of Mass Tracking**: Grid automatically adjusts to system's center of mass
- **Gravitational Field Visualization**: See how mass affects the fabric of space

### 🎮 Better Controls & Interface
- **Smooth Camera Movement**: Improved WASD controls with better sensitivity
- **Mouse Look**: Free camera rotation for exploring the solar system
- **Zoom Controls**: Scroll wheel for getting closer to planets
- **Reset Camera**: 'R' key to return to optimal viewing position
- **Pause/Resume**: 'K' key to control simulation speed


### 🎨 Visual Improvements
- **Smoother Spheres**: Higher resolution sphere rendering (25x25 segments)
- **Better Lighting**: Improved shader effects for realistic appearance
- **Grid System**: Reference grid showing gravitational field distortion
- **Optimized Scaling**: Better size ratios for visibility

## 🎯 How to Run

### Quick Start

**manually build**:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ./GravitySim
   ```


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