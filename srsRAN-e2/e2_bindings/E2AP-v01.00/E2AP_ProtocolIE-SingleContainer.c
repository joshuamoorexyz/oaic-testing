/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2ap-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2AP/`
 */

#include "E2AP_ProtocolIE-SingleContainer.h"

/*
 * This type is implemented using E2AP_RICaction_ToBeSetup_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2AP_RICaction_Admitted_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2AP_RICaction_NotAdmitted_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2AP_RANfunction_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2AP_RANfunctionID_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2AP_RANfunctionIDcause_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P0 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P0_tags_1,
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P0_tags_1)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P0_tags_1[0]), /* 1 */
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P0_tags_1)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2AP_RICaction_ToBeSetup_ItemIEs_1,
	3,	/* Elements count */
	&asn_SPC_E2AP_RICaction_ToBeSetup_ItemIEs_specs_1	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P1_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P1 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P1_tags_2,
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P1_tags_2)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P1_tags_2[0]), /* 1 */
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P1_tags_2,	/* Same as above */
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P1_tags_2)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P1_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2AP_RICaction_Admitted_ItemIEs_5,
	3,	/* Elements count */
	&asn_SPC_E2AP_RICaction_Admitted_ItemIEs_specs_5	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P2_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P2 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P2_tags_3,
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P2_tags_3)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P2_tags_3[0]), /* 1 */
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P2_tags_3,	/* Same as above */
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P2_tags_3)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P2_tags_3[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2AP_RICaction_NotAdmitted_ItemIEs_9,
	3,	/* Elements count */
	&asn_SPC_E2AP_RICaction_NotAdmitted_ItemIEs_specs_9	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P3_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P3 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P3_tags_4,
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P3_tags_4)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P3_tags_4[0]), /* 1 */
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P3_tags_4,	/* Same as above */
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P3_tags_4)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P3_tags_4[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2AP_RANfunction_ItemIEs_13,
	3,	/* Elements count */
	&asn_SPC_E2AP_RANfunction_ItemIEs_specs_13	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P4_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P4 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P4_tags_5,
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P4_tags_5)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P4_tags_5[0]), /* 1 */
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P4_tags_5,	/* Same as above */
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P4_tags_5)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P4_tags_5[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2AP_RANfunctionID_ItemIEs_17,
	3,	/* Elements count */
	&asn_SPC_E2AP_RANfunctionID_ItemIEs_specs_17	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P5_tags_6[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P5 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P5_tags_6,
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P5_tags_6)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P5_tags_6[0]), /* 1 */
	asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P5_tags_6,	/* Same as above */
	sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P5_tags_6)
		/sizeof(asn_DEF_E2AP_ProtocolIE_SingleContainer_1392P5_tags_6[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2AP_RANfunctionIDcause_ItemIEs_21,
	3,	/* Elements count */
	&asn_SPC_E2AP_RANfunctionIDcause_ItemIEs_specs_21	/* Additional specs */
};

