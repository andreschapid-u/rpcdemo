/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _DATE_H_RPCGEN
#define _DATE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define DATE_PROG 0x31234567
#define DATE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define BIN_DATE 1
extern  long * bin_date_1(void *, CLIENT *);
extern  long * bin_date_1_svc(void *, struct svc_req *);
#define STR_DATE 2
extern  char ** str_date_1(long *, CLIENT *);
extern  char ** str_date_1_svc(long *, struct svc_req *);
extern int date_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define BIN_DATE 1
extern  long * bin_date_1();
extern  long * bin_date_1_svc();
#define STR_DATE 2
extern  char ** str_date_1();
extern  char ** str_date_1_svc();
extern int date_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_DATE_H_RPCGEN */
