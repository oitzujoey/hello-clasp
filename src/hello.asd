(asdf:defsystem #:hello
  :description "Hello, world!"
  :version "0.0.0"
  :author "Joey Herguth <oitzujoey@gmail.com>"
  :license "MIT"
  :serial t  ;; Kind of like `let*' instead of `let' for components.
  :components ((:file "packages")
               (:file "hello")))
