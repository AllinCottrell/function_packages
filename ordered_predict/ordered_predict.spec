author = Allin Cottrell
email = cottrell@wfu.edu
version = 1.3
date = 2026-05-28
description = Compute predictions from ordered probit, logit
label = Outcome probabilities
menu-attachment = MODELWIN/Analysis
tags = C25
public = ordered_Pmat ordered_prediction GUI_ordered_predict \
 ordered_predict_print oprobit_Pmat oprobit_pred \
 all_ordered_predictions
conflict = oprobit_predict
gui-main = GUI_ordered_predict
menu-only = GUI_ordered_predict
gui-precheck = ordered_precheck
bundle-print = ordered_predict_print
help = ordered_predict.pdf
sample-script = ordered_predict_sample.inp
min-version = 2018a

