# CPU Scheduling Simulator

A modular **CPU Scheduling Simulator** implemented in **C** that demonstrates how different scheduling algorithms manage process execution in an operating system.  
The simulator allows users to input processes, run scheduling algorithms, visualize execution through **Gantt charts**, and analyze performance metrics such as **waiting time** and **turnaround time**.

---

# Features

- Implementation of classical CPU scheduling algorithms
- Manual process input or file-based input
- Console-based **Gantt Chart visualization**
- Calculation of performance metrics
  - Average Waiting Time
  - Average Turnaround Time
- Modular architecture for easy extension
- Algorithm comparison support

---

# Scheduling Algorithms Implemented

The simulator currently supports the following algorithms:

- **First Come First Serve (FCFS)**
- **Shortest Job First (SJF – Preemptive)**
- **Shortest Job First (Non-Preemptive)**
- **Priority Scheduling (Preemptive)**
- **Priority Scheduling (Non-Preemptive)**
- **Round Robin Scheduling**

---

# Project Structure

```
cpu_scheduler/
│
├── algorithms/           # Scheduling algorithm implementations
│   ├── fcfs.c
│   ├── sjf_preemptive.c
│   ├── sjf_nonpreemptive.c
│   ├── priority_preemptive.c
│   ├── priority_nonpreemptive.c
│   └── round_robin.c
│
├── simulation/           # CPU simulation and process state handling
│   ├── cpu_simulator.c
│   ├── context_switch.c
│   └── process_states.c
│
├── visualization/        # Output visualization
│   ├── gantt_chart.c
│   ├── process_table.c
│   └── timeline.c
│
├── metrics/              # Performance analysis
│   ├── metrics.c
│   ├── performance.c
│   └── compare_algorithms.c
│
├── io/                   # Input and file handling
│   ├── input.c
│   ├── file_loader.c
│   └── result_export.c
│
├── include/              # Header files
│
├── main.c                # Program entry point
├── scheduler.c           # Scheduler logic
├── Makefile              # Build configuration
└── README.md
```

---

# System Requirements

### Hardware
- Minimum **4 GB RAM**
- Any modern processor

### Software
- Linux or **WSL (Windows Subsystem for Linux)**
- **GCC Compiler**
- **Make**

---

# Compilation

To compile the project, navigate to the project directory and run:

```bash
make
```

This will compile all modules and generate the executable:

```
cpu_scheduler
```

---

# Running the Simulator

Run the program using:

```bash
./cpu_scheduler
```

You will see a menu like:

```
--- CPU Scheduling Simulator ---

1. Load File
2. Manual Input
3. Run FCFS
4. Run SJF-P
5. Run RR
6. Run Priority-P
7. Exit
```

---

# Example Output

```
========== GANTT CHART ==========

+-------+-------+-------+
| Idle | P1   | P2   |
+-------+-------+-------+

0      1      3      6

Average Waiting Time: 0.50
Average Turnaround Time: 3.00
```

---

# Educational Purpose

This simulator was developed as an **Operating Systems academic project** to help understand how CPU scheduling algorithms work and how they affect system performance.

---

# Future Improvements

Possible future enhancements include:

- Graphical User Interface (GUI)
- Multilevel Queue Scheduling
- Multilevel Feedback Queue Scheduling
- Multi-core CPU simulation
- Real-time performance graphs

---

# Author

**Meenun Reddy**

Operating Systems Project
