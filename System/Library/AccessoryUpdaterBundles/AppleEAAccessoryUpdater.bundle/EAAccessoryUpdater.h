/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessoryUpdaterBundles/AppleEAAccessoryUpdater.bundle/AppleEAAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleEAAccessoryUpdater/FudPlugin.h>

@protocol FudPluginDelegate;
@class EAFirmwareUpdater, NSString, NSNumber, NSDictionary;

@interface EAAccessoryUpdater : NSObject <FudPlugin> {

	id<FudPluginDelegate> delegate;
	EAFirmwareUpdater* firmwareUpdater;
	NSString* deviceClass;
	NSNumber* eaID;
	NSString* mobileAssetType;
	NSDictionary* initOptions;

}

@property (retain) NSString * deviceClass; 
@property (retain) NSNumber * eaID; 
@property (retain) NSString * mobileAssetType; 
@property (retain) NSDictionary * initOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithOptions:(id)arg1 ;
-(void)findFirmwareWithOptions:(id)arg1 remote:(BOOL)arg2 ;
-(void)bootstrapWithOptions:(id)arg1 ;
-(void)setMobileAssetType:(NSString *)arg1 ;
-(BOOL)shouldUpdateBeSilent:(id)arg1 ;
-(void)prepareFirmwareWithOptions:(id)arg1 ;
-(void)applyFirmwareWithOptions:(id)arg1 ;
-(void)downloadFirmwareWithOptions:(id)arg1 ;
-(NSNumber *)eaID;
-(NSString *)mobileAssetType;
-(void)setInitOptions:(NSDictionary *)arg1 ;
-(void)setEaID:(NSNumber *)arg1 ;
-(NSDictionary *)initOptions;
-(id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id*)arg3 options:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setDeviceClass:(NSString *)arg1 ;
-(NSString *)deviceClass;
@end
