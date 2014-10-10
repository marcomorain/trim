# Trim

Trim is command line tool to trim whitespace from plain text. Whitespace will be
trimmed from both the start and the end of lines. It reads input from `stdin`
and writes to `stdout`.

The intended use is as part of a unix pipeline.

# Usage


```
$ ps
  PID TTY           TIME CMD
 7936 ttys000    0:00.01 -/bin/bash
 8019 ttys000    0:00.68 vim README.md
 7973 ttys001    0:00.18 -/bin/bash
 8029 ttys002    0:00.01 -/bin/bash

$ ps | trim
PID TTY           TIME CMD
7936 ttys000    0:00.01 -/bin/bash
8019 ttys000    0:00.68 vim README.md
7973 ttys001    0:00.18 -/bin/bash
8029 ttys002    0:00.01 -/bin/bash
```
