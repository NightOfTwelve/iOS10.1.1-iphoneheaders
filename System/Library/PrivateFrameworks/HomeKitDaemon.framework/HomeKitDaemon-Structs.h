/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned duration : 1;
	unsigned timestamp : 1;
	unsigned closeReason : 1;
	unsigned deviceType : 1;
	unsigned errorCode : 1;
	unsigned role : 1;
} SCD_Struct_AW1;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned errorCode : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned timestamp : 1;
	unsigned databaseSize : 1;
	unsigned metadataVersion : 1;
	unsigned isResidentCapable : 1;
	unsigned isResidentEnabled : 1;
} SCD_Struct_AW4;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct {
	unsigned duration : 1;
	unsigned startupDelay : 1;
	unsigned timestamp : 1;
	unsigned errorCode : 1;
	unsigned resolutionOnClose : 1;
	unsigned isLocal : 1;
	unsigned isStreamStarted : 1;
} SCD_Struct_AW6;

typedef struct {
	unsigned timestamp : 1;
	unsigned dataSyncState : 1;
	unsigned fetchCount : 1;
	unsigned pushCount : 1;
	unsigned uploadCount : 1;
	unsigned uploadErrorCount : 1;
	unsigned hasDecryptionFailed : 1;
	unsigned lastDecryptionFailed : 1;
	unsigned uploadMaximumDelayReached : 1;
} SCD_Struct_AW7;

typedef struct {
	unsigned timestamp : 1;
	unsigned errorCode : 1;
	unsigned responseType : 1;
	unsigned stage : 1;
} SCD_Struct_AW8;

typedef struct CGImage* CGImageRef;

typedef struct {
	char* ptr;
	unsigned long long len;
	unsigned long long maxLen;
	char* mallocedPtr;
	unsigned char inlineBuffer[300];
} SCD_Struct_HM10;

typedef struct {
	unsigned count : 1;
} SCD_Struct_AW11;

typedef union {
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} SCD_Union_HM12;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct in6_addr {
	SCD_Union_HM12 __u6_addr;
} in6_addr;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef union {
	sockaddr sa;
	sockaddr_in v4;
	sockaddr_in6 v6;
} SCD_Union_HM18;

typedef struct {
	unsigned numAccessories : 1;
	unsigned numAccessoryServiceGroups : 1;
	unsigned numAdmins : 1;
	unsigned numEventTriggers : 1;
	unsigned numRooms : 1;
	unsigned numScenes : 1;
	unsigned numServices : 1;
	unsigned numTimerTriggers : 1;
	unsigned numTriggers : 1;
	unsigned numUsers : 1;
	unsigned numZones : 1;
	unsigned isPrimaryResident : 1;
	unsigned isResidentAvailable : 1;
} SCD_Struct_AW19;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct FairPlayHWInfo_ {
	unsigned IDLength;
	unsigned char ID[20];
} FairPlayHWInfo_;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CFString* CFStringRef;

