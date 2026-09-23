# Battleship: Terminal Coordinate Engine (C)

A lightweight, terminal-based tactical coordinate game developed in C, featuring input validation, state persistence, and anti-duplicate strike mechanics.

## 🎯 Features
- **2D Coordinate System:** Processes discrete row and column inputs on a 5x5 grid space.
- **Redundant Hit Protection:** Edge-case check prevents users from scoring points on previously sunk targets.
- **Dynamic State Engine:** Tracks active fleet status and cumulative attempt metrics across an active `do-while` loop.

## 🎮 Game Flow
1. Target coordinates `(Column, Row)` are input by the user.
2. The engine checks hit conditions:
   - **Hit:** Confirms vessel destruction and flags the coordinate.
   - **Duplicate:** Warns the user if the target was already eliminated.
   - **Miss:** Prompts the player to adjust coordinates.
3. The session concludes once all vessels are eliminated.

## 🛠️ Built With
- **Language:** C (C99 standard)
- **Libraries:** `<stdio.h>`
