# 🧩 Beecrowd Problem Solutions

This repository serves as a **personal log and portfolio** of solutions for competitive programming problems — primarily sourced from [**Beecrowd**](https://www.beecrowd.com.br/).

It reflects my **learning journey** across multiple programming languages, focusing on improving performance, debugging efficiency, and algorithmic optimization. In particular, it documents the transition from **JavaScript** (performance-limited in some cases) to **C**, a faster and lower-level alternative often used to resolve issues like **Runtime Errors (RE)** and **Time Limit Exceeded (TLE)**.

---

## 📂 Repository Structure

The repository is organized into **flat directories**, each grouping solutions by their language or status. This layout enables quick navigation and focused review.

| Folder            | Content                                                                                  | Purpose                                                      |
| ----------------- | ---------------------------------------------------------------------------------------- | ------------------------------------------------------------ |
| `javascript/`     | All JavaScript files that achieved a successful result.                                  | Quick access to all functional JS solutions.                 |
| `c/`              | All C files, typically used as high-performance, successful solutions.                   | Quick access to all optimized C solutions.                   |
| `runtime_errors/` | JavaScript attempts that failed due to Runtime Errors (RE) or Time Limit Exceeded (TLE). | Central hub for performance comparison and debugging review. |
| `unsolved/`       | Drafts for problems that are still in progress or not yet successfully submitted.        | Tracks ongoing work and open challenges.                     |

---

## 🧱 Naming Convention

Files follow a structured naming pattern based on the **problem ID**, **language**, and **status**. This makes it easy to search, organize, and distinguish between attempts and successes.

| Example File Name    | Language   | Status          | Primary Folder    |
| -------------------- | ---------- | --------------- | ----------------- |
| `1002.js`            | JavaScript | Success         | `javascript/`     |
| `1001_c_success.c`   | C          | Success         | `c/`              |
| `1001_js_attempt.js` | JavaScript | Failed (RE/TLE) | `runtime_errors/` |
| `1007_draft.js`      | JavaScript | Unsolved        | `unsolved/`       |

---

## 🚀 How to Run Solutions

### 🖥️ C Solutions

To compile and run C solutions (found in the `c/` directory):

```bash
gcc 1001_c_success.c -o 1001
./1001
```

### 💻 JavaScript Solutions

To execute JavaScript files (found in the `javascript/` directory):

```bash
node 1002.js
```

---

## 🧠 Learning Focus

This repository isn't just a solution archive — it’s a **progress log** showing:

* How different languages handle the same problem.
* How performance bottlenecks can be overcome through language choice.
* How to analyze and correct **RE** and **TLE** issues.
* How structured experimentation leads to cleaner, more reliable code.

---

## 🏁 Goals

* Build a consistent and maintainable problem-solving workflow.
* Maintain a reference for debugging and optimization patterns.
* Track growth from problem attempts to accepted solutions.

---

> *"Every RE and TLE is just a stepping stone toward AC (Accepted)."*
