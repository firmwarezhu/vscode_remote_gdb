# VS Code GDB Debugging Setup

This project demonstrates how to set up GDB debugging in VS Code for C/C++ applications.

## Prerequisites

- VS Code with C/C++ extension installed
- GCC compiler
- GDB debugger
- Make build system

## Project Structure

```
:~/experiments$ tree -a
.
├── buggy_program  
├── buggy_program.c
├── Makefile
└── .vscode
    ├── c_cpp_properties.json
    ├── launch.json
    └── tasks.json

1 directory, 6 files
```

## Setup Instructions

1. Install required tools:
   ```bash
   sudo apt update
   sudo apt install build-essential gdb
   ```


2. Start debugging:
   - Set breakpoints in `buggy_program.c`
   - Press F5 or use Run > Start Debugging
   - Select "GDB Launch" configuration

## Essential Configuration Files

### 1. Makefile
Essential build configuration:
- Defines compilation flags (including debug symbols)
- Manages build process
- Sets compiler options

### 2. launch.json
Controls how VS Code launches the debugger:
- Program path and arguments
- GDB settings
- Build tasks integration

### 3. tasks.json
Defines build commands:
- Compilation using make
- Error detection and reporting

