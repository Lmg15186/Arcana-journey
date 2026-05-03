# Arcana Journey

An interactive text-based tarot reading game built in C++, designed as a 
hands-on application of Object-Oriented Programming using a real-world 
domain — tarot card readings.

## Overview

The player chooses their zodiac sign and then draws five tarot cards from a 
shuffled deck. Each card presents a description and three possible choices. 
The player's decisions earn wisdom points, and at the end of the journey 
they receive a final spiritual reading based on their accumulated score.

The project applies the four core OOP principles in a meaningful, 
domain-driven way — not as generic exercises, but as tools to model 
something with personality.

## Architecture

The game is built around a clean class hierarchy with separation of concerns:

| Class | Role |
|---|---|
| `Card` | Abstract base class — defines the interface every card must implement |
| `TarotCard` | Standard tarot card with description, options and choice evaluation |
| `SpecialTarotCard` | Specialised card type that overrides scoring logic for unique behaviour |
| `Player` | Encapsulates player state (zodiac sign, wisdom points) |
| `GameEngine` | Orchestrates the game loop — deck initialisation, shuffling, card draws, final result |

## OOP Principles Applied

- **Encapsulation** — `Player` keeps state private and exposes only controlled getters and setters.
- **Inheritance** — `TarotCard` inherits from `Card`; `SpecialTarotCard` inherits from `TarotCard`, forming a 3-level hierarchy.
- **Polymorphism** — the deck is stored as `vector<Card*>`, and the game loop calls `display()` and `evaluateChoice()` through the base pointer; the correct derived implementation is invoked at runtime.
- **Abstract Classes** — `Card` declares pure virtual methods (`display()`, `evaluateChoice()`), forcing every derived class to provide its own implementation.

## Technical Highlights

- Virtual destructors for safe polymorphic deletion
- Random deck shuffling using `std::random_device` and `std::mt19937`
- Manual heap memory management with cleanup in `GameEngine`'s destructor
- Const-correctness on read-only methods (`display()`, `getFinalReading()`)

## How to Run

1. Make sure you have a C++ compiler installed (g++ or clang)
2. Compile the source files:
```bash
   g++ -std=c++17 *.cpp -o arcana
```
3. Run the game:
```bash
   ./arcana
```

## What I Learned

- Designing a multi-level class hierarchy with abstract base classes
- Applying polymorphism through base-pointer collections
- Managing dynamically allocated objects safely with virtual destructors
- Translating a real-world domain (tarot) into clean OOP code
- Structuring a game with a dedicated engine class to orchestrate flow

---

Part of my IT learning journey at the Academy of Interactive Technology (AIT) — see more at [github.com/Lmg15186](https://github.com/Lmg15186)
