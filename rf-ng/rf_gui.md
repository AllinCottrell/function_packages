## The random_forest GUI

**Dependent variable**: select the series for which you want predictions.

**independent variables**: select (or construct with the help of the
`+` button) a list of predictors, of which there must be at least two.

**training observations**: specify how many observations should be
used for training. The remainder will be used for testing.

**mode**: classification or regression: "automatic" should do the
right thing in almost all cases.

**tune**: let the package call for optimization of the hyperparameter
named "mtry". Recommended.

**verbosity**: set to 1 for less output if you wish.

**set random seed**: check this only if want to generate reproducible
results. If so, specify a seed (or accept the default) and
make note of it for future use.

