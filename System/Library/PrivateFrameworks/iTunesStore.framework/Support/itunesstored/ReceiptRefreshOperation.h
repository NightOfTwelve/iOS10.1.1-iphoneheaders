/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@protocol SKPaymentQueueClient;
@class SSPurchaseReceipt;

@interface ReceiptRefreshOperation : ISOperation {

	id<SKPaymentQueueClient> _client;
	SSPurchaseReceipt* _existingReceipt;
	unsigned long long _flags;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock; 
-(BOOL)_isSandboxed;
-(id)_postBodyData;
-(id)initWithClient:(id)arg1 receiptFlags:(unsigned long long)arg2 ;
-(void)run;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end

