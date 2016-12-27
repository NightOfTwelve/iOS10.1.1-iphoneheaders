/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkObserver.h>
#import <ATFoundation/ATMessageLinkRequestHandler.h>

@class NSString;

@interface ATProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	int _endpointType;
	NSString* _expectedRequestCommand;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_processProvisioningRequest:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_processProvisioningResponse:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_paramsForRequest:(id)arg1 ;
-(void)_sendProvisioningRequest:(id)arg1 OnMessageLink:(id)arg2 ;
-(void)_processProvisioningResponse:(id)arg1 toCommand:(id)arg2 onMessageLink:(id)arg3 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)initAsEndpointType:(int)arg1 ;
@end
