*Holt graphical interface*

- The parameters α and β are the smoothing coefficients for the level and
trend and seasonal components of the time series, respectively. Setting these
values manually may be considered an "expert" option. If you leave the `parms`
selection at `automatic` gretl will estimate them for you.

- The `ntest` selector allows you to reserve a certain number of observations
(at the end of the available data) for testing forecasts. If the sample
contains trailing observations beyond the range of the y data, setting this
to zero means that out-of-sample forecasts will be made.

- To see more details of the procedure, increase the `verbose` level.



