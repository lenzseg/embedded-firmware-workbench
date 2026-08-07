# Embedded Firmware Workbench

## Multi-Architecture Bare-Metal & FreeRTOS Sandbox

[![CI Firmware Build](https://github.com/lenzseg/embedded-firmware-workbench/actions/workflows/firmware-build.yml/badge.svg)](https://github.com/lenzseg/embedded-firmware-workbench/actions/workflows/firmware-build.yml)
[![Language: C11 & C++17](https://img.shields.io/badge/Language-C11%20%7C%20C%2B%2B17-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B17)
[![Architectures](https://img.shields.io/badge/Arch-AVR%20%7C%20ARM%20Cortex--M%20%7C%20Xtensa-orange.svg)]()
[![FreeRTOS](https://img.shields.io/badge/RTOS-FreeRTOS%20v10.x-brightgreen.svg)](https://www.freertos.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

A unified repository demonstrating register-level driver development, zero-cost modern C++ abstractions, and FreeRTOS task scheduling across 8-bit AVR, 32-bit ARM Cortex-M, and Xtensa microcontrollers.

### Platforms

To use the exercises in the repository, you need at least one of the following platforms, or any other compatibleboard with the same MCU:

| Platform | Architecture | Core / Frequency | Toolchain |
| :--- | :--- | :--- | :--- |
| **Arduino Uno / Nano** | AVR (ATmega328P) | 8-bit AVR @ 16 MHz | `avr-gcc`, `avrdude` |
| **Blue Pill** | ARM Cortex-M3 (STM32F103C8T6) | 32-bit ARM @ 72 MHz | `arm-none-eabi-gcc`, `openocd` |
| **ESP32 DevKit** | Xtensa LX6 / RISC-V | 32-bit Dual-Core @ 240 MHz | `riscv-none-elf` / `xtensa-esp32-elf` |  

### Toolchains

Ensure the cross-compilers and flashing tools are installed:

### AVR (ATmega328P)

```sh
# Ubuntu / Debian
sudo apt install gcc-avr avr-libc avrdude
```

### ARM Cortex-M (STM32F103)
```
# Ubuntu / Debian
sudo apt install gcc-arm-none-eabi gdb-multiarch openocd
```

### Xtensa (ESP32)
```
# Ubuntu / Debian
sudo apt install xtensa-esp32-elf
```
