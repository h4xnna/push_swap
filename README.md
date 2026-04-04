# Push_swap

Push_swap project for the 42 curriculum.

## Description

This program sorts a stack of integers using only a limited set of allowed operations.
The goal is to output a minimal sequence of instructions to sort the values in ascending order.

## Repository structure

- `Makefile`: builds the main project.
- `push_swap.h`: function and structure declarations.
- `operations/`: implementations of allowed operations (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`).
- `src/`: main logic, argument validation, sorting algorithms, and utilities.
- `printf/`: included `libftprintf` library for output.
- `checker_linux`: optional verifier binary if available.

## Build

From the project root, run:

```bash
make
```

Useful commands:

```bash
make clean   # remove object files
make fclean  # remove binary and object files
make re      # rebuild from scratch
```

## Usage

The `push_swap` binary accepts values as separate arguments or as a single quoted string.

Examples:

```bash
./push_swap 3 2 1 0
./push_swap "3 2 1 0"
```

The program validates:

- each argument is a valid number,
- values fit in an `int`,
- there are no duplicates,
- the stack is not already sorted.

## Example

```bash
./push_swap 2 1 3
```

Possible output:

```bash
sa
```

## Notes

- If the arguments are invalid, the program prints an error and exits.
- If the stack is already sorted, no operations are printed.
- The project is designed to follow the `push_swap` rules from the 42 curriculum.

## Author

- `hmimouni`

---

Good luck with your GitHub repository!