# C-Like string parser written in C++

C-Like String Parser continued in C++.

## Speed

This is faster, but only by a little.

## Support Comparison

### CLikeStrings (DLang)
- Discontinued
- Failed test
- Only supports \r and \n

### CLike Strings (C++)
- Maintained
- Ready for use
- Supports \r \n and \t.

## Benchmark

Same code for each.

```
# (non-prod ready one)

in string: hello,\n world!
outstring: hello,
 world!

real    0m0.056s
user    0m0.011s
sys     0m0.001s

```

```

# (maintained, prod-ready one)

hello,
 world!
real    0m0.003s
user    0m0.003s
sys     0m0.000s

```
