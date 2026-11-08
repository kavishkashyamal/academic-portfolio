# C Programming Exercises

Standalone C exercises covering input handling, functions, arrays, and basic
control flow.

## Programs

| File | Description |
| --- | --- |
| `atm.c` | PIN verification and a basic ATM menu |
| `average_marks.c` | Calculates the average mark and counts marks at or above the average |
| `counting_occurances.c` | Counts how often a target value appears in an array |
| `electricity_bill.c` | Calculates an electricity bill from a meter reading |
| `find_max.c` | Finds the larger of two numbers |
| `min_max_array.c` | Finds the minimum and maximum values in an array |
| `number_search.c` | Array input and element-search exercise; implementation is in progress |
| `odd_even_count.c` | Counts and prints the even and odd values in an array |

## Compile and Run

Compile a program from the repository root with GCC:

```bash
gcc c_programming/average_marks.c -o average_marks
```

Run the executable on Linux or macOS:

```bash
./average_marks
```

On Windows, compile with an `.exe` extension and run it from PowerShell:

```powershell
gcc c_programming\average_marks.c -o c_programming\average_marks.exe
.\c_programming\average_marks.exe
```

Replace `average_marks` with the source file name you want to run. Generated
`.exe` files are ignored by Git.

## Requirements

- GCC or another C compiler
- A terminal or shell for running compiled programs