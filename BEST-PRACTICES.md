# GitHub Best Practices for Recruiters

> How to make this repository look professional, active, and recruiter-friendly.

---

## 1. Daily Commit Habit

The GitHub contribution graph (the green squares on your profile) is the **first thing recruiters look at**. A consistent streak signals discipline.

### What counts as a daily commit?
- Adding a new DSA solution file
- Updating Progress.md with today's log
- Adding a development practice file or notes
- Fixing a bug in an existing solution
- Updating README progress tables

### Minimum viable daily commit:
Even on a busy day, at minimum do this:
```
git add Progress.md
git commit -m "docs(progress): log day N"
git push
```

---

## 2. Pin This Repository

Pin `dsa-and-development-journey` to your GitHub profile so it appears first when recruiters visit.

Steps:
1. Go to your GitHub profile: github.com/alok615
2. Click "Customize your pins"
3. Select `dsa-and-development-journey`
4. Save

---

## 3. Add Repository Topics/Tags

Topics make your repo discoverable and show your skill set at a glance.

Go to your repo > Click the gear icon next to About > Add these topics:

```
dsa
data-structures
algorithms
web-development
placement-preparation
leetcode
geeksforgeeks
javascript
react
cpp
learning-journal
competitive-programming
```

---

## 4. Badges to Add in README

Badges make your README look professional and data-rich. These are already added in your README:

```markdown
![Last Commit](https://img.shields.io/github/last-commit/alok615/dsa-and-development-journey)
![Profile Views](https://komarev.com/ghpvc/?username=alok615)
![Stars](https://img.shields.io/github/stars/alok615/dsa-and-development-journey?style=social)
```

Optional additions:
```markdown
![LeetCode](https://img.shields.io/badge/LeetCode-alok615-orange)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
```

---

## 5. GitHub Profile README

Create a special repo named `alok615/alok615` with a README.md to showcase your profile.

Include:
- Short bio
- Skills
- Link to this repository
- LeetCode stats card
- GitHub stats card

**GitHub Stats Card:**
```markdown
![GitHub Stats](https://github-readme-stats.vercel.app/api?username=alok615&show_icons=true&theme=dark)
```

**LeetCode Stats Card:**
```markdown
![LeetCode Stats](https://leetcard.jacoblin.cool/alok615?theme=dark)
```

---

## 6. Weekly Maintenance Checklist

Every Sunday, spend 15 minutes on:

- [ ] Update README.md DSA Progress table with new problem counts
- [ ] Update README.md Development table with new concepts
- [ ] Review the week's Progress.md entries
- [ ] Check ROADMAP.md and tick completed items
- [ ] Ensure all DSA files have proper headers
- [ ] Ensure all Dev concept folders have notes.md

---

## 7. Monthly Checklist

At the end of each month:

- [ ] Write a summary comment in Progress.md for the month
- [ ] Update the milestone table in ROADMAP.md
- [ ] Count total problems solved and update README stats
- [ ] Review weakest topics and plan next month
- [ ] Share progress on LinkedIn (optional but great for visibility)

---

## 8. What NOT to Do

| Don't | Why |
|-------|-----|
| Push broken/incomplete code | Looks unprofessional |
| Have empty folders | Shows fake structure |
| Copy-paste solutions without understanding | Recruiters can tell |
| Go days without committing | Breaks streak, kills momentum |
| Have a README that was never updated | Shows you abandoned the repo |
| Use vague commit messages like "update" | Shows poor engineering habits |
| Push compiled files (.exe, .class) | Pollutes the repo |

---

## 9. Sharing With Recruiters

When applying for jobs or internships:

1. **Resume:** Add the GitHub repo URL directly in the "Projects" section
   - Example: `DSA & Dev Journey | github.com/alok615/dsa-and-development-journey`
   - Highlight: "300+ problems documented | Daily active development"

2. **LinkedIn:** Add as a Featured project with a screenshot of the README

3. **Email intro:** Mention it in your cover letter
   - "I maintain a public daily learning journal at [repo link] documenting 300+ DSA solutions and development projects."

---

## 10. 6-Month Maintenance Calendar

| Week | Focus |
|------|-------|
| Week 1-4 | Arrays, Strings + HTML, CSS basics |
| Week 5-8 | Linked List, Stack, Queue + CSS advanced |
| Week 9-12 | Recursion, Binary Search + JavaScript |
| Week 13-16 | Trees, Heaps + React.js |
| Week 17-20 | Graphs, Greedy + Next.js, Node.js |
| Week 21-24 | Dynamic Programming + Full-stack project |

---

## 11. Key Metrics Recruiters Notice

- **Commit frequency** - Is the developer active daily?
- **Repository structure** - Is it organized and professional?
- **README quality** - Does it explain clearly what the repo contains?
- **Code quality** - Are solutions well-commented with complexity analysis?
- **Variety** - Both DSA and development shows full-stack potential
- **Consistency over time** - 6 months of consistent work beats a burst of activity
