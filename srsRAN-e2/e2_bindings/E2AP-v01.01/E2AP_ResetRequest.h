/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "./e2ap-v01.01.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D E2AP-v01.01/`
 */

#ifndef	_E2AP_ResetRequest_H_
#define	_E2AP_ResetRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2AP_ProtocolIE-Container.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2AP_ResetRequest */
typedef struct E2AP_ResetRequest {
	E2AP_ProtocolIE_Container_1709P20_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ResetRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ResetRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_ResetRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_E2AP_ResetRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E2AP_ResetRequest_H_ */
#include "asn_internal.h"
