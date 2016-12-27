/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:46:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CRCarPlayAppService.h>

@class NSString;

@interface CRCarPlayAppServiceAgent : NSObject <NSXPCListenerDelegate, CRCarPlayAppService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAssetUpdatedNotification;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)fetchAppBlacklistWithReply:(/*^block*/id)arg1 ;
@end
