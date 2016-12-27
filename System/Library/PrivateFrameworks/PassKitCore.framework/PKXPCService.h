/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, PKXPCServiceDelegate;
@class NSXPCInterface, NSString, NSLock, NSXPCConnection, PKXPCForwarder;

@interface PKXPCService : NSObject {

	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedObjectInterface;
	id _exportedObject;
	NSString* _className;
	NSString* _serviceResumedNotificationName;
	NSLock* _connectionLock;
	NSXPCConnection* _connection;
	PKXPCForwarder* _exportedProxy;
	BOOL _suspendCallbacks;
	id<NSObject> _foregroundListener;
	id<NSObject> _backgroundListener;
	int _serviceResumedToken;
	id<PKXPCServiceDelegate> _delegate;
	NSString* _machServiceName;

}

@property (nonatomic,readonly) NSString * machServiceName;                          //@synthesize machServiceName=_machServiceName - In the implementation block
@property (assign,nonatomic,__weak) id<PKXPCServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,readonly) BOOL connectionEstablished; 
+(void)setCallbacksSuspendedEvaluator:(/*^block*/id)arg1 ;
+(BOOL)areCallbacksSuspended;
-(id)init;
-(BOOL)isSuspended;
-(void)setDelegate:(id<PKXPCServiceDelegate>)arg1 ;
-(void)dealloc;
-(id<PKXPCServiceDelegate>)delegate;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)_connection;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 ;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 ;
-(id)remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithSemaphore:(id)arg1 ;
-(NSString *)machServiceName;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_registerForServiceListenerResumedNotifications;
-(void)_establishServiceConnection;
-(void)_unregisterForServiceListenerResumedNotifications;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(void)_invalidateConnectionIfPossible;
-(/*^block*/id)_newWrappedErrorHandlerForHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_newErrorHandlerWithSemaphore:(id)arg1 ;
-(id)existingRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_createConnectionIfPossible:(BOOL)arg1 ;
-(void)_sendResumed;
-(void)_sendSuspended;
-(id)existingRemoteObjectProxy;
-(id)existingSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)connectionEstablished;
@end
