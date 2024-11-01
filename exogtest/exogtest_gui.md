# exogtest

This function implements the diff-in-sargan test (also sometimes
called the C-test) for exogeneity of a regressor in the context
of an IV model.

If you select a regressor that is treated as endogenous in the
target model, an auxiliary model is estimated in which the 
variable in question is treated as exogenous. The test statistic
is then calculated as the difference between the Sargan test for
the original model and that for the auxiliary model.

The null hypothesis is that the variable in question is exogenous;
it is rejected if the difference is "big enough", relative to the
chi-square distribution.

Note, however, that this test is not reliable if the regular Sargan
test rejects the null for the original model.
