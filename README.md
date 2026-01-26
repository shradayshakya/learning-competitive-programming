# Competitive Programming in C++

This repository contains my solutions and practice problems for Competitive Programming. It is configured for a streamlined workflow using **Sublime Text** on macOS.

## 🚀 Environment Setup

### 1. Prerequisites

To run the build system included in this repo, you need a modern GCC compiler and the `coreutils` package (for the timeout command).

**Install via Homebrew:**

```bash
# Install GCC (update version in build system if necessary)
brew install gcc
```

**Install Coreutils (provides 'gtimeout')**

```bash
brew install coreutils
```

### 2. Project Structure

The workflow relies on file redirection. Ensure these files exist in your working directory:

- `*.cpp`: Your source code (e.g., 1.cpp, sol.cpp)
- `.inputf.in`: The file where you paste the problem input.
- `outputf.in`: The file where the program writes the output.

### ⚙️ Sublime Text Build System

This project uses a custom build system to compile the code and handle input/output redirection automatically.
Setup:

1. Open Sublime Text.
2. Go to Tools > Build System > New Build System...
3. Paste the following configuration

```JSON
{
  "cmd" : ["g++-15 $file_name -o $file_base_name && gtimeout 4s ./$file_base_name<inputf.in>outputf.in"],
  "selector" : "source.c",
  "shell": true,
  "working_dir" : "$file_path"
}
```

4. Save it as CP-Build.sublime-build.

```
> Note: If you installed a different version of GCC (e.g., g++-14), update g++-15 in the JSON above to match your version.
```

### ⌨️ Workflow & Shortcuts

The ideal layout for this setup is a 3-column view:

1. Left: The C++ Code
2. Middle: inputf.in
3. Right: outputf.in

### Essential Shortcuts (macOS)

| Action              | Shortcut               | Description                                           |
| :------------------ | :--------------------- | :---------------------------------------------------- |
| **3-Column Layout** | `Cmd` + `Option` + `3` | Opens three side-by-side editing panes.               |
| **Build & Run**     | `Cmd` + `Shift` + `B`  | Compiles the code and pipes output to `outputf.in`.   |
| **Move Focus**      | `Ctrl` + `1`, `2`, `3` | Quickly switch between code, input, and output files. |
