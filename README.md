# OS-Lab Repository README

This repository contains lab assignments, system programming implementations, and operating system concepts developed during coursework in Computer Science and Engineering. It includes hands-on implementations of process management, CPU scheduling, synchronization primitives, memory management, and file system operations in C/C++.

---

## 🧪 List of Experiments

| S.No. | Experiment |
| ----- | ---------- |
| 1 | Demonstration of `fork()` System Call |
| 2 | Parent Process Computes Sum of Odd Numbers and Child Process Computes Sum of Even Numbers Using `fork()` |
| 3 | Demonstration of `wait()` System Call |
| 4 | Implementation of Orphan Process and Zombie Process |
| 5 | Implementation of Pipe | 
| 6 | Implementation of FIFO / Named Pipe | 
| 7 | Implementation of Message Queue | 
| 8 | Implementation of Shared Memory |
| 9 | Implementation of FCFS CPU Scheduling | 
| 10 | Implementation of SJF CPU Scheduling |
| 11 | Implementation of Priority Scheduling |
| 12 | Implementation of FIFO Page Replacement Algorithm | 
| 13 | Implementation of LRU Page Replacement Algorithm | 

---

### Repository Structure

```text
Aug7/Class/
Aug17/Class/
July31/
  Class/
  Homework/
Sep18/
Sep25/
  Sep25/
  __MACOSX/
Oct16/
Oct 23/  Process sums and IPC
Oct3 0/  CPU scheduling and page replacement
README.md
```
---

## Topics & Experiments Covered

* **Process Management:** Creating and managing processes using system calls like `fork()`, `exec()`, `wait()`, and inter-process communication via pipes and message queues.
* **CPU Scheduling Algorithms:** Simulating preemptive and non-preemptive scheduling policies:
* First-Come, First-Served (FCFS)
* Shortest Job First (SJF / SRTF)
* Priority Scheduling
* Round Robin (RR)


* **Process Synchronization:** Solving classical synchronization problems using POSIX threads (`pthread`), mutex locks, and semaphores.
* **Deadlock Handling:** Implementation of Dijkstra's Banker's Algorithm for deadlock avoidance and resource allocation graphs.
* **Memory Management:** Simulating virtual memory management techniques and page replacement algorithms (FIFO, Least Recently Used, Optimal).

---

## Getting Started

### Prerequisites

* A C/C++ compiler supporting C11/C++11 or higher (e.g., `gcc`, `g++`)
* Make build utility (optional, for automated compilation)
* Linux / Unix environment (recommended for system call execution)

### Cloning the Repository

```bash
git clone https://github.com/priyanshi-r76/OS-Lab.git
cd OS-Lab

```
---

## Running the Programs

1. Navigate to the specific experiment directory:
```bash
cd "CPU Scheduling"

```
2. Compile the source code:
```bash
gcc -o scheduler fcfs.c

```
3. Run the executable:
```bash
./scheduler

```
---

## Author

* **Priyanshi Rawat**
B.Tech Computer Science and Engineering
Graphic Era University
---

## Details

**Section** - CSE-iOS
**Class Roll No.** - 48
**Subject** - Operating System Lab Manual
**Faculty** - Dr. Shiddhant Thapliyal

---
