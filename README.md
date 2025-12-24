*This project has been created as part of the 42 curriculum by <balsayed>.*

# Push_swap

## 🗣️ Description
The **push_swap** project is a core algorithm project at 42. You have at your disposal a set of integer values, 2 stacks (**Stack A** and **Stack B**), and a set of instructions to manipulate both stacks.

The goal is to write a program in C called `push_swap` which calculates and displays the **shortest sequence of instructions** to sort the integer arguments received.

---

## ⚙️ The Operations (Logic)

The program is only allowed to use the following **11 operations** to sort the stacks:

### Swap (Switch the top 2 numbers)
* **`sa`**: Swap the first 2 elements at the top of stack A.
* **`sb`**: Swap the first 2 elements at the top of stack B.
* **`ss`**: Perform `sa` and `sb` at the same time.

### Push (Move from top of one stack to top of other)
* **`pa`**: Take the first element at the top of B and put it at the top of A.
* **`pb`**: Take the first element at the top of A and put it at the top of B.

### Rotate (Shift UP - First becomes Last)
* **`ra`**: Shift up all elements of stack A by 1. The first element becomes the last one.
* **`rb`**: Shift up all elements of stack B by 1. The first element becomes the last one.
* **`rr`**: Perform `ra` and `rb` at the same time.

### Reverse Rotate (Shift DOWN - Last becomes First)
* **`rra`**: Shift down all elements of stack A by 1. The last element becomes the first one.
* **`rrb`**: Shift down all elements of stack B by 1. The last element becomes the first one.
* **`rrr`**: Perform `rra` and `rrb` at the same time.

---

## 🗺️ Project Roadmap (Algorithm Steps)

This is the logical flow the program follows to sort the numbers:

### 1. Initialization & Parsing
* **Input Check:** Parse arguments, handle split strings ("1 2 3"), and check for errors (non-integers, duplicates, > INT_MAX).
* **Create Stack:** Fill Stack A with the input numbers.

### 2. The "Push to B" Phase (Stack A -> Stack B)
* **Setup:** Push the first 2 nodes from A to B immediately.
* **The Loop:** While Stack A has more than 3 nodes:
    1.  **Init Nodes:** Calculate the current index (`current_position`) for everyone.
    2.  **Set Target:** For every number in A, find the best "target" position in B (descending order).
    3.  **Cost Analysis:** Calculate the price (instruction count) to move every node in A to its target in B.
    4.  **Select Cheapest:** Find the node in A with the lowest combined cost.
    5.  **Move:** Execute operations (`ra`, `rb`, `rr`, etc.) to get the cheapest node and its target to the top, then push (`pb`).

### 3. Sort Three
* Once Stack A has only 3 nodes left, run a hard-coded logic (`sort_three`) to sort them instantly.

### 4. The "Return Home" Phase (Stack B -> Stack A)
* **The Loop:** While Stack B is not empty:
    1.  **Set Target:** For the number at the top of B, find the best target in A (ascending order).
    2.  **Move:** Rotate Stack A (`ra` or `rra`) until the target is at the top.
    3.  **Push:** Push the node back (`pa`).

### 5. Final Alignment
* Ensure the smallest number is at the top of Stack A. If it's not, rotate until it is.

---

## 📚 Resources

### References
* [Medium Article: Push Swap Tutorial](https://medium.com)
* [YouTube: Sorting Algorithms Explained](https://youtube.com)

### AI Usage
This project utilized AI assistance for the following tasks:
* **Logic Explanation:** AI was used to explain the concept of the Turk Algorithm and cost calculation.
* **Debugging:** AI helped identify segmentation faults in the linked list implementation.
* **Testing:** AI suggested bash commands for generating random numbers and validating the output.

---

## 💻 Commands (Quick Reference)

```bash
# 1. Compile
make

# 2. Manual Execute
./push_swap 2 1 3 6 5 8

# 3. Test 3 Numbers
ARG="2 1 3"; ./push_swap $ARG | wc -l

# 4. Test 5 Numbers
ARG="1 5 2 4 3"; ./push_swap $ARG | wc -l

# 5. Test 100 Random Numbers
ARG=$(ruby -e "puts (1..100).to_a.shuffle.join(' ')"); ./push_swap $ARG | wc -l

# 6. Test 500 Random Numbers
ARG=$(ruby -e "puts (1..500).to_a.shuffle.join(' ')"); ./push_swap $ARG | wc -l

# 7. Check with Checker_OS
ARG=$(ruby -e "puts (1..100).to_a.shuffle.join(' ')"); ./push_swap $ARG | ./checker_OS $ARG

# 8. Check Memory Leaks
valgrind --leak-check=full ./push_swap 2 1 3 6 5 8
