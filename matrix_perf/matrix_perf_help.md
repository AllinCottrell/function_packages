# Basics

This package provides a single public function, `matrix_perf()`, which
performs several tests of performance in respect of dgemm
(double-precision general matrix multiplication). It is designed to
help determine what is the fastest method on a given system, from a
short list of candidates. The signature of the function is

```
matrix matrix_perf(rseed[0], const bundle argb[null])
```

Both arguments are optional, so the simplest call is just

```
matrix_perf()
```

which shows the speed in gigaflops achieved by each method for each of
41 test cases plus some other summary information.

The matrix multiplication methods examined are as follows:

* `vanilla`: this is gretl's native matrix multiplication code in
  single-threaded mode.
* `openmp`: gretl's native matrix multiplication code running in
  multi-threaded mode with the help of OpenMP. This is available
  only if gretl has been built with OpenMP support and the host
  machine has more than one processor.
* `sysblas`: system blas, the implementation of the BLAS (Basic
  Linear Algebra Subprograms) against which gretl is linked. This
  may or may not be optimized for the host architecture and may or
  may not be multi-threaded.

Each individual test involves multiplying an (*m* x *k*) matrix into a
(*k* x *n*) matrix, for a total of 2*mnk* floating-point operations;
For smaller matrices the multiplication is repeated many times.  The
Gflops figure is then derived by dividing the total number of
floating-point operations by (the elapsed time in seconds times
1.0e09). If you see `inf` in any of the results this means that the
elapsed time was reported as zero, which in effect means that the
system timer does not have very good resolution, though the result can
probably be read as "very fast".

The general expectation is that if `sysblas` is optimized it will
be faster than `vanilla` (except perhaps at small matrix sizes).
If OpenMP is enabled then `omp` will be probably be faster than
`vanilla` (at least for large matrices) but will likely be slower
than an optimized, multi-threaded system BLAS library.

Some points to note:

* The tests may take a few minutes to run, depending on your
  hardware.
* You may need to run the test script two or three times to get a good
  sense of which results are robust and which may be quirky.

# Options

By giving a value for the `rseed` argument you can control the
seed used when generating the (pseudo-)random matrices used in the
multiplication tests. A value of 0 indicates that the seed should be
taken from the system clock, and will therefore differ from run to
run.

The optional bundle argument, `argb`, can be used to inflect several
aspects of the operation of `matrix_perf`. The keys recognized are as
follows:

* `blas_min` (integer): the threshold value of *mnk* below which the
  system BLAS is not employed. The default value of this parameter is
  0 for testing purposes.
* `omp_min` (integer): the threshold value of *mnk* below which OpenMP is not
  employed in gretl's native matrix multiplication code. The default
  value of this parameter is 0 for testing purposes. Giving a value of
  -1 means that `openmp` is dropped from the comparison.
* `times` (boolean): if you supply a non-zero value under this key,
  the figures of merit shown for each tests are seconds elapsed rather
  than speed in Gflops.
* `verbosity`: the default level is 2 for a full printout. If you are
  assigning the matrix result for further analysis you may wish to
  choose less verbose operation. At a level of 1 only a brief summary
  of the system information is shown; at level 0 nothing is printed.

# Return value

The return value available via `matrix_perf` is a matrix with 41 rows
and 6 or 7 columns (depending on whether `openmp` is included). The
first column contains an index of the type of test performed (from 1
to 6); columns 2 to 4 contain the values of *m*, *n* and *k*; and
columns 5 to the end hold the figures of merit, either speed in Gflops
or times in seconds.

# GUI usage

The package offers a GUI hook: an item named "Matrix performance"
under the Tools menu in the gretl main window.

# Change log

Version 1.2, 2025-01-01: add options, add matrix return value, add GUI
hook
