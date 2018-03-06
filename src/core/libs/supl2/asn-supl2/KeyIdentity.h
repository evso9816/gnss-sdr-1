/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-INIT"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_KeyIdentity_H_
#define	_KeyIdentity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* KeyIdentity */
typedef BIT_STRING_t	 KeyIdentity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_KeyIdentity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_KeyIdentity;
asn_struct_free_f KeyIdentity_free;
asn_struct_print_f KeyIdentity_print;
asn_constr_check_f KeyIdentity_constraint;
ber_type_decoder_f KeyIdentity_decode_ber;
der_type_encoder_f KeyIdentity_encode_der;
xer_type_decoder_f KeyIdentity_decode_xer;
xer_type_encoder_f KeyIdentity_encode_xer;
per_type_decoder_f KeyIdentity_decode_uper;
per_type_encoder_f KeyIdentity_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _KeyIdentity_H_ */
#include "asn_internal.h"