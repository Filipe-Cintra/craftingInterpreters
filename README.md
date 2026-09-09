# Crafting Interpreters

My completed implementations of the **Lox** programming language from Bob Nystrom's [Crafting Interpreters](https://craftinginterpreters.com/).

This repo houses both interpreters built throughout the book: **jlox** (the Java tree-walk interpreter) and **clox** (the C bytecode virtual machine), along with a few custom Lox programs I wrote to test performance and edge cases.

## What's Inside

```text
.
├── com/craftinginterpreters      # Tree-walk interpreter in Java
├── c/                            # Stack-based VM & compiler in C
└── examples/                     # Lox test scripts (benchmarks, OOP, algorithms)

```

### jlox

The first implementation from the book. It parses Lox source into an Abstract Syntax Tree (AST) and walks the tree directly to execute code.

* Covers AST evaluation, dynamic typing, closures, and class inheritance.
* **To run:**
```bash
cd com/craftinginterpreters/lox
javac com/craftinginterpreters/lox/Lox.java
java com.craftinginterpreters.lox.Lox path/to/script.lox

```



### clox

The second implementation—a fast, stack-based bytecode VM written from scratch in C.

* Features a single-pass bytecode compiler, custom hash tables, flat object representation, upvalue closure tracking, and a mark-and-sweep garbage collector.
* **To build and run:**
```bash
cd c
make
./clox path/to/script.lox

```



## Running the Examples

You can test either interpreter using the scripts in `examples/`:

```bash
./clox/clox examples/drawTree.lox

```

* `drawTree.lox` - Tests string concatenation and dynamic string building on the heap.
* `fib.lox` - Recursive Fibonacci benchmark for function call overhead, stack frames, and `clock()` timing.
* `guess.lox` - A binary search number guessing game that tests control flow and basic math.
* `wavePrint.lox` - Generates an ASCII pattern using nested loops, functions, and manual integer arithmetic to simulate modulo operations.
