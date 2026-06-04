# Conventions Guide

> Naming rules, file structure standards, and commit message conventions for this repository.

---

## 1. Folder Naming Conventions

| Type | Convention | Example |
|------|-----------|--------|
| DSA Topic Folders | PascalCase | `Arrays`, `LinkedList`, `DynamicProgramming` |
| Development Tech Folders | PascalCase | `HTML`, `CSS`, `JavaScript`, `React` |
| Development Concept Folders | PascalCase | `Buttons`, `Navbar`, `UseState` |

---

## 2. File Naming Conventions

### DSA Solution Files

- Use **kebab-case** (all lowercase, words separated by hyphens)
- Language extension: `.cpp` for C++, `.py` for Python, `.java` for Java
- Format: `problem-name.extension`

**Examples:**
```
largest-element.cpp
two-sum.cpp
longest-common-subsequence.cpp
binary-search.cpp
merge-two-sorted-lists.cpp
```

### Development Files

- HTML files: always `index.html`
- Notes files: always `notes.md`
- CSS files: `styles.css`
- JS files: `script.js` or descriptive name like `counter.js`

**Examples:**
```
Development/HTML/Buttons/index.html
Development/HTML/Buttons/notes.md
Development/CSS/Flexbox/index.html
Development/CSS/Flexbox/notes.md
Development/JavaScript/Closures/script.js
Development/JavaScript/Closures/notes.md
```

---

## 3. Mandatory DSA File Header

Every DSA solution file MUST start with this header comment:

```cpp
// ============================================
// Date: DD-MM-YYYY
// Problem: Problem Name Here
// Platform: LeetCode / GeeksforGeeks / HackerRank
// Difficulty: Easy / Medium / Hard
// Topic: Arrays / Trees / DP / etc.
// ============================================
// Approach:
//   Describe your approach in 2-3 lines.
//   What algorithm or technique did you use?
//
// Time Complexity: O(n)
// Space Complexity: O(1)
// ============================================

#include <bits/stdc++.h>
using namespace std;

// Your solution code here
```

**Example (Largest Element in Array):**

```cpp
// ============================================
// Date: 04-06-2026
// Problem: Largest Element in Array
// Platform: GeeksforGeeks
// Difficulty: Easy
// Topic: Arrays
// ============================================
// Approach:
//   Linear traversal. Maintain a variable `maxVal`
//   initialized to first element. Iterate and update
//   maxVal whenever a larger element is found.
//
// Time Complexity: O(n)
// Space Complexity: O(1)
// ============================================

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr) {
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}
```

---

## 4. Development notes.md Template

Every `notes.md` inside a Development concept folder MUST follow this format:

```markdown
# [Concept Name]

**Date Learned:** DD-MM-YYYY
**Technology:** HTML / CSS / JavaScript / React / etc.
**Category:** Layout / Styling / Logic / Component / etc.

---

## What Is It?

[Brief explanation of the concept in 2-4 sentences]

## Why Is It Important?

[Why should a developer know this? Where is it used?]

## Key Points

- Point 1
- Point 2
- Point 3

## Code Example

[Your code example here]

## Source / Reference

- [MDN Web Docs](https://developer.mozilla.org)
- [Resource Name](URL)

## Personal Notes

[Any additional observations, doubts, or things to remember]
```

---

## 5. Git Commit Message Conventions

Format: `type(scope): short description`

| Type | When To Use | Example |
|------|------------|--------|
| `dsa(topic)` | Adding new DSA solution | `dsa(arrays): add two-sum using hash map` |
| `dev(tech)` | Adding development practice | `dev(html): add button types example` |
| `docs(file)` | Updating documentation | `docs(progress): log day 7 entry` |
| `fix(topic)` | Fixing a bug in solution | `fix(trees): correct inorder traversal logic` |
| `refactor(topic)` | Improving existing code | `refactor(dp): simplify knapsack solution` |
| `feat` | New feature or major addition | `feat: add DSA Arrays folder structure` |
| `chore` | Maintenance tasks | `chore: update README progress table` |

### Rules

1. Always use **lowercase** for commit messages
2. Keep the short description under **72 characters**
3. Use **present tense** ("add" not "added", "fix" not "fixed")
4. Be **specific** - mention the problem name or concept name
5. Commit **daily** - even small progress counts

### Good vs Bad Examples

| Bad | Good |
|-----|------|
| `update` | `dsa(arrays): add binary search iterative solution` |
| `fixed bug` | `fix(graphs): correct bfs visited array initialization` |
| `new file` | `dev(css): add flexbox centering example` |
| `done` | `docs(progress): log day 12 - trees and react hooks` |

---

## 6. Folder README Template (DSA Topics)

Each DSA topic folder should have a `README.md` with:

```markdown
# [Topic Name]

## Problems Solved

| # | Problem | Platform | Difficulty | File | Date |
|---|---------|----------|------------|------|------|
| 1 | | | | | |

## Key Concepts

- Concept 1
- Concept 2

## Patterns to Remember

- Pattern 1
- Pattern 2

## Resources

- [Resource](URL)
```
