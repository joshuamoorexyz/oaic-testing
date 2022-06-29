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

#include "RICtimeToWait.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_RICtimeToWait_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  17 }	/* (0..17,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RICtimeToWait_value2enum_1[] = {
	{ 0,	4,	"zero" },
	{ 1,	4,	"w1ms" },
	{ 2,	4,	"w2ms" },
	{ 3,	4,	"w5ms" },
	{ 4,	5,	"w10ms" },
	{ 5,	5,	"w20ms" },
	{ 6,	5,	"w30ms" },
	{ 7,	5,	"w40ms" },
	{ 8,	5,	"w50ms" },
	{ 9,	6,	"w100ms" },
	{ 10,	6,	"w200ms" },
	{ 11,	6,	"w500ms" },
	{ 12,	3,	"w1s" },
	{ 13,	3,	"w2s" },
	{ 14,	3,	"w5s" },
	{ 15,	4,	"w10s" },
	{ 16,	4,	"w20s" },
	{ 17,	4,	"w60s" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RICtimeToWait_enum2value_1[] = {
	9,	/* w100ms(9) */
	4,	/* w10ms(4) */
	15,	/* w10s(15) */
	1,	/* w1ms(1) */
	12,	/* w1s(12) */
	10,	/* w200ms(10) */
	5,	/* w20ms(5) */
	16,	/* w20s(16) */
	2,	/* w2ms(2) */
	13,	/* w2s(13) */
	6,	/* w30ms(6) */
	7,	/* w40ms(7) */
	11,	/* w500ms(11) */
	8,	/* w50ms(8) */
	3,	/* w5ms(3) */
	14,	/* w5s(14) */
	17,	/* w60s(17) */
	0	/* zero(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_RICtimeToWait_specs_1 = {
	asn_MAP_RICtimeToWait_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RICtimeToWait_enum2value_1,	/* N => "tag"; sorted by N */
	18,	/* Number of elements in the maps */
	19,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RICtimeToWait_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RICtimeToWait = {
	"RICtimeToWait",
	"RICtimeToWait",
	&asn_OP_NativeEnumerated,
	asn_DEF_RICtimeToWait_tags_1,
	sizeof(asn_DEF_RICtimeToWait_tags_1)
		/sizeof(asn_DEF_RICtimeToWait_tags_1[0]), /* 1 */
	asn_DEF_RICtimeToWait_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICtimeToWait_tags_1)
		/sizeof(asn_DEF_RICtimeToWait_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RICtimeToWait_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RICtimeToWait_specs_1	/* Additional specs */
};
