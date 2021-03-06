/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDDevice, NSObject, NSMutableArray;

@interface _HMDLegacyWatchSession : HMFMessageTransport {

	NSUUID* _identifier;
	long long _role;
	HMDDevice* _peer;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingTransactions;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long role;                                        //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) HMDDevice * peer;                                      //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingTransactions;                  //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(void)stop;
-(long long)role;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSMutableArray *)pendingTransactions;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDDevice *)peer;
-(void)_handleClientReceivedMessage:(id)arg1 ;
-(void)_handleServerReceivedMessage:(id)arg1 ;
-(id)transactionForIdentifier:(id)arg1 ;
-(id)initWithPeer:(id)arg1 role:(long long)arg2 identifier:(id)arg3 ;
-(void)handleReceivedMessage:(id)arg1 ;
@end

