# CPP_Calculator
# Simple C++ Calculator

A basic command-line calculator written in C++. Supports addition, subtraction, multiplication, and division, with input validation and the ability to run multiple calculations in one session.

## Features

- Perform `+`, `-`, `*`, `/` operations
- Handles division-by-zero errors gracefully
- Detects invalid operators
- Loop to run multiple calculations without restarting the program

## Getting Started

### Prerequisites

You need a C++ compiler installed, such as `g++`.

- **Windows:** Install [MinGW](https://www.mingw-w64.org/) or use WSL
- **macOS:** Run `xcode-select --install` in the terminal
- **Linux:** Run `sudo apt install g++` (Debian/Ubuntu) or your distro's equivalent

### Compiling

```bash
g++ -o calculator calculator.cpp
```

### Running

```bash
./calculator        # macOS/Linux
.\calculator.exe    # Windows
```

## Example Usage

```
===== Simple Calculator =====
Enter first number: 5
Enter operator (+, -, *, /): +
Enter second number: 3
Result: 5 + 3 = 8

Do you want to calculate again? (y/n): n
Goodbye!
```

## License

This project is open source and available under the [MIT License](LICENSE).
