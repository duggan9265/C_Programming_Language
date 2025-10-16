#include <stdio.h>

int main(void) // int means main returns an integer (0). void just means main has no arguments
{
    printf("Hello, World\n");
    return 0; //why return 0 is exolained later.
}

/*

| Step | Command                                | What it does                           |
| ---- | -------------------------------------- | -------------------------------------- |
| 1️⃣  | `gcc hello_world.c -o hello_world.exe` | Compiles the C code into an executable |
| 2️⃣  | `./hello_world.exe`                    | Runs the compiled program              |

to view the assembly and create file called hello_world.s:

In PowerShell (inside your current folder), run:

gcc -S hello_world.c -o hello_world.s

📋 What this does:

-S → means “compile to assembly, but don’t assemble or link.”

-o hello_world.s → saves the result as a .s file (text-based assembly)

*/