# matrix-multiplication

## Requirements

If `build-essential` are not already installed in your machine, you'll need them in order to compile (practically it's header files like `stdio.h`):

```sh
sudo apt install build-essential
```

## How to compile

```sh
gcc matrix-mul.c
```

## How to run

### Run with input from keyboard

```sh
./a.out
```

The program expects from standard input (default: keyboard) 6 lines (first three lines for the three rows of array `a`, then three lines for the three rows of array `b`). Each line should contain 3 integers separated by whitespace like so: `2 -5 35`.

### Run with input from file

```sh
./a.out < input.txt
```