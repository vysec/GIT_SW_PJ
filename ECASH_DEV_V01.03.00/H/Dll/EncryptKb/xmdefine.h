//
//	xm_define.h
//

#ifndef	__XM_DEFINE_H__
#define	__XM_DEFINE_H__

#define	CERT_SIZE_MAX		2048
#define	MAX_PATH_LEN		64

#define XM_ERR_REPEAT_KEYINIT           -100

#define XM_ERR_MALLOC_FAILED			-200

#define	XM_ERR_INTERNAL_ERROR			-300
#define	XM_ERR_INVALID_INPUT			-311
#define	XM_ERR_NOT_INITAILIZED			-312
#define	XM_ERR_SOCKET_ERROR				-313
#define	XM_ERR_TOKEN_DECODE				-314
#define	XM_ERR_BUFFER_OVERFLOW			-315

#define	XM_ERR_NO_CERTIFICATE			-320
#define	XM_ERR_CERTIFICATE_EXPIRED		-321

#define	XM_ERR_NO_PRIVATE_KEY			-330
#define	XM_ERR_INVALID_PRIVATE_KEY		-331
#define	XM_ERR_INVALID_PASSWORD			-332
#define	XM_ERR_PKCS1_ENCRYPT_FAILED		-334

#define	XM_ERR_SECRET_KEY_EXPIRED		-350
#define	XM_ERR_ENCRYPTION_FAILED		-351
#define	XM_ERR_DECRYPTION_FAILED		-352
#define	XM_ERR_BAD_MAC					-353

#define XM_ERR_LIB_NOT_INIT				-370
#define XM_ERR_INVALID_KEY_LENGTH		-371
#define XM_ERR_SEED_INIT_FAILED			-372

#define XM_ERR_INVALID_VERSION          -400
#define XM_ERR_INVALID_PROFILE          -401
#define XM_ERR_INVALID_SESSION_ID       -402

#define XM_ERR_REPLAY_DECTECTION        -500
#define XM_ERR_INVALID_CERT             -501

#define XM_ERR_BASE64_ENCODE_FAIL		-600
#define XM_ERR_BASE64_DECODE_FAIL		-601

#define XM_ERR_CERT_SIGN_VERIFY_FAILED	-700


#endif
