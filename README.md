# 🚀 System Design & OOPs Learning Tracker

Welcome to my learning repository! This project is a structured log of my progress through two main curriculums:
1. **C++ OOPs Foundations** (Lectures 70–77)
2. **System Design & LLD (Low-Level Design)** (Lectures 1–10 + Real-World Projects)

---

## 📌 Study Plan & Priority
> [!IMPORTANT]
> **Primary Goal**: Complete the C++ OOPs lectures first to build a solid code-level understanding.
> **Secondary Goal**: Transition to System Design (UML, SOLID, Design Patterns, and LLD case studies) after finishing OOPs.

---

## 📊 Overall Progress Dashboard

```mermaid
gantt
    title Learning Progress Timeline
    dateFormat  YYYY-MM-DD
    section C++ OOPs Lectures
    Basic OOP & Layout      :done,    des1, 2026-07-01, 2026-07-03
    Constructor/Destructor  :done,    des2, 2026-07-02, 2026-07-03
    Static Members & Encap  :active,  des3, 2026-07-03, 2026-07-05
    Inheritance             :todo,    des4, after des3, 5d
    Polymorphism            :todo,    des5, after des4, 3d
    Exception & Files       :todo,    des6, after des5, 4d
    section System Design
    UML & SOLID             :todo,    sd1, after des6, 7d
    Design Patterns         :todo,    sd2, after sd1, 10d
    Real-World Projects     :todo,    sd3, after sd2, 10d
```

### **Current Phase: 🟩 C++ OOPs Foundations (Lectures 70-77)**
- **OOPs Course Progress**: `~45% Completed`
- **System Design Course Progress**: `0% (Pending OOPs completion)`

---

## 📂 Repository File Structure

```text
SystemDesign/
├── README.md                      # This learning tracker
├── abstraction.cpp                # Pure virtual functions & interfaces
└── oops/                          # C++ OOPs folder
    ├── class.cpp                  # Class definition, getters/setters (Lecture 70/72)
    ├── obj.cpp                    # Padding, alignment, sizeof (Lecture 70)
    ├── constructor.cpp            # All constructor variants (Lecture 71)
    ├── destructor.cpp             # Destructors and execution order (Lecture 71)
    └── dynamicMemoryAllocation.cpp # Dynamic allocation using 'new' / 'delete' (Lecture 71)
```

---

## 📚 Curriculum 1: C++ OOPs Foundations (Lectures 70-77)
*Priority: 🔴 HIGH (Currently working on this)*

| Lecture | Topic / Focus | Status | Associated Code Files | Key Concepts Covered |
| :--- | :--- | :---: | :--- | :--- |
| **L70** | Object Oriented Programming in C++ | **🟢 Completed** | [class.cpp](file:///e:/SystemDesign/oops/class.cpp)<br>[obj.cpp](file:///e:/SystemDesign/oops/obj.cpp) | Classes, objects, memory layout, alignment, and `sizeof`. |
| **1** | Constructor and Destructor in C++ | **🟢 Completed** | [constructor.cpp](file:///e:/SystemDesign/oops/constructor.cpp)<br>[destructor.cpp](file:///e:/SystemDesign/oops/destructor.cpp)<br>[dynamicMemoryAllocation.cpp](file:///e:/SystemDesign/oops/dynamicMemoryAllocation.cpp) | Default/Param/Copy/Inline constructors, destructors (LIFO), stack vs heap. |
| **2** | Static data Member/Function & Encapsulation | **🟡 Partial** | [class.cpp](file:///e:/SystemDesign/oops/class.cpp) *(Encapsulation)* | Encapsulation is implemented. <br>*Pending:* **Static data members & functions**. |
| **3** | Inheritance, Access Modifiers & Real-Life Examples | **⚪ Pending** | *Not started* | Access specifiers (`public`, `protected`, `private`), inheritance basics. |
| **4** | Types of Inheritance (Single, Multiple, Hybrid, Multipath) | **⚪ Pending** | *Not started* | Single, Multiple, Hierarchical, Hybrid, Multipath (Diamond problem, virtual base class). |
| **5** | Polymorphism & Virtual Functions | **🟡 Partial** | [abstraction.cpp](file:///e:/SystemDesign/abstraction.cpp) *(Abstract Class/Interfaces)* | Pure virtual functions and interfaces implemented. <br>*Pending:* **Function/operator overloading, vtable, vptr, method overriding**. |
| **6** | Exception Handling | **⚪ Pending** | *Not started* | `try`, `catch`, `throw`, custom exception classes. |
| **7** | File Handling | **⚪ Pending** | *Not started* | File streams (`ifstream`, `ofstream`), reading/writing files. |

---

## 📘 Curriculum 2: System Design & LLD
*Priority: 🟡 MEDIUM (To start after completing C++ OOPs)*

| Topic / Lecture | Category | Status | Details |
| :--- | :--- | :---: | :--- |
| **1. Intro to System Design** | HLD/LLD Intro | **⚪ Pending** | High-level understanding of design systems. |
| **2. OOPs Real-World Examples & Pillars** | OOPs in LLD | **⚪ Pending** | Design pillars (Abstraction, Encapsulation, Polymorphism, Inheritance). |
| **3. Inheritance & Polymorphism in OOPs** | Advanced LLD | **⚪ Pending** | Using inheritance and polymorphism to make systems extensible. |
| **4. UML Diagrams** | Architecture | **⚪ Pending** | Class diagrams, Sequence diagrams with real-world examples. |
| **5. SOLID Design Principles (Part 1)** | Principles | **⚪ Pending** | Deep dive into Single Responsibility, Open-Closed, Liskov Substitution. |
| **6. SOLID Design Principles (Part 2)** | Principles | **⚪ Pending** | Interface Segregation, Dependency Inversion with code examples. |
| **7. Build Google Docs** | LLD Project | **⚪ Pending** | Real-world document collaboration design (LLD). |
| **8. Strategy Design Pattern** | Pattern | **⚪ Pending** | Strategy pattern with real-world examples. |
| **9. Factory Design Pattern** | Pattern | **⚪ Pending** | Simple Factory, Factory Method, Abstract Factory. |
| **10. Singleton Design Pattern** | Pattern | **⚪ Pending** | Thread-safe, Lazy vs Eager initialization. |
| **Adapter Design Pattern** | Pattern | **⚪ Pending** | Structural adapter design pattern. |
| **Command Design Pattern** | Pattern | **⚪ Pending** | Behavioral command pattern with code. |
| **Composite Design Pattern** | Pattern | **⚪ Pending** | Build File System structure (UML + Code). |
| **Decorator Design Pattern** | Pattern | **⚪ Pending** | Dynamic behavior extension using decorators. |
| **Facade Design Pattern** | Pattern | **⚪ Pending** | Interface simplification pattern. |
| **Observer Design Pattern** | Pattern | **⚪ Pending** | Event-driven notification models. |
| **Template Method Pattern** | Pattern | **⚪ Pending** | Behavioral subclass template method pattern. |
| **Build Spotify App** | LLD/HLD Project | **⚪ Pending** | Designing a music player app. |
| **Build Notification Engine** | LLD Project | **⚪ Pending** | Designing scalable notification dispatchers. |
| **Build Zomato App** | LLD/HLD Project | **⚪ Pending** | Food delivery architecture and class structure. |

---

## 🏃 Compilation Guide
To compile and run any of the C++ files, navigate to this workspace folder and run:

```bash
# Compiling and running files in the oops/ directory
g++ oops/class.cpp -o oops/class.exe && ./oops/class.exe

# Compiling and running the abstraction file
g++ abstraction.cpp -o abstraction.exe && ./abstraction.exe
```

---

*“First, solve the problem. Then, write the code.” – John Johnson*
