(defun fix-css-classes ()
  (interactive)
  (query-replace-regexp "class=\"todo \\(required\\|challenge\\|question\\)\""
                        "class=\"\\1\""))

(defun fix-code-tags ()
  (interactive)
  (let ((ov (make-overlay 0 0)))
    (overlay-put ov 'face 'query-replace)
    (unwind-protect
        (while (re-search-forward "<\\(tt\\|code\\|samp\\|b\\)>\\(?:.\\|\n\\)*?</\\(\\1\\)>")
          (move-overlay ov (match-beginning 0) (match-end 0))
          (let ((replacement
                 (case (save-match-data
                         (message "[t]t [c]ode [k]bd [n]ext")
                         (let ((cursor-in-echo-area t))
                           (read-char)))
                   ((?t) "tt")
                   ((?c) "code")
                   ((?k) "kbd")
                   ((?n) nil)
                   (t (error "Unknown key")))))
            (when replacement
              (save-excursion
                (goto-char (match-beginning 2))
                (delete-region (point) (match-end 2))
                (insert replacement)
                (goto-char (match-beginning 1))
                (delete-region (point) (match-end 1))
                (insert replacement)))))
      (delete-overlay ov))))
