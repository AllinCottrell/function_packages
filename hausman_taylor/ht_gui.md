Notes on the arguments for `hausman_taylor()`:

- The lists L1 (exogenous) and L2 (endogenous) must not have
  any members in common.
- L1 must contain at least as many time-varying variables as L2
  contains time-invariant variables.
- Checking the "verbose" option means that output from the
  preliminary regressions is shown.
- The "as_stata" option makes a difference only if the panel
  is unbalanced.
