**Q: What is Flex and Grid in CSS?**

**Answer:**

* **Flexbox:**

  * A **one-dimensional layout** system (row or column).
  * Helps **align items and distribute space** easily.
  * Example use: Aligning menu items or centering content.

  ```css
  .container {
    display: flex;
    justify-content: space-between;
    align-items: center;
  }
  ```

* **CSS Grid:**

  * A **two-dimensional layout** system (rows and columns).
  * Best for **complex layouts** like dashboards or galleries.

  ```css
  .container {
    display: grid;
    grid-template-columns: 1fr 2fr 1fr;
    gap: 10px;
  }
  ```

**Key difference:**

* Flexbox → 1D, simple alignment.
* Grid → 2D, complex layout.

**Tip:**
"Use Flex for simple row/column layouts, and Grid for layouts involving both rows and columns."

---

