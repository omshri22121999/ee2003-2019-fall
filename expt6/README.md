
# Extra Implementations to CPU

## Letting the DMEM take as long as it wants
The current DMEM is a combinational block, we assume that the reads (Load
operation) from the memory happen instantaneously. However, this is not the
case. Depending on the size, structure and speed of the memory, different blocks
of DMEM might take different times to respond. It is
## Exception Handling
The existing design does not detect errors and exceptions in the code. In the
code loaded into the IMEM, there might be cases of misaligned load/store op-
erations, trying to write into load/store into addresses which are greater in size
than what is supported, or just that the instruction read from the IMEM might
not be in the RISCV ISA.
## Multiply Operations from the RISCV 32M ISA
The existing CPU does not execute Ḿultiplyóperations. The MUL, MULH,
MULHSU, MULHU operations are all powerful operations, but take long times
to implement in the data path. Having the Multiply operation in the CPU
reduces the complexity of programs loaded in the IMEM substantially.
