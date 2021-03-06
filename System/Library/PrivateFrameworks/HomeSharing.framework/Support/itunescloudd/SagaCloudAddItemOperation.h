/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/SagaCloudAddOperation.h>

@class NSDictionary;

@interface SagaCloudAddItemOperation : SagaCloudAddOperation {

	long long _adamID;
	NSDictionary* _adamIDToSagaIDMap;

}

@property (nonatomic,retain) NSDictionary * adamIDToSagaIDMap;              //@synthesize adamIDToSagaIDMap=_adamIDToSagaIDMap - In the implementation block
-(id)initWithAdamID:(long long)arg1 ;
-(NSDictionary *)adamIDToSagaIDMap;
-(id)cloudAddRequestWithDatabaseID:(unsigned)arg1 ;
-(id)cloudAddRequestDescription;
-(void)processAddedItems:(id)arg1 ;
-(void)removePendingAddedItemsForPermanentlyFailedOperation;
-(void)setAdamIDToSagaIDMap:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

