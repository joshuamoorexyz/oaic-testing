/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2ap-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2AP/`
 */

#ifndef	_E2AP_ProtocolIE_Field_H_
#define	_E2AP_ProtocolIE_Field_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2AP_ProtocolIE-ID.h"
#include "E2AP_Criticality.h"
#include "ANY.h"
#include "asn_ioc.h"
#include "E2AP_RICaction-ToBeSetup-Item.h"
#include "E2AP_Presence.h"
#include "OPEN_TYPE.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
#include "E2AP_RICaction-Admitted-Item.h"
#include "E2AP_RICaction-NotAdmitted-Item.h"
#include "E2AP_RANfunction-Item.h"
#include "E2AP_RANfunctionID-Item.h"
#include "E2AP_RANfunctionIDcause-Item.h"
#include "E2AP_RICrequestID.h"
#include "E2AP_RANfunctionID.h"
#include "E2AP_RICsubscriptionDetails.h"
#include "E2AP_RICaction-Admitted-List.h"
#include "E2AP_RICaction-NotAdmitted-List.h"
#include "E2AP_CriticalityDiagnostics.h"
#include "E2AP_Cause.h"
#include "E2AP_RICactionID.h"
#include "E2AP_RICindicationSN.h"
#include "E2AP_RICindicationType.h"
#include "E2AP_RICindicationHeader.h"
#include "E2AP_RICindicationMessage.h"
#include "E2AP_RICcallProcessID.h"
#include "E2AP_RICcontrolHeader.h"
#include "E2AP_RICcontrolMessage.h"
#include "E2AP_RICcontrolAckRequest.h"
#include "E2AP_RICcontrolStatus.h"
#include "E2AP_RICcontrolOutcome.h"
#include "E2AP_GlobalE2node-ID.h"
#include "E2AP_RANfunctions-List.h"
#include "E2AP_GlobalRIC-ID.h"
#include "E2AP_RANfunctionsID-List.h"
#include "E2AP_RANfunctionsIDcause-List.h"
#include "E2AP_TimeToWait.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2AP_RICaction_ToBeSetup_ItemIEs__value_PR {
	E2AP_RICaction_ToBeSetup_ItemIEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICaction_ToBeSetup_ItemIEs__value_PR_RICaction_ToBeSetup_Item
} E2AP_RICaction_ToBeSetup_ItemIEs__value_PR;
typedef enum E2AP_RICaction_Admitted_ItemIEs__value_PR {
	E2AP_RICaction_Admitted_ItemIEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICaction_Admitted_ItemIEs__value_PR_RICaction_Admitted_Item
} E2AP_RICaction_Admitted_ItemIEs__value_PR;
typedef enum E2AP_RICaction_NotAdmitted_ItemIEs__value_PR {
	E2AP_RICaction_NotAdmitted_ItemIEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICaction_NotAdmitted_ItemIEs__value_PR_RICaction_NotAdmitted_Item
} E2AP_RICaction_NotAdmitted_ItemIEs__value_PR;
typedef enum E2AP_RANfunction_ItemIEs__value_PR {
	E2AP_RANfunction_ItemIEs__value_PR_NOTHING,	/* No components present */
	E2AP_RANfunction_ItemIEs__value_PR_RANfunction_Item
} E2AP_RANfunction_ItemIEs__value_PR;
typedef enum E2AP_RANfunctionID_ItemIEs__value_PR {
	E2AP_RANfunctionID_ItemIEs__value_PR_NOTHING,	/* No components present */
	E2AP_RANfunctionID_ItemIEs__value_PR_RANfunctionID_Item
} E2AP_RANfunctionID_ItemIEs__value_PR;
typedef enum E2AP_RANfunctionIDcause_ItemIEs__value_PR {
	E2AP_RANfunctionIDcause_ItemIEs__value_PR_NOTHING,	/* No components present */
	E2AP_RANfunctionIDcause_ItemIEs__value_PR_RANfunctionIDcause_Item
} E2AP_RANfunctionIDcause_ItemIEs__value_PR;
typedef enum E2AP_RICsubscriptionRequest_IEs__value_PR {
	E2AP_RICsubscriptionRequest_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICsubscriptionRequest_IEs__value_PR_RICrequestID,
	E2AP_RICsubscriptionRequest_IEs__value_PR_RANfunctionID,
	E2AP_RICsubscriptionRequest_IEs__value_PR_RICsubscriptionDetails
} E2AP_RICsubscriptionRequest_IEs__value_PR;
typedef enum E2AP_RICsubscriptionResponse_IEs__value_PR {
	E2AP_RICsubscriptionResponse_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICsubscriptionResponse_IEs__value_PR_RICrequestID,
	E2AP_RICsubscriptionResponse_IEs__value_PR_RANfunctionID,
	E2AP_RICsubscriptionResponse_IEs__value_PR_RICaction_Admitted_List,
	E2AP_RICsubscriptionResponse_IEs__value_PR_RICaction_NotAdmitted_List
} E2AP_RICsubscriptionResponse_IEs__value_PR;
typedef enum E2AP_RICsubscriptionFailure_IEs__value_PR {
	E2AP_RICsubscriptionFailure_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICsubscriptionFailure_IEs__value_PR_RICrequestID,
	E2AP_RICsubscriptionFailure_IEs__value_PR_RANfunctionID,
	E2AP_RICsubscriptionFailure_IEs__value_PR_RICaction_NotAdmitted_List,
	E2AP_RICsubscriptionFailure_IEs__value_PR_CriticalityDiagnostics
} E2AP_RICsubscriptionFailure_IEs__value_PR;
typedef enum E2AP_RICsubscriptionDeleteRequest_IEs__value_PR {
	E2AP_RICsubscriptionDeleteRequest_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICsubscriptionDeleteRequest_IEs__value_PR_RICrequestID,
	E2AP_RICsubscriptionDeleteRequest_IEs__value_PR_RANfunctionID
} E2AP_RICsubscriptionDeleteRequest_IEs__value_PR;
typedef enum E2AP_RICsubscriptionDeleteResponse_IEs__value_PR {
	E2AP_RICsubscriptionDeleteResponse_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICsubscriptionDeleteResponse_IEs__value_PR_RICrequestID,
	E2AP_RICsubscriptionDeleteResponse_IEs__value_PR_RANfunctionID
} E2AP_RICsubscriptionDeleteResponse_IEs__value_PR;
typedef enum E2AP_RICsubscriptionDeleteFailure_IEs__value_PR {
	E2AP_RICsubscriptionDeleteFailure_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICsubscriptionDeleteFailure_IEs__value_PR_RICrequestID,
	E2AP_RICsubscriptionDeleteFailure_IEs__value_PR_RANfunctionID,
	E2AP_RICsubscriptionDeleteFailure_IEs__value_PR_Cause,
	E2AP_RICsubscriptionDeleteFailure_IEs__value_PR_CriticalityDiagnostics
} E2AP_RICsubscriptionDeleteFailure_IEs__value_PR;
typedef enum E2AP_RICindication_IEs__value_PR {
	E2AP_RICindication_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICindication_IEs__value_PR_RICrequestID,
	E2AP_RICindication_IEs__value_PR_RANfunctionID,
	E2AP_RICindication_IEs__value_PR_RICactionID,
	E2AP_RICindication_IEs__value_PR_RICindicationSN,
	E2AP_RICindication_IEs__value_PR_RICindicationType,
	E2AP_RICindication_IEs__value_PR_RICindicationHeader,
	E2AP_RICindication_IEs__value_PR_RICindicationMessage,
	E2AP_RICindication_IEs__value_PR_RICcallProcessID
} E2AP_RICindication_IEs__value_PR;
typedef enum E2AP_RICcontrolRequest_IEs__value_PR {
	E2AP_RICcontrolRequest_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICcontrolRequest_IEs__value_PR_RICrequestID,
	E2AP_RICcontrolRequest_IEs__value_PR_RANfunctionID,
	E2AP_RICcontrolRequest_IEs__value_PR_RICcallProcessID,
	E2AP_RICcontrolRequest_IEs__value_PR_RICcontrolHeader,
	E2AP_RICcontrolRequest_IEs__value_PR_RICcontrolMessage,
	E2AP_RICcontrolRequest_IEs__value_PR_RICcontrolAckRequest
} E2AP_RICcontrolRequest_IEs__value_PR;
typedef enum E2AP_RICcontrolAcknowledge_IEs__value_PR {
	E2AP_RICcontrolAcknowledge_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICcontrolAcknowledge_IEs__value_PR_RICrequestID,
	E2AP_RICcontrolAcknowledge_IEs__value_PR_RANfunctionID,
	E2AP_RICcontrolAcknowledge_IEs__value_PR_RICcallProcessID,
	E2AP_RICcontrolAcknowledge_IEs__value_PR_RICcontrolStatus,
	E2AP_RICcontrolAcknowledge_IEs__value_PR_RICcontrolOutcome
} E2AP_RICcontrolAcknowledge_IEs__value_PR;
typedef enum E2AP_RICcontrolFailure_IEs__value_PR {
	E2AP_RICcontrolFailure_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICcontrolFailure_IEs__value_PR_RICrequestID,
	E2AP_RICcontrolFailure_IEs__value_PR_RANfunctionID,
	E2AP_RICcontrolFailure_IEs__value_PR_RICcallProcessID,
	E2AP_RICcontrolFailure_IEs__value_PR_Cause,
	E2AP_RICcontrolFailure_IEs__value_PR_RICcontrolOutcome
} E2AP_RICcontrolFailure_IEs__value_PR;
typedef enum E2AP_ErrorIndication_IEs__value_PR {
	E2AP_ErrorIndication_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_ErrorIndication_IEs__value_PR_RICrequestID,
	E2AP_ErrorIndication_IEs__value_PR_RANfunctionID,
	E2AP_ErrorIndication_IEs__value_PR_Cause,
	E2AP_ErrorIndication_IEs__value_PR_CriticalityDiagnostics
} E2AP_ErrorIndication_IEs__value_PR;
typedef enum E2AP_E2setupRequestIEs__value_PR {
	E2AP_E2setupRequestIEs__value_PR_NOTHING,	/* No components present */
	E2AP_E2setupRequestIEs__value_PR_GlobalE2node_ID,
	E2AP_E2setupRequestIEs__value_PR_RANfunctions_List
} E2AP_E2setupRequestIEs__value_PR;
typedef enum E2AP_E2setupResponseIEs__value_PR {
	E2AP_E2setupResponseIEs__value_PR_NOTHING,	/* No components present */
	E2AP_E2setupResponseIEs__value_PR_GlobalRIC_ID,
	E2AP_E2setupResponseIEs__value_PR_RANfunctionsID_List,
	E2AP_E2setupResponseIEs__value_PR_RANfunctionsIDcause_List
} E2AP_E2setupResponseIEs__value_PR;
typedef enum E2AP_E2setupFailureIEs__value_PR {
	E2AP_E2setupFailureIEs__value_PR_NOTHING,	/* No components present */
	E2AP_E2setupFailureIEs__value_PR_Cause,
	E2AP_E2setupFailureIEs__value_PR_TimeToWait,
	E2AP_E2setupFailureIEs__value_PR_CriticalityDiagnostics
} E2AP_E2setupFailureIEs__value_PR;
typedef enum E2AP_ResetRequestIEs__value_PR {
	E2AP_ResetRequestIEs__value_PR_NOTHING,	/* No components present */
	E2AP_ResetRequestIEs__value_PR_Cause
} E2AP_ResetRequestIEs__value_PR;
typedef enum E2AP_ResetResponseIEs__value_PR {
	E2AP_ResetResponseIEs__value_PR_NOTHING,	/* No components present */
	E2AP_ResetResponseIEs__value_PR_CriticalityDiagnostics
} E2AP_ResetResponseIEs__value_PR;
typedef enum E2AP_RICserviceUpdate_IEs__value_PR {
	E2AP_RICserviceUpdate_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICserviceUpdate_IEs__value_PR_RANfunctions_List,
	E2AP_RICserviceUpdate_IEs__value_PR_RANfunctions_List_1,
	E2AP_RICserviceUpdate_IEs__value_PR_RANfunctionsID_List
} E2AP_RICserviceUpdate_IEs__value_PR;
typedef enum E2AP_RICserviceUpdateAcknowledge_IEs__value_PR {
	E2AP_RICserviceUpdateAcknowledge_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICserviceUpdateAcknowledge_IEs__value_PR_RANfunctionsID_List,
	E2AP_RICserviceUpdateAcknowledge_IEs__value_PR_RANfunctionsIDcause_List
} E2AP_RICserviceUpdateAcknowledge_IEs__value_PR;
typedef enum E2AP_RICserviceUpdateFailure_IEs__value_PR {
	E2AP_RICserviceUpdateFailure_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICserviceUpdateFailure_IEs__value_PR_RANfunctionsIDcause_List,
	E2AP_RICserviceUpdateFailure_IEs__value_PR_TimeToWait,
	E2AP_RICserviceUpdateFailure_IEs__value_PR_CriticalityDiagnostics
} E2AP_RICserviceUpdateFailure_IEs__value_PR;
typedef enum E2AP_RICserviceQuery_IEs__value_PR {
	E2AP_RICserviceQuery_IEs__value_PR_NOTHING,	/* No components present */
	E2AP_RICserviceQuery_IEs__value_PR_RANfunctionsID_List
} E2AP_RICserviceQuery_IEs__value_PR;

/* E2AP_ProtocolIE-Field */
typedef struct E2AP_RICaction_ToBeSetup_ItemIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICaction_ToBeSetup_ItemIEs__value {
		E2AP_RICaction_ToBeSetup_ItemIEs__value_PR present;
		union E2AP_RICaction_ToBeSetup_ItemIEs__E2AP_value_u {
			E2AP_RICaction_ToBeSetup_Item_t	 RICaction_ToBeSetup_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICaction_ToBeSetup_ItemIEs_t;
typedef struct E2AP_RICaction_Admitted_ItemIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICaction_Admitted_ItemIEs__value {
		E2AP_RICaction_Admitted_ItemIEs__value_PR present;
		union E2AP_RICaction_Admitted_ItemIEs__E2AP_value_u {
			E2AP_RICaction_Admitted_Item_t	 RICaction_Admitted_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICaction_Admitted_ItemIEs_t;
typedef struct E2AP_RICaction_NotAdmitted_ItemIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICaction_NotAdmitted_ItemIEs__value {
		E2AP_RICaction_NotAdmitted_ItemIEs__value_PR present;
		union E2AP_RICaction_NotAdmitted_ItemIEs__E2AP_value_u {
			E2AP_RICaction_NotAdmitted_Item_t	 RICaction_NotAdmitted_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICaction_NotAdmitted_ItemIEs_t;
typedef struct E2AP_RANfunction_ItemIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RANfunction_ItemIEs__value {
		E2AP_RANfunction_ItemIEs__value_PR present;
		union E2AP_RANfunction_ItemIEs__E2AP_value_u {
			E2AP_RANfunction_Item_t	 RANfunction_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RANfunction_ItemIEs_t;
typedef struct E2AP_RANfunctionID_ItemIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RANfunctionID_ItemIEs__value {
		E2AP_RANfunctionID_ItemIEs__value_PR present;
		union E2AP_RANfunctionID_ItemIEs__E2AP_value_u {
			E2AP_RANfunctionID_Item_t	 RANfunctionID_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RANfunctionID_ItemIEs_t;
typedef struct E2AP_RANfunctionIDcause_ItemIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RANfunctionIDcause_ItemIEs__value {
		E2AP_RANfunctionIDcause_ItemIEs__value_PR present;
		union E2AP_RANfunctionIDcause_ItemIEs__E2AP_value_u {
			E2AP_RANfunctionIDcause_Item_t	 RANfunctionIDcause_Item;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RANfunctionIDcause_ItemIEs_t;
typedef struct E2AP_RICsubscriptionRequest_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICsubscriptionRequest_IEs__value {
		E2AP_RICsubscriptionRequest_IEs__value_PR present;
		union E2AP_RICsubscriptionRequest_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_RICsubscriptionDetails_t	 RICsubscriptionDetails;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICsubscriptionRequest_IEs_t;
typedef struct E2AP_RICsubscriptionResponse_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICsubscriptionResponse_IEs__value {
		E2AP_RICsubscriptionResponse_IEs__value_PR present;
		union E2AP_RICsubscriptionResponse_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_RICaction_Admitted_List_t	 RICaction_Admitted_List;
			E2AP_RICaction_NotAdmitted_List_t	 RICaction_NotAdmitted_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICsubscriptionResponse_IEs_t;
typedef struct E2AP_RICsubscriptionFailure_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICsubscriptionFailure_IEs__value {
		E2AP_RICsubscriptionFailure_IEs__value_PR present;
		union E2AP_RICsubscriptionFailure_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_RICaction_NotAdmitted_List_t	 RICaction_NotAdmitted_List;
			E2AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICsubscriptionFailure_IEs_t;
typedef struct E2AP_RICsubscriptionDeleteRequest_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICsubscriptionDeleteRequest_IEs__value {
		E2AP_RICsubscriptionDeleteRequest_IEs__value_PR present;
		union E2AP_RICsubscriptionDeleteRequest_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICsubscriptionDeleteRequest_IEs_t;
typedef struct E2AP_RICsubscriptionDeleteResponse_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICsubscriptionDeleteResponse_IEs__value {
		E2AP_RICsubscriptionDeleteResponse_IEs__value_PR present;
		union E2AP_RICsubscriptionDeleteResponse_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICsubscriptionDeleteResponse_IEs_t;
typedef struct E2AP_RICsubscriptionDeleteFailure_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICsubscriptionDeleteFailure_IEs__value {
		E2AP_RICsubscriptionDeleteFailure_IEs__value_PR present;
		union E2AP_RICsubscriptionDeleteFailure_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_Cause_t	 Cause;
			E2AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICsubscriptionDeleteFailure_IEs_t;
typedef struct E2AP_RICindication_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICindication_IEs__value {
		E2AP_RICindication_IEs__value_PR present;
		union E2AP_RICindication_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_RICactionID_t	 RICactionID;
			E2AP_RICindicationSN_t	 RICindicationSN;
			E2AP_RICindicationType_t	 RICindicationType;
			E2AP_RICindicationHeader_t	 RICindicationHeader;
			E2AP_RICindicationMessage_t	 RICindicationMessage;
			E2AP_RICcallProcessID_t	 RICcallProcessID;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICindication_IEs_t;
typedef struct E2AP_RICcontrolRequest_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICcontrolRequest_IEs__value {
		E2AP_RICcontrolRequest_IEs__value_PR present;
		union E2AP_RICcontrolRequest_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_RICcallProcessID_t	 RICcallProcessID;
			E2AP_RICcontrolHeader_t	 RICcontrolHeader;
			E2AP_RICcontrolMessage_t	 RICcontrolMessage;
			E2AP_RICcontrolAckRequest_t	 RICcontrolAckRequest;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICcontrolRequest_IEs_t;
typedef struct E2AP_RICcontrolAcknowledge_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICcontrolAcknowledge_IEs__value {
		E2AP_RICcontrolAcknowledge_IEs__value_PR present;
		union E2AP_RICcontrolAcknowledge_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_RICcallProcessID_t	 RICcallProcessID;
			E2AP_RICcontrolStatus_t	 RICcontrolStatus;
			E2AP_RICcontrolOutcome_t	 RICcontrolOutcome;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICcontrolAcknowledge_IEs_t;
typedef struct E2AP_RICcontrolFailure_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICcontrolFailure_IEs__value {
		E2AP_RICcontrolFailure_IEs__value_PR present;
		union E2AP_RICcontrolFailure_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_RICcallProcessID_t	 RICcallProcessID;
			E2AP_Cause_t	 Cause;
			E2AP_RICcontrolOutcome_t	 RICcontrolOutcome;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICcontrolFailure_IEs_t;
typedef struct E2AP_ErrorIndication_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_ErrorIndication_IEs__value {
		E2AP_ErrorIndication_IEs__value_PR present;
		union E2AP_ErrorIndication_IEs__E2AP_value_u {
			E2AP_RICrequestID_t	 RICrequestID;
			E2AP_RANfunctionID_t	 RANfunctionID;
			E2AP_Cause_t	 Cause;
			E2AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ErrorIndication_IEs_t;
typedef struct E2AP_E2setupRequestIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_E2setupRequestIEs__value {
		E2AP_E2setupRequestIEs__value_PR present;
		union E2AP_E2setupRequestIEs__E2AP_value_u {
			E2AP_GlobalE2node_ID_t	 GlobalE2node_ID;
			E2AP_RANfunctions_List_t	 RANfunctions_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_E2setupRequestIEs_t;
typedef struct E2AP_E2setupResponseIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_E2setupResponseIEs__value {
		E2AP_E2setupResponseIEs__value_PR present;
		union E2AP_E2setupResponseIEs__E2AP_value_u {
			E2AP_GlobalRIC_ID_t	 GlobalRIC_ID;
			E2AP_RANfunctionsID_List_t	 RANfunctionsID_List;
			E2AP_RANfunctionsIDcause_List_t	 RANfunctionsIDcause_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_E2setupResponseIEs_t;
typedef struct E2AP_E2setupFailureIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_E2setupFailureIEs__value {
		E2AP_E2setupFailureIEs__value_PR present;
		union E2AP_E2setupFailureIEs__E2AP_value_u {
			E2AP_Cause_t	 Cause;
			E2AP_TimeToWait_t	 TimeToWait;
			E2AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_E2setupFailureIEs_t;
typedef struct E2AP_ResetRequestIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_ResetRequestIEs__value {
		E2AP_ResetRequestIEs__value_PR present;
		union E2AP_ResetRequestIEs__E2AP_value_u {
			E2AP_Cause_t	 Cause;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ResetRequestIEs_t;
typedef struct E2AP_ResetResponseIEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_ResetResponseIEs__value {
		E2AP_ResetResponseIEs__value_PR present;
		union E2AP_ResetResponseIEs__E2AP_value_u {
			E2AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ResetResponseIEs_t;
typedef struct E2AP_RICserviceUpdate_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICserviceUpdate_IEs__value {
		E2AP_RICserviceUpdate_IEs__value_PR present;
		union E2AP_RICserviceUpdate_IEs__E2AP_value_u {
			E2AP_RANfunctions_List_t	 RANfunctions_List;
			E2AP_RANfunctions_List_t	 RANfunctions_List_1;
			E2AP_RANfunctionsID_List_t	 RANfunctionsID_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICserviceUpdate_IEs_t;
typedef struct E2AP_RICserviceUpdateAcknowledge_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICserviceUpdateAcknowledge_IEs__value {
		E2AP_RICserviceUpdateAcknowledge_IEs__value_PR present;
		union E2AP_RICserviceUpdateAcknowledge_IEs__E2AP_value_u {
			E2AP_RANfunctionsID_List_t	 RANfunctionsID_List;
			E2AP_RANfunctionsIDcause_List_t	 RANfunctionsIDcause_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICserviceUpdateAcknowledge_IEs_t;
typedef struct E2AP_RICserviceUpdateFailure_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICserviceUpdateFailure_IEs__value {
		E2AP_RICserviceUpdateFailure_IEs__value_PR present;
		union E2AP_RICserviceUpdateFailure_IEs__E2AP_value_u {
			E2AP_RANfunctionsIDcause_List_t	 RANfunctionsIDcause_List;
			E2AP_TimeToWait_t	 TimeToWait;
			E2AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICserviceUpdateFailure_IEs_t;
typedef struct E2AP_RICserviceQuery_IEs {
	E2AP_ProtocolIE_ID_t	 id;
	E2AP_Criticality_t	 criticality;
	struct E2AP_RICserviceQuery_IEs__value {
		E2AP_RICserviceQuery_IEs__value_PR present;
		union E2AP_RICserviceQuery_IEs__E2AP_value_u {
			E2AP_RANfunctionsID_List_t	 RANfunctionsID_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_RICserviceQuery_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICaction_ToBeSetup_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICaction_ToBeSetup_ItemIEs_specs_1;
extern asn_TYPE_member_t asn_MBR_E2AP_RICaction_ToBeSetup_ItemIEs_1[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICaction_Admitted_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICaction_Admitted_ItemIEs_specs_5;
extern asn_TYPE_member_t asn_MBR_E2AP_RICaction_Admitted_ItemIEs_5[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICaction_NotAdmitted_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICaction_NotAdmitted_ItemIEs_specs_9;
extern asn_TYPE_member_t asn_MBR_E2AP_RICaction_NotAdmitted_ItemIEs_9[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RANfunction_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RANfunction_ItemIEs_specs_13;
extern asn_TYPE_member_t asn_MBR_E2AP_RANfunction_ItemIEs_13[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RANfunctionID_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RANfunctionID_ItemIEs_specs_17;
extern asn_TYPE_member_t asn_MBR_E2AP_RANfunctionID_ItemIEs_17[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RANfunctionIDcause_ItemIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RANfunctionIDcause_ItemIEs_specs_21;
extern asn_TYPE_member_t asn_MBR_E2AP_RANfunctionIDcause_ItemIEs_21[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICsubscriptionRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICsubscriptionRequest_IEs_specs_25;
extern asn_TYPE_member_t asn_MBR_E2AP_RICsubscriptionRequest_IEs_25[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICsubscriptionResponse_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICsubscriptionResponse_IEs_specs_29;
extern asn_TYPE_member_t asn_MBR_E2AP_RICsubscriptionResponse_IEs_29[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICsubscriptionFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICsubscriptionFailure_IEs_specs_33;
extern asn_TYPE_member_t asn_MBR_E2AP_RICsubscriptionFailure_IEs_33[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICsubscriptionDeleteRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICsubscriptionDeleteRequest_IEs_specs_37;
extern asn_TYPE_member_t asn_MBR_E2AP_RICsubscriptionDeleteRequest_IEs_37[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICsubscriptionDeleteResponse_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICsubscriptionDeleteResponse_IEs_specs_41;
extern asn_TYPE_member_t asn_MBR_E2AP_RICsubscriptionDeleteResponse_IEs_41[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICsubscriptionDeleteFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICsubscriptionDeleteFailure_IEs_specs_45;
extern asn_TYPE_member_t asn_MBR_E2AP_RICsubscriptionDeleteFailure_IEs_45[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICindication_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICindication_IEs_specs_49;
extern asn_TYPE_member_t asn_MBR_E2AP_RICindication_IEs_49[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICcontrolRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICcontrolRequest_IEs_specs_53;
extern asn_TYPE_member_t asn_MBR_E2AP_RICcontrolRequest_IEs_53[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICcontrolAcknowledge_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICcontrolAcknowledge_IEs_specs_57;
extern asn_TYPE_member_t asn_MBR_E2AP_RICcontrolAcknowledge_IEs_57[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICcontrolFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICcontrolFailure_IEs_specs_61;
extern asn_TYPE_member_t asn_MBR_E2AP_RICcontrolFailure_IEs_61[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ErrorIndication_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_ErrorIndication_IEs_specs_65;
extern asn_TYPE_member_t asn_MBR_E2AP_ErrorIndication_IEs_65[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_E2setupRequestIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_E2setupRequestIEs_specs_69;
extern asn_TYPE_member_t asn_MBR_E2AP_E2setupRequestIEs_69[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_E2setupResponseIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_E2setupResponseIEs_specs_73;
extern asn_TYPE_member_t asn_MBR_E2AP_E2setupResponseIEs_73[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_E2setupFailureIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_E2setupFailureIEs_specs_77;
extern asn_TYPE_member_t asn_MBR_E2AP_E2setupFailureIEs_77[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ResetRequestIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_ResetRequestIEs_specs_81;
extern asn_TYPE_member_t asn_MBR_E2AP_ResetRequestIEs_81[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ResetResponseIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_ResetResponseIEs_specs_85;
extern asn_TYPE_member_t asn_MBR_E2AP_ResetResponseIEs_85[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICserviceUpdate_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICserviceUpdate_IEs_specs_89;
extern asn_TYPE_member_t asn_MBR_E2AP_RICserviceUpdate_IEs_89[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICserviceUpdateAcknowledge_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICserviceUpdateAcknowledge_IEs_specs_93;
extern asn_TYPE_member_t asn_MBR_E2AP_RICserviceUpdateAcknowledge_IEs_93[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICserviceUpdateFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICserviceUpdateFailure_IEs_specs_97;
extern asn_TYPE_member_t asn_MBR_E2AP_RICserviceUpdateFailure_IEs_97[3];
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICserviceQuery_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_RICserviceQuery_IEs_specs_101;
extern asn_TYPE_member_t asn_MBR_E2AP_RICserviceQuery_IEs_101[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2AP_ProtocolIE_Field_H_ */
#include "asn_internal.h"
