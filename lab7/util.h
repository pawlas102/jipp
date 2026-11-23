#ifndef LAB7_UTIL_H
#define LAB7_UTIL_H

#include <stdio.h>

double *DajWekt(int n);
void CzytWekt(FILE *fd, double *we, int n);
void PiszWekt(FILE *fw, double *we, int n);
void DodWekt(double *w1, double *w2, double *w3, int n);
double IloczynSkal(double *w1, double *w2, int n);
double MaxElem(double *w, int n);

#endif
