/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Crypto-Conditions"
 * 	found in "CryptoConditions.asn"
 */

#ifndef	_Fulfillment_H_
#define	_Fulfillment_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PreimageFulfillment.h"
#include "RsaSha256Fulfillment.h"
#include "Ed25519Sha512Fulfillment.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Fulfillment_PR {
	Fulfillment_PR_NOTHING,	/* No components present */
	Fulfillment_PR_preimageSha256,
	Fulfillment_PR_prefixSha256,
	Fulfillment_PR_thresholdSha256,
	Fulfillment_PR_rsaSha256,
	Fulfillment_PR_ed25519Sha256
} Fulfillment_PR;

/* Forward declarations */
struct PrefixFulfillment;
struct ThresholdFulfillment;

/* Fulfillment */
typedef struct Fulfillment {
	Fulfillment_PR present;
	union Fulfillment_u {
		PreimageFulfillment_t	 preimageSha256;
		struct PrefixFulfillment	*prefixSha256;
		struct ThresholdFulfillment	*thresholdSha256;
		RsaSha256Fulfillment_t	 rsaSha256;
		Ed25519Sha512Fulfillment_t	 ed25519Sha256;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Fulfillment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Fulfillment;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrefixFulfillment.h"
#include "ThresholdFulfillment.h"

#endif	/* _Fulfillment_H_ */
#include <asn_internal.h>
