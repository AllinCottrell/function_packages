*Winters graphical interface*

- The parameters α, β and γ are the smoothing coefficients for the level, trend
and seasonal components of the time series, respectively. Setting these values
manually may be considered an "expert" option. If you leave the `parms`
selection at `automatic` gretl will estimate them for you.

- The choice of `formula` (multiplicative versus additive) pertains to the
seasonal component. In the multiplicative case the seasonal effect is
proportional to the level-plus-trend component; in the additive case it's
simply added to level-plus-trend.

- The `ntest` selector allows you to reserve a certain number of observations
(at the end of the available data) for intra-sample forecasts. If the sample
contains trailing observations beyond the range of the y data, setting this
to zero means that out-of-sample forecasts will be made.

- If you want to see more details of the procedure, increase the `verbose` level.



