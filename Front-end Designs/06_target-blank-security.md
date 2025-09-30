How does the target="_blank" attribute in an anchor tag work? What are its security implications?


target="_blank" opens a link in a new tab. For security, it should be used with rel='noopener noreferrer' to prevent the new page from accessing the original page (reverse tabnabbing)