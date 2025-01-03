# Undefined Behavior in C++ Vector
This repository demonstrates a common C++ error involving undefined behavior caused by dereferencing an invalid pointer after erasing an element from a `std::vector`.  The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` shows a corrected version.

## Problem
The issue stems from using an iterator or pointer to access elements within a `std::vector` and subsequently modifying the vector using methods like `erase()`.  When elements are removed, the iterators or pointers that refer to those elements or beyond become invalid.  Dereferencing an invalid pointer invokes undefined behavior, potentially leading to crashes, incorrect results, or seemingly random behavior.

## Solution
The corrected code avoids the problem by carefully managing iterators and pointers. Instead of using raw pointers, it is safer to use iterators, which automatically adjust when the vector's structure is modified.  If raw pointers are necessary for performance reasons, it's crucial to ensure they remain valid after any vector modifications.