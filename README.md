# CRISP Rendering Engine
This is an educational, self-organised project with no real meaning.
It just exists because of the intuition of learning about vulkan and3d Engine Mechanics

# SETUP
## Prequisits

- CMake
- Make
- gcc/clang (LLVM) compiler for C++

## Installation
### On Ubuntu/Debian based Distros
```bash
apt install libglfw3 libglfw3-de libvulkan-dev libglm-dev
```

- *IMPORTANT*: Untested

### Arch-based Distros
```bash
pacman -S glfw-x11 vulkan-tools vulkan-icd-loader vulkan-headers vulkan-validation-layers glm
```

#### If its still not compiling, try to install the platform-specific vulkan-drivers
- With an Intel (integrated) GPU
```bash
vulkan-intel
```

- With an NVidia GPU
```bash
nvidia-utils
```

- With an AMD Radeon GPU
```bash
vulkan-radeon
```

# Compilation and running the app

- Compilation
To compile all, run:
```bash
make all
```
in bash

- Running the App:
```bash
make run
```

