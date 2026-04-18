# Push_swap

A `42` project that sorts a stack of integers using only the allowed `push_swap` operations.

## About

`push_swap` computes a minimal sequence of operations to sort a stack in ascending order.
The program is built in C and follows the rules of the `42` curriculum for this exercise.

## Features

- Supports input as separate command-line arguments or a single quoted string.
- Validates numeric input and integer limits.
- Detects duplicate values.
- Skips sorting if the stack is already sorted.
- Uses a custom `libftprintf` implementation for output.

## Project structure

- `Makefile`: build targets for the project.
- `push_swap.h`: shared types and function declarations.
- `operations/`: implementation of move operations:
  - `sa`, `sb`, `ss`
  - `pa`, `pb`
  - `ra`, `rb`, `rr`
  - `rra`, `rrb`, `rrr`
- `src/`: argument parsing, validation, sorting logic and helpers.
- `printf/`: included `libftprintf` library.
- `checker_linux`: optional verifier binary if available.

## Build

From the repository root, run:

```bash
make
```

Useful commands:

```bash
make clean    # remove object files
make fclean   # remove binary and object files
make re       # rebuild from scratch
```

## Usage

Run the binary with values to sort:

```bash
./push_swap 3 2 1 0
./push_swap "3 2 1 0"
```

### Example

```bash
./push_swap 2 1 3
```

Possible output:

```bash
sa
```


### Test 200 

https://github.com/user-attachments/assets/fb5c0902-2db8-4aff-82d7-88eaa195a2d2

## Validation rules

The program checks that:

- each argument is a valid integer string,
- the values fit within `int` limits,
- no duplicate numbers are present,
- the stack is not already sorted before starting.

## Notes

- Invalid input returns an error and exits.
- If the input is already sorted, the program exits without printing operations.
- This implementation is designed for the `push_swap` requirements from the `42` school.

## Author

- `hmimouni`
