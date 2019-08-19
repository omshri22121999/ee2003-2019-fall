# Assignment 1 - EE2003

---

OM SHRI PRASATH - EE17B113

---

## Usage

Go to the file containing the .v files and run the following code :

```verilog
iverilog *.v
./a.out
```

## Remarks

Although I've implemented the opcode conversion for all the instructions, I've implemented the instructions for only the instructions which do not require registers and only required two variables to operate on.

## Opcode Encoding values

| Opcode Value | Opcode Instruction |
| ------------ | ------------------ |
| 0            | LUI                |
| 1            | AUIPC              |
| 2            | JAL                |
| 3            | JALR               |
| 4            | BEQ                |
| 5            | BNE                |
| 6            | BLT                |
| 7            | BGE                |
| 8            | BLTU               |
| 9            | BGEU               |
| 10           | LB                 |
| 11           | LH                 |
| 12           | LW                 |
| 13           | LBU                |
| 14           | LHU                |
| 15           | SB                 |
| 16           | SH                 |
| 17           | SW                 |
| 18           | ADDI               |
| 19           | SLTI               |
| 20           | SLTIU              |
| 21           | XORI               |
| 22           | ORI                |
| 23           | ANDI               |
| 24           | SLLI               |
| 25           | SRLI               |
| 26           | SRAI               |
| 27           | ADD                |
| 28           | SUB                |
| 29           | SLL                |
| 30           | SLT                |
| 31           | SLTU               |
| 32           | XOR                |
| 33           | SRL                |
| 34           | SRA                |
| 35           | OR                 |
| 36           | AND                |
| 37           | FENCE              |
| 38           | ECALL              |
| 39           | EBREAK             |
