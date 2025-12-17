Notes on the arguments for `hausman_taylor()`:

- The lists Lexo (exogenous) and Lndo (endogenous) must not have
  any members in common.
- Lexo must contain at least as many time-varying variables as Lndo
  contains time-invariant variables.
- Checking the "verbose" option means that output from the
  preliminary regressions is shown.
- The "as_stata" option makes a difference only if the panel
  is unbalanced.
