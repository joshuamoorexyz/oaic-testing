/*
 *
 * Copyright 2020 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_CauseRIC_H_
#define	_CauseRIC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseRIC {
	CauseRIC_ran_function_id_Invalid	= 0,
	CauseRIC_action_not_supported	= 1,
	CauseRIC_excessive_actions	= 2,
	CauseRIC_duplicate_action	= 3,
	CauseRIC_duplicate_event	= 4,
	CauseRIC_function_resource_limit	= 5,
	CauseRIC_request_id_unknown	= 6,
	CauseRIC_inconsistent_action_subsequent_action_sequence	= 7,
	CauseRIC_control_message_invalid	= 8,
	CauseRIC_call_process_id_invalid	= 9,
	CauseRIC_unspecified	= 10
	/*
	 * Enumeration is extensible
	 */
} e_CauseRIC;

/* CauseRIC */
typedef long	 CauseRIC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseRIC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseRIC;
extern const asn_INTEGER_specifics_t asn_SPC_CauseRIC_specs_1;
asn_struct_free_f CauseRIC_free;
asn_struct_print_f CauseRIC_print;
asn_constr_check_f CauseRIC_constraint;
ber_type_decoder_f CauseRIC_decode_ber;
der_type_encoder_f CauseRIC_encode_der;
xer_type_decoder_f CauseRIC_decode_xer;
xer_type_encoder_f CauseRIC_encode_xer;
per_type_decoder_f CauseRIC_decode_uper;
per_type_encoder_f CauseRIC_encode_uper;
per_type_decoder_f CauseRIC_decode_aper;
per_type_encoder_f CauseRIC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseRIC_H_ */
#include "asn_internal.h"
