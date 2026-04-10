*holt_winters graphical interface*

- The parameters α, β and γ are the smoothing coefficients for the level, trend
and seasonal components of the time series, respectively. Setting these values
manually may be considered an "expert" option. If you leave the `parms`
selection at `automatic` gretl will estimate them for you.

- The choice of `method` (multiplicative versus additive) pertains to the
seasonal component. In the multiplicative case the seasonal effect is
proportional to the level-plus-trend component; in the additive case it's
simply added to level-plus-trend.

- The `n_fcast` selector allows you to reserve a certain number of observations
(at the end of the available data) for out-of-sample forecasts.

- If you want to see more details of the procedure, increase the `verbose` level.



