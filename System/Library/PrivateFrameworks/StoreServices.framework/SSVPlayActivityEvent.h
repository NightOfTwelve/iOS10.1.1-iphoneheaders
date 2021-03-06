/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SSVPlayActivityEventContainerIDs, NSDate, NSTimeZone, SSVPlayActivityEventItemIDs, NSData;

@interface SSVPlayActivityEvent : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _buildVersion;
	NSString* _containerID;
	SSVPlayActivityEventContainerIDs* _containerIDs;
	unsigned long long _containerType;
	NSString* _deviceName;
	unsigned long long _endReasonType;
	NSDate* _eventDate;
	NSTimeZone* _eventTimeZone;
	unsigned long long _eventType;
	NSString* _externalID;
	NSString* _featureName;
	SSVPlayActivityEventItemIDs* _itemIDs;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	unsigned long long _itemType;
	unsigned long long _mediaType;
	BOOL _offline;
	long long _persistentID;
	NSString* _personalizedContainerID;
	unsigned long long _reasonHintType;
	NSData* _recommendationData;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	BOOL _SBEnabled;
	unsigned long long _sourceType;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	NSString* _storeID;
	NSData* _timedMetadata;
	NSData* _trackInfo;
	long long _version;

}

@property (nonatomic,readonly) long long version;                                                 //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * buildVersion;                                      //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) SSVPlayActivityEventContainerIDs * containerIDs;              //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long containerType;                                  //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,copy,readonly) NSString * deviceName;                                        //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) unsigned long long endReasonType;                                  //@synthesize endReasonType=_endReasonType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventDate;                                           //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) unsigned long long eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * eventTimeZone;                                   //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                                       //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) SSVPlayActivityEventItemIDs * itemIDs;                        //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,readonly) double itemDuration;                                               //@synthesize itemDuration=_itemDuration - In the implementation block
@property (nonatomic,readonly) double itemEndTime;                                                //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (nonatomic,readonly) double itemStartTime;                                              //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType;                                       //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (getter=isOffline,nonatomic,readonly) BOOL offline;                                     //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) long long persistentID; 
@property (nonatomic,readonly) unsigned long long reasonHintType;                                 //@synthesize reasonHintType=_reasonHintType - In the implementation block
@property (nonatomic,copy,readonly) NSData * recommendationData;                                  //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;                        //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                           //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (setter=BEnabled,getter=isSBEnabled,nonatomic,readonly) BOOL SBEnabled;                 //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                     //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) unsigned long long storeAccountID;                                 //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeFrontID;                                      //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,copy,readonly) NSData * timedMetadata;                                       //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSData * trackInfo;                                           //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerID;                                       //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                                        //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * personalizedContainerID;                           //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                                           //@synthesize storeID=_storeID - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)itemEndTime;
-(unsigned long long)endReasonType;
-(double)itemDuration;
-(BOOL)isSBEnabled;
-(double)itemStartTime;
-(NSData *)trackInfo;
-(NSTimeZone *)eventTimeZone;
-(NSString *)personalizedContainerID;
-(unsigned long long)reasonHintType;
-(SSVPlayActivityEventItemIDs *)itemIDs;
-(SSVPlayActivityEventContainerIDs *)containerIDs;
-(Class)_mutableCopyClass;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)buildVersion;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)sourceType;
-(long long)version;
-(unsigned long long)eventType;
-(NSString *)containerID;
-(NSDate *)eventDate;
-(unsigned long long)itemType;
-(NSData *)timedMetadata;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(unsigned long long)containerType;
-(unsigned long long)storeAccountID;
-(NSString *)externalID;
-(NSString *)featureName;
-(NSString *)storeID;
-(unsigned long long)mediaType;
-(long long)persistentID;
-(NSData *)recommendationData;
-(NSString *)storeFrontID;
-(NSString *)deviceName;
-(NSData *)dataRepresentation;
-(BOOL)isOffline;
-(id)initWithDataRepresentation:(id)arg1 ;
@end

