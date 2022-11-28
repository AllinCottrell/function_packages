author = Riccardo "Jack" Lucchetti and Allin Cottrell
email = r.lucchetti@univpm.it
version = 2.0

date = 2022-11-28
description = Compute dynamic multipliers for ADL models 
tags = C20

min-version = 2020e
data-requirement = needs-time-series-data

public = multipliers multi_plot irf_plot multi_print long_run_print \
  GUI_DynMultCalc DynMultCalc_plot long_run_effects

menu-attachment = MODELWIN/Analysis
label = Dynamic multipliers

gui-main = GUI_DynMultCalc
menu-only = GUI_DynMultCalc
gui-precheck = DynMultCalc_precheck
list-maker = DynMultCalc_listmaker
bundle-plot = DynMultCalc_plot

help = DynMultCalc.pdf
sample-script = DynMultCalc_sample.inp
