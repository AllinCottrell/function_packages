# Random Forest GUI

- **dependent variable**: Select a series for this role.
- **independent variables**: Select or construct a list for this role. There
  must be more than one independent variable.
- **training observations**: The number of observations to use for training;
  the remainder will be used for testing.
- **mode**: Regression or classification. Most of the time gretl should
  get this right, so "automatic" is the default.
- **tune mtry**: Tuning of hyperparameter. You probably want this but can
  save some CPU cycles by turning it off.
- **verbosity**: Reduce this value for quieter output.
- **set random seed**: Check this if you want to specify a random seed.
- **seed**: Specifying a seed will give you results that can be replicated.
  Otherwise the seed is set from the system clock and results will differ
  somewhat on each run.
