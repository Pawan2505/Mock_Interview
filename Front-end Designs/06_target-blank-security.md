**Q: How does the `target="_blank"` attribute in an anchor tag work? What are its security implications?**

**Answer:**
The `target="_blank"` attribute opens a link in a **new browser tab** instead of the current one.

**Security issue:** Without precautions, the new page can access the original page using `window.opener` and might redirect it (called **reverse tabnabbing**).

**Safe practice:** Always add `rel="noopener noreferrer"` to prevent this:

```html
<a href="https://example.com" target="_blank" rel="noopener noreferrer">Visit Example</a>
```

**Tip:** This keeps users safe while still opening links in new tabs.

---

