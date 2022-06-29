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

#ifndef	_PLMN_Identity_H_
#define	_PLMN_Identity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PLMN-Identity */
typedef OCTET_STRING_t	 PLMN_Identity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PLMN_Identity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PLMN_Identity;
asn_struct_free_f PLMN_Identity_free;
asn_struct_print_f PLMN_Identity_print;
asn_constr_check_f PLMN_Identity_constraint;
ber_type_decoder_f PLMN_Identity_decode_ber;
der_type_encoder_f PLMN_Identity_encode_der;
xer_type_decoder_f PLMN_Identity_decode_xer;
xer_type_encoder_f PLMN_Identity_encode_xer;
per_type_decoder_f PLMN_Identity_decode_uper;
per_type_encoder_f PLMN_Identity_encode_uper;
per_type_decoder_f PLMN_Identity_decode_aper;
per_type_encoder_f PLMN_Identity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_Identity_H_ */
#include "asn_internal.h"
