/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-NRT-IEs"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2sm-gNB-NRT-v401.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2SM-GNB-NRT/`
 */

#ifndef	_E2SM_GNB_NRT_E2SM_gNB_NRT_ControlMessage_Format1_H_
#define	_E2SM_GNB_NRT_E2SM_gNB_NRT_ControlMessage_Format1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2SM_GNB_NRT_NRT-TableRecord.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM_GNB_NRT_E2SM-gNB-NRT-ControlMessage-Format1 */
typedef struct E2SM_GNB_NRT_E2SM_gNB_NRT_ControlMessage_Format1 {
	E2SM_GNB_NRT_NRT_TableRecord_t	 tablerecord;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_GNB_NRT_E2SM_gNB_NRT_ControlMessage_Format1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_GNB_NRT_E2SM_gNB_NRT_ControlMessage_Format1;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_GNB_NRT_E2SM_gNB_NRT_ControlMessage_Format1_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_GNB_NRT_E2SM_gNB_NRT_ControlMessage_Format1_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_GNB_NRT_E2SM_gNB_NRT_ControlMessage_Format1_H_ */
#include "asn_internal.h"
