/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef	_SatStatus_H_
#define	_SatStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UncompressedEphemeris.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SatStatus_PR {
	SatStatus_PR_NOTHING,	/* No components present */
	SatStatus_PR_newSatelliteAndModelUC,
	SatStatus_PR_oldSatelliteAndModel,
	SatStatus_PR_newNaviModelUC
	/* Extensions may appear below */
	
} SatStatus_PR;

/* SatStatus */
typedef struct SatStatus {
	SatStatus_PR present;
	union SatStatus_u {
		UncompressedEphemeris_t	 newSatelliteAndModelUC;
		NULL_t	 oldSatelliteAndModel;
		UncompressedEphemeris_t	 newNaviModelUC;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SatStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SatStatus;
extern asn_CHOICE_specifics_t asn_SPC_SatStatus_specs_1;
extern asn_TYPE_member_t asn_MBR_SatStatus_1[3];
extern asn_per_constraints_t asn_PER_type_SatStatus_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SatStatus_H_ */
#include <asn_internal.h>