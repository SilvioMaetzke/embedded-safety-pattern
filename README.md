embedded-safety-patterns
This repository contains a collection of safety‑critical software patterns commonly used in embedded and automotive systems. The goal is to provide clear, minimal, and well‑structured implementations that demonstrate robust design principles suitable for real‑time and safety‑relevant applications.

Overview
Safety‑critical systems rely on predictable behavior, fault tolerance, and clear separation of responsibilities. This repository showcases several foundational patterns:

Watchdog supervision

Fault detection and handling

Deterministic state machines

Safe startup and shutdown sequences

Basic unit tests for validation

All examples are intentionally hardware‑agnostic and focus on software architecture, clarity, and correctness.

Components
Watchdog
A simple software watchdog demonstrating:

Periodic servicing

Timeout detection

System recovery hooks

Located in: src/watchdog/

Fault Manager
A centralized fault‑handling module:

Fault registration

Severity classification

Clear and deterministic fault‑response logic

Located in: src/fault_manager/

State Machine
A deterministic state machine pattern:

Explicit state transitions

Guard conditions

Error‑state fallback

Located in: src/state_machine/

Safe Startup Sequence
A structured initialization flow:

Ordered subsystem activation

Validation steps

Fail‑safe fallback

Located in: src/safe_startup/

Build Instructions
This project uses CMake.

Code
mkdir build
cd build
cmake ..
make
Testing
Unit tests are located in the tests/ directory and can be executed after building:

Code
./run_tests
Design Principles
The implementations follow these principles:

Deterministic behavior

Clear separation of safety‑related logic

Minimal dependencies

Readable and maintainable code

Defensive programming practices

License
MIT License
