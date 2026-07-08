# Complex Numbers Simulation (High School Curriculum)

A comprehensive C++ implementation and mathematical simulation based on Chapter 1 of the secondary education curriculum (Sixth Scientific). This project aims to bridge theoretical algebraic concepts with computer science foundations.

## 📌 Project Roadmap & Chapter Index
This repository is an evolving library designed to cover the entire chapter step-by-step:
- [x] **[1-1]** The Need to Expand the Real Numbers System ($\mathbb{R} \rightarrow \mathbb{C}$)
- [x] **[1-2]** Basic Arithmetic Operations (Addition & Multiplication)
- [x] **[1-3]** The Complex Conjugate
- [ ] **[1-4]** Square Roots of a Complex Number
- [ ] **[1-5]** Solving Quadratic Equations in $\mathbb{C}$
- [ ] **[1-6]** Cubic Roots of Unity (Omega $\omega$)
- [ ] **[1-7]** Geometric Representation (Argand Diagram)
- [ ] **[1-8]** Polar Form of a Complex Number
- [ ] **[1-9]** De Moivre's Theorem

---

## 🔬 Scientific & Architectural Implementation

### 1. Representation ($\mathbb{R} \rightarrow \mathbb{C}$)
Since hardware architectures do not inherently understand the imaginary unit $i = \sqrt{-1}$, the complex number is encapsulated into a strict data structure (`struct Complex`) in 2D space:
$$z = a + bi$$
Where `real` represents the coordinate on the horizontal axis, and `imag` represents the vertical axis in the Argand plane.

### 2. Operations & Conjugate Logic
* **Addition:** Modeled as standard 2D vector addition: $(a+bi) + (c+di) = (a+c) + (b+d)i$.
* **Multiplication:** Implemented via algebraic expansion under the constraint $i^2 = -1$: $(a+bi)(c+di) = (ac-bd) + (ad+bc)i$.
* **Conjugate:** Geometrically reflects the vector across the real axis by reversing the sign of the imaginary component.

---

## 🛠️ Tech Stack
* **Language:** C++ (Standard ISO)
* **Paradigm:** Procedural & Structural Programming
