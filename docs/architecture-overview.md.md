# Architecture Overview

This repository provides a collection of foundational safety‑critical software patterns used in embedded and automotive systems. The architecture emphasizes clarity, determinism, and modularity. Each component is isolated, testable, and designed to illustrate robust engineering principles without hardware dependencies.

## Core Modules

### Watchdog
A lightweight software watchdog responsible for supervising system activity. It tracks service intervals and detects timeout conditions. The implementation is intentionally minimal to highlight the core concept.

### Fault Manager
A centralized mechanism for fault collection and severity classification. It provides deterministic fault evaluation and supports escalation to critical states.

### State Machine
A deterministic state machine controlling system behavior. It enforces explicit transitions, guard conditions, and error fallback. The design avoids implicit behavior and ensures predictable flow.

### Safe Startup Sequence
A structured initialization pipeline. Each step is executed in order, and failures halt the sequence. This pattern demonstrates controlled startup behavior for safety‑relevant systems.

## Design Principles

- **Deterministic execution**  
  All modules avoid nondeterministic behavior and hidden side effects.

- **Clear separation of responsibilities**  
  Each module has a single, well‑defined purpose.

- **Minimal dependencies**  
  The architecture remains hardware‑agnostic and portable.

- **Testability**  
  Unit tests validate core logic and ensure predictable behavior.

- **Maintainability**  
  Code is structured for readability, extensibility, and long‑term support.

## Data Flow

The modules operate independently but can be composed into larger systems:

- The **Watchdog** supervises timing.
- The **Fault Manager** aggregates system faults.
- The **State Machine** reacts to system conditions and faults.
- The **Startup Sequence** ensures safe initialization before entering operational states.

This modular approach mirrors real-world safety‑critical architectures while remaining simple enough for demonstration and educational use.
