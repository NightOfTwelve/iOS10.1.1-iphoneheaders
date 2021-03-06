/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MailServices-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class MSXPCConnection, NSXPCInterface;

@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating> {

	os_unfair_lock_s _selectorLock;
	CFDictionaryRef _knownSelectors;
	MSXPCConnection* _connection;
	NSXPCInterface* _remoteInterface;
	/*^block*/id _errorHandler;
	id ____nsxpc_remoteObjectProxy;

}

@property (setter=___setNSXPCRemoteObjectProxy:,nonatomic,retain) id ___nsxpc_remoteObjectProxy;              //@synthesize ___nsxpc_remoteObjectProxy=____nsxpc_remoteObjectProxy - In the implementation block
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)___setNSXPCRemoteObjectProxy:(id)arg1 ;
-(id)___nsxpc_remoteObjectProxy;
@end

