/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AITXPCConnectionDelegate, OS_xpc_object, OS_dispatch_queue;
@class NSString, NSObject;

@interface AITXPCConnection : NSObject {

	int _pid;
	id<AITXPCConnectionDelegate> _delegate;
	NSString* _bundleId;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _currentMessage;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (assign,nonatomic) NSObject*<OS_xpc_object> connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                       //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) NSObject*<OS_xpc_object> currentMessage;                 //@synthesize currentMessage=_currentMessage - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) id<AITXPCConnectionDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL available; 
@property (nonatomic,readonly) int pid; 
-(void)setDelegate:(id<AITXPCConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<AITXPCConnectionDelegate>)delegate;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)closeConnection;
-(BOOL)available;
-(void)sendMessage:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3 ;
-(void)barrierWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_deserializeMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 userInfo:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)pid;
-(NSObject*<OS_xpc_object>)currentMessage;
-(void)setCurrentMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)_handleEvent:(id)arg1 ;
@end
