/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/profiled-Structs.h>
#import <profiled/MCNewPayloadHandler.h>

@class NSString;

@interface MCNewWiFiPayloadHandler : MCNewPayloadHandler {

	WiFiManagerClientRef _manager;
	NSString* _setAsideUUID;

}
+(id)managedWiFiNetworkNames;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(BOOL)_applyProxyCredential:(id)arg1 ;
-(void)_updateWiFiCustomSetWithSetID:(id)arg1 forSSID:(id)arg2 ;
-(BOOL)_setEAPConfig:(id)arg1 onNetwork:(WiFiNetworkRef)arg2 ;
-(BOOL)_configureWiFiForNetwork:(WiFiNetworkRef)arg1 outError:(id*)arg2 ;
-(void)_removeProxyCredential;
-(void)_removeNetworkWithUUID:(id)arg1 ;
-(void)dealloc;
-(void)remove;
-(BOOL)isInstalled;
@end
