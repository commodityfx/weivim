#include "ndist.h"
#include "k.h"

#ifdef _WIN32
#define EXP __declspec(dllexport)
#else
#define EXP
#endif

EXP K qcnorm(K x){
 if(xt!=KF)
  R krr("type");
 K r=ktn(KF,x->n);
 for(J j=0;j<x->n;++j)
  kF(r)[j]=cnorm(kF(x)[j]);
 R r;
}

EXP K qinvcnorm(K x){
 if(xt!=KF)
  R krr("type");
 K r=ktn(KF,x->n);
 F u;
 for(J j=0;j<x->n;++j){
  u=kF(x)[j];
  if(0>u || u>1)
    R krr("range");
  kF(r)[j]=invcnorm(u);
 }
 R r;
}