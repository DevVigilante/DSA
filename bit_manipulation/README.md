# Binary Number System & Bit Manipulation

## 1. Binary Number System

The **Binary Number System** is a base-2 number system.

- Decimal Number System → Base 10
- Binary Number System → Base 2
- Binary uses only two digits: `0` and `1`

---

## 2. Decimal to Binary

To convert a decimal number into binary:

1. Divide the number by `2`.
2. Record the remainder.
3. Divide the quotient by `2`.
4. Continue until the quotient becomes `0`.
5. Read the remainders from **bottom to top**.

### Example: Convert 4 to Binary

```text
4 ÷ 2 = 2 remainder 0
2 ÷ 2 = 1 remainder 0
1 ÷ 2 = 0 remainder 1
```

Reading the remainders from bottom to top:

```text
100
```

Therefore:

```text
4₁₀ = 100₂
```

### Example: Convert 5 to Binary

```text
5 ÷ 2 = 2 remainder 1
2 ÷ 2 = 1 remainder 0
1 ÷ 2 = 0 remainder 1
```

Therefore:

```text
5₁₀ = 101₂
```

---

## 3. Binary to Decimal

Each binary digit represents a power of `2`.

The powers increase from **right to left**:

```text
2³  2²  2¹  2⁰
```

### Example: Convert `101` to Decimal

```text
1 × 2² = 4
0 × 2¹ = 0
1 × 2⁰ = 1
```

Therefore:

```text
101₂ = 4 + 0 + 1
     = 5₁₀
```

### Example: Convert `100` to Decimal

```text
1 × 2² = 4
0 × 2¹ = 0
0 × 2⁰ = 0
```

Therefore:

```text
100₂ = 4₁₀
```

---

## 4. Decimal to 4-bit Binary

| Decimal | Binary |
|--------:|:------:|
| 0 | `0000` |
| 1 | `0001` |
| 2 | `0010` |
| 3 | `0011` |
| 4 | `0100` |
| 5 | `0101` |
| 6 | `0110` |
| 7 | `0111` |
| 8 | `1000` |
| 9 | `1001` |
| 10 | `1010` |

---

# Bitwise Operators

Bitwise operators are used to perform operations directly on the individual bits of an integer.

| Operator | Operation |
|:--------:|-----------|
| `&` | Binary AND |
| `\|` | Binary OR |
| `^` | Binary XOR |
| `~` | Binary One's Complement |
| `<<` | Binary Left Shift |
| `>>` | Binary Right Shift |

---

## 1. Binary AND (`&`)

The AND operation returns `1` only when **both bits are `1`**.

### Truth Table

| A | B | A & B |
|---|---|:-----:|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### Example

```text
A = 0101
B = 0110
    ----
    0100
```

Therefore:

```text
0101 & 0110 = 0100
```

And:

```text
0100₂ = 4₁₀
```

---

## 2. Binary OR (`|`)

The OR operation returns `1` when **at least one of the bits is `1`**.

### Truth Table

| A | B | A \| B |
|---|---|:-----:|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

### Example

```text
A = 0101
B = 0110
    ----
    0111
```

Therefore:

```text
0101 | 0110 = 0111
```

And:

```text
0111₂ = 7₁₀
```

---

## 3. Binary XOR (`^`)

The XOR operation returns `1` when the two bits are **different**.

### Truth Table

| A | B | A ^ B |
|---|---|:-----:|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

### Example

```text
A = 0101
B = 0110
    ----
    0011
```

Therefore:

```text
0101 ^ 0110 = 0011
```

And:

```text
0011₂ = 3₁₀
```

---

## 4. Binary One's Complement (`~`)

The one's complement operator flips every bit.

```text
0 → 1
1 → 0
```

### Example

```text
A  = 0101
~A = 1010
```

Therefore:

```text
0101 → 1010
```

> Note: For actual integer types, the result of `~` depends on the integer's bit width and signed representation. The example above is a 4-bit illustration.

---

## 5. Binary Left Shift (`<<`)

The left-shift operator moves bits toward the **left**.

### Example

```text
A = 0101

0101 << 1
     ↓
1010
```

Therefore:

```text
5 << 1 = 10
```

For non-negative integers, a left shift by `k` positions generally corresponds to multiplication by `2ᵏ`, provided the value remains representable.

```text
n << k ≈ n × 2ᵏ
```

### Example

```text
2 << 1
```

Binary representation:

```text
2 = 0010

0010 << 1
     ↓
0100
```

Therefore:

```text
2 << 1 = 4
```

---

## 6. Binary Right Shift (`>>`)

The right-shift operator moves bits toward the **right**.

### Example

```text
A = 0101

0101 >> 1
     ↓
0010
```

Therefore:

```text
5 >> 1 = 2
```

For non-negative integers, right shifting by `k` positions generally corresponds to integer division by `2ᵏ`.

```text
n >> k ≈ n / 2ᵏ
```

> Note: The behavior of right shifting negative signed integers is language- and implementation-dependent. The examples here use non-negative integers.

---

# Bit Operation

## 1. Get Bit

The **Get Bit** operation is used to determine whether a specific bit of a number is `0` or `1`.

In these notes, bit positions are counted from the **rightmost bit starting at position 1**.

For example:

```text
Number:    0 1 0 1
Position:  4 3 2 1
```

### Algorithm

1. Create a bitmask.
2. Perform AND (`&`) between the number and the bitmask.
3. Check the result:
   - `0` → the selected bit is `0`
   - Non-zero → the selected bit is `1`

### Bitmask

For the `i`-th bit:

```text
bitmask = 1 << (i - 1)
```

### Get Bit Formula

```text
result = n & (1 << (i - 1))
```

Then:

```text
result == 0  → bit is 0
result != 0  → bit is 1
```

---

### Questions
- QuestionID 1: Get the 3rd Bit of Number `n = 5`
- QuestionID 2: Get the 4th Bit of Number `n = 5`
- QuestionID 3: Get the `i`-th Bit of Number `n`

---

## 2. Set Bit

The **Set Bit** operation is used to set a specific bit of a number to `1`.

If the selected bit is already `1`, it remains `1`.

### Algorithm

1. Create a bitmask.
2. Perform OR (`|`) between the number and the bitmask.
3. The resulting number has the selected bit set to `1`.

### Bitmask

For the `i`-th bit:

```text
bitmask = 1 << (i - 1)
```

### Set Bit Formula

```text
newNumber = n | (1 << (i - 1))
```

---

### Questions
- QuestionID 4: Set the 2nd Bit of Number `n = 5`

---

## 3. Clear Bit

The **Clear Bit** operation is used to clear the bit at the `i`-th position of an integer `n`, which means updating the selected bit to `0`.

### Algorithm

1. Create a bitmask for the required bit position.
2. Perform XOR (`^`) with the bitmask.

> XOR toggles the selected bit. Therefore, it clears the bit when the selected bit is currently `1`. To guarantee that a bit is cleared regardless of its current value, the standard approach is AND with the complemented bitmask.

### Bitmask

For the `i`-th bit:

```text
bitmask = 1 << (i - 1)
```

### Clear Bit Formula

```text
newNumber = n ^ (1 << (i - 1))
```

### Questions

- QuestionID 5: Clear the 2nd Bit of Number `n = 7`
- QuestionID 6: Clear the 1st Bit of Number `n = 7`