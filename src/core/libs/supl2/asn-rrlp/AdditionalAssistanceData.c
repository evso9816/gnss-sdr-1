/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "AdditionalAssistanceData.h"

asn_TYPE_member_t asn_MBR_AdditionalAssistanceData_1[] = {
	{ ATF_POINTER, 3, offsetof(struct AdditionalAssistanceData, gpsAssistanceData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSAssistanceData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gpsAssistanceData"
		},
	{ ATF_POINTER, 2, offsetof(struct AdditionalAssistanceData, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extensionContainer"
		},
	{ ATF_POINTER, 1, offsetof(struct AdditionalAssistanceData, ganssAssistanceData),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSSAssistanceData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ganssAssistanceData"
		},
};
static const int asn_MAP_AdditionalAssistanceData_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_AdditionalAssistanceData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AdditionalAssistanceData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gpsAssistanceData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* extensionContainer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ganssAssistanceData */
};
asn_SEQUENCE_specifics_t asn_SPC_AdditionalAssistanceData_specs_1 = {
	sizeof(struct AdditionalAssistanceData),
	offsetof(struct AdditionalAssistanceData, _asn_ctx),
	asn_MAP_AdditionalAssistanceData_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_AdditionalAssistanceData_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AdditionalAssistanceData = {
	"AdditionalAssistanceData",
	"AdditionalAssistanceData",
	&asn_OP_SEQUENCE,
	asn_DEF_AdditionalAssistanceData_tags_1,
	sizeof(asn_DEF_AdditionalAssistanceData_tags_1)
		/sizeof(asn_DEF_AdditionalAssistanceData_tags_1[0]), /* 1 */
	asn_DEF_AdditionalAssistanceData_tags_1,	/* Same as above */
	sizeof(asn_DEF_AdditionalAssistanceData_tags_1)
		/sizeof(asn_DEF_AdditionalAssistanceData_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AdditionalAssistanceData_1,
	3,	/* Elements count */
	&asn_SPC_AdditionalAssistanceData_specs_1	/* Additional specs */
};
