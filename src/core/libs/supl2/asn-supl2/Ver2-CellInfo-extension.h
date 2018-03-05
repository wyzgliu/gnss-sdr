/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_Ver2_CellInfo_extension_H_
#define	_Ver2_CellInfo_extension_H_


#include "asn_application.h"

/* Including external dependencies */
#include "HrpdCellInformation.h"
#include "UmbCellInformation.h"
#include "LteCellInformation.h"
#include "WlanAPInformation.h"
#include "WimaxBSInformation.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ver2_CellInfo_extension_PR {
	Ver2_CellInfo_extension_PR_NOTHING,	/* No components present */
	Ver2_CellInfo_extension_PR_hrpdCell,
	Ver2_CellInfo_extension_PR_umbCell,
	Ver2_CellInfo_extension_PR_lteCell,
	Ver2_CellInfo_extension_PR_wlanAP,
	Ver2_CellInfo_extension_PR_wimaxBS
	/* Extensions may appear below */
	
} Ver2_CellInfo_extension_PR;

/* Ver2-CellInfo-extension */
typedef struct Ver2_CellInfo_extension {
	Ver2_CellInfo_extension_PR present;
	union Ver2_CellInfo_extension_u {
		HrpdCellInformation_t	 hrpdCell;
		UmbCellInformation_t	 umbCell;
		LteCellInformation_t	 lteCell;
		WlanAPInformation_t	 wlanAP;
		WimaxBSInformation_t	 wimaxBS;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ver2_CellInfo_extension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ver2_CellInfo_extension;
extern asn_CHOICE_specifics_t asn_SPC_Ver2_CellInfo_extension_specs_1;
extern asn_TYPE_member_t asn_MBR_Ver2_CellInfo_extension_1[5];
extern asn_per_constraints_t asn_PER_type_Ver2_CellInfo_extension_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ver2_CellInfo_extension_H_ */
#include <asn_internal.h>