# Trim

Trim is command line tool to trim whitespace from plain text. Whitespace will be
trimmed from both the start and the end of lines. It reads input from `stdin`
and writes to `stdout`.

The intended use is as part of a unix pipeline.

# Usage

```
$ cat test/copter.in
     ROFL:ROFL:ROFL:ROFL
          ____^____
 L     __/      [x]\
LOL====__           \
 L       \__________]
           I      I
          ----------/
```

```
$ cat test/copter.in | trim
ROFL:ROFL:ROFL:ROFL
____^____
L     __/      [x]\
LOL====__           \
L       \__________]
I      I
----------/

```
