# CS201: Data Structures and Algorithms

My C solutions for CS201 assignments at NIT Silchar (2023).

| File | What it does |
|---|---|
| `Assignment 1/Assign1q1.c` | Adds two arbitrarily large integers stored as strings |
| `Assignment 1/Assign1q2.c` | Multiplies two large integers stored as strings |
| `Assignment 1/Assign1q3.c` | Divides a large integer string by an `int` |
| `Assignment 1/Assign1q4.c` | Long division to a chosen number of decimal places |
| `Assignment 1/Assign1q5.c` | Fast exponentiation by repeated squaring |
| `Assignment 2` | Graph stored as a bit-packed adjacency matrix, with edge insert and delete |
| `Assignment3.c` | Sparse matrix conversion, then addition, subtraction, multiplication and powers in sparse form |

Each file is standalone. Compile and run one with:

```bash
gcc "Assignment 1/Assign1q1.c" -o q1 && ./q1
```

`Assignment 2` has no file extension, so tell gcc it is C: `gcc -x c "Assignment 2" -o a2`.
