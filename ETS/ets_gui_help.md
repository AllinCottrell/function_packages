*ETS graphical interface*

- The `model` selector chooses among simple exponential smoothing (level
only), Holt's method (level and trend), and Holt-Winters with an additive
or multiplicative seasonal component. The seasonal models require
data with periodicity greater than 1 (quarterly, monthly, etc.).

- The parameters α, β and γ are the smoothing coefficients for the level,
trend and seasonal components of the time series, respectively. Only
those relevant to the chosen model are used (α for simple smoothing, α
and β for Holt, all three for Holt-Winters). Setting these values
manually may be considered an "expert" (or pedagogical) option. If you
leave the `parms` selection at `automatic` gretl will estimate them for
you.

- In the multiplicative Holt-Winters case the seasonal effect is
proportional to the level-plus-trend component; in the additive case it's
simply added to level-plus-trend.

- The `ntest` selector allows you to reserve a certain number of
observations (at the end of the available data) for testing forecasts. If
the sample contains trailing observations beyond the range of the y data,
setting this to zero means that out-of-sample forecasts will be made
instead.

- To see more details of the procedure, increase the `verbose` level.
