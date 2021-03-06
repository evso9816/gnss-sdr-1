/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _OTD_MsrElementFirst_H
#define _OTD_MsrElementFirst_H

#include <asn_application.h>

/* Including external dependencies */
#include "ModuloTimeSlot.h"
#include "StdResolution.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct TOA_MeasurementsOfRef;
    struct SeqOfOTD_FirstSetMsrs;

    /* OTD-MsrElementFirst */
    typedef struct OTD_MsrElementFirst
    {
        long refFrameNumber;
        ModuloTimeSlot_t referenceTimeSlot;
        struct TOA_MeasurementsOfRef *toaMeasurementsOfRef /* OPTIONAL */;
        StdResolution_t stdResolution;
        long *taCorrection /* OPTIONAL */;
        struct SeqOfOTD_FirstSetMsrs *otd_FirstSetMsrs /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } OTD_MsrElementFirst_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_OTD_MsrElementFirst;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SeqOfOTD-FirstSetMsrs.h"
#include "TOA-MeasurementsOfRef.h"

#endif /* _OTD_MsrElementFirst_H_ */
#include <asn_internal.h>
