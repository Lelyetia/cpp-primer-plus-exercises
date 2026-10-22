# C++ Primer Plus Program Listings

[中文说明](#中文说明) | [English](#english)

## 中文说明

这个仓库记录我学习《C++ Primer Plus》时整理和编写的书中程序清单。代码按章节归档，每个 `.cpp` 文件都是包含自己 `main()` 的独立例程，可以单独编译、运行和调试。

### 目录结构

```text
cpp-primer-plus-exercises/
├── .vscode/                            # VS Code 编译、运行和格式化配置
├── Chapter2 Getting Started with C++/
├── Chapter3 Dealing with Data/
├── Chapter4 Compound Types/
├── .clang-format                       # C/C++ 格式规则
├── .gitignore
├── LICENSE
└── README.md
```

章节目录采用 `Chapter<章节号> <章节英文标题>` 命名，程序文件采用 `<程序清单编号>_<程序名>.cpp` 命名，例如 `Chapter4 Compound Types/4.4_instr2.cpp`。后续章节沿用相同结构。

### 环境准备

仓库自带的 VS Code 配置适用于 Ubuntu/Linux，使用系统的 `g++` 和 GDB，编译标准为 C++11。

```bash
sudo apt update
sudo apt install build-essential gdb
```

安装 [Visual Studio Code](https://code.visualstudio.com/)，以及微软的 [C/C++ 扩展](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)。

### 在 VS Code 中使用

1. 克隆仓库，并在 VS Code 中打开仓库根目录：

   ```bash
   git clone https://github.com/Lelyetia/cpp-primer-plus-exercises.git
   cd cpp-primer-plus-exercises
   code .
   ```

2. 打开要运行的 `.cpp` 文件，保存并保持它为当前编辑器文件。
3. 在“运行和调试”面板中选择 **C++：当前文件**。
4. 按 **Ctrl + F5** 运行，在底部“终端”面板中输入数据、查看输出。

| 操作 | Linux 快捷键 |
| --- | --- |
| 保存并自动格式化 | `Ctrl + S` |
| 编译并运行当前文件 | `Ctrl + F5` |
| 编译并调试当前文件 | `F5` |
| 只编译当前文件 | `Ctrl + Shift + B` |
| 格式化当前文件 | `Ctrl + Shift + I` |

调试时，点击行号左侧设置断点，使用 `F10` 逐行执行，使用 `F5` 继续运行。

每次启动都会先编译当前文件，再运行生成的程序。所有例程共用 `build/current-example` 作为编译输出，切换例程时会覆盖该文件；一次运行一个例程，结束后再切换。`build` 目录会自动创建，并在 VS Code 文件树中隐藏。

### 在终端中使用

在仓库根目录执行以下命令，可以编译、运行指定例程：

```bash
mkdir -p build
g++ -std=c++11 -g -O0 -Wall -Wextra "Chapter4 Compound Types/4.4_instr2.cpp" -o build/current-example
./build/current-example
```

替换源文件路径即可运行其他例程。

### 添加程序清单

在相应章节目录中新建按编号命名的 `.cpp` 文件，并编写独立的 `main()`。打开该文件后即可使用上述快捷键，无需为每个例程添加运行配置。

格式规则由 `.clang-format` 统一定义：花括号另起一行，缩进使用 4 个空格。构建产物由 `.gitignore` 忽略，提交时保留源码、共享配置和项目文档。

### 许可证

见 [LICENSE](LICENSE)。

## English

This repository contains program listings organized and written while studying *C++ Primer Plus*. Listings are grouped by chapter. Each `.cpp` file is a standalone program with its own `main()` and can be compiled, run, and debugged individually.

### Layout

Chapter directories use `Chapter<chapter-number> <chapter-title>`. Source files use `<listing-number>_<program-name>.cpp`, for example `Chapter4 Compound Types/4.4_instr2.cpp`. New chapters follow the same convention.

The `.vscode` directory provides shared build, launch, and formatting settings. The `.clang-format` file defines the C/C++ formatting rules.

### Requirements

The included VS Code configuration targets Ubuntu/Linux, using the system `g++`, GDB, and C++11.

```bash
sudo apt update
sudo apt install build-essential gdb
```

Install [Visual Studio Code](https://code.visualstudio.com/) and Microsoft's [C/C++ extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).

### Run in VS Code

Clone this repository and open its root directory in VS Code. Open and save the `.cpp` file you want to run, then select **C++：当前文件** in the Run and Debug view.

| Action | Linux shortcut |
| --- | --- |
| Save and format | `Ctrl + S` |
| Build and run the active file | `Ctrl + F5` |
| Build and debug the active file | `F5` |
| Build the active file | `Ctrl + Shift + B` |
| Format the active file | `Ctrl + Shift + I` |

Use the integrated terminal for program input and output. Set breakpoints beside the line numbers, press `F10` to step over, and press `F5` to continue debugging.

Each launch compiles the active source file first. All listings share the output executable `build/current-example`, which is replaced on each build. Run one listing at a time and finish it before switching. The build directory is created automatically and hidden in the VS Code file tree.

### Run from a terminal

From the repository root:

```bash
mkdir -p build
g++ -std=c++11 -g -O0 -Wall -Wextra "Chapter4 Compound Types/4.4_instr2.cpp" -o build/current-example
./build/current-example
```

Replace the source path to run another listing.

### Add a listing

Create a numbered `.cpp` file with its own `main()` in the appropriate chapter directory. The shared VS Code configuration works for new listings without adding per-program launch configurations.

Formatting uses Allman braces and four-space indentation. Build outputs are ignored by Git; commit source files, shared configuration, and documentation.

### License

See [LICENSE](LICENSE).
