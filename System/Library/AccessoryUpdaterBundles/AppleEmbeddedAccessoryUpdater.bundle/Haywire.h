/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessoryUpdaterBundles/AppleEmbeddedAccessoryUpdater.bundle/AppleEmbeddedAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleEmbeddedAccessoryUpdater/AppleEmbeddedAccessoryUpdater-Structs.h>
#import <AppleEAAccessoryUpdater/FudPlugin.h>

@protocol FudPluginDelegate;
@class NSMutableDictionary, NSString, NSArray, NSError, ASAsset, NSDictionary;

@interface Haywire : NSObject <FudPlugin> {

	id<FudPluginDelegate> _delegate;
	NSMutableDictionary* _outOptions;
	NSString* _maxLocalBuildNumber;
	NSString* _maxRemoteBuildNumber;
	NSString* _chipID;
	NSString* _boardID;
	NSArray* _assetResults;
	NSError* _error;
	BOOL _success;
	BOOL _retryBootstrap;
	BOOL _productionFused;
	ASAsset* _firmwareAsset;
	NSDictionary* _options;

}

@property (retain,readonly) NSString * bootArgs; 
@property (retain,readonly) NSString * bundlePath; 
@property (retain,readonly) NSString * variant; 
@property (retain) NSDictionary * options;                          //@synthesize options=_options - In the implementation block
@property (retain) NSMutableDictionary * outOptions;                //@synthesize outOptions=_outOptions - In the implementation block
@property (retain) NSString * maxLocalBuildNumber;                  //@synthesize maxLocalBuildNumber=_maxLocalBuildNumber - In the implementation block
@property (retain) NSString * maxRemoteBuildNumber;                 //@synthesize maxRemoteBuildNumber=_maxRemoteBuildNumber - In the implementation block
@property (retain) NSString * chipID;                               //@synthesize chipID=_chipID - In the implementation block
@property (retain) NSString * boardID;                              //@synthesize boardID=_boardID - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (retain) NSArray * assetResults;                          //@synthesize assetResults=_assetResults - In the implementation block
@property (retain) ASAsset * firmwareAsset;                         //@synthesize firmwareAsset=_firmwareAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithOptions:(id)arg1 ;
-(void)findFirmwareWithOptions:(id)arg1 remote:(BOOL)arg2 ;
-(void)dfuDeviceDisconnected:(AMDFUModeDeviceRef)arg1 ;
-(void)bootstrapWithOptions:(id)arg1 ;
-(void)recoveryDeviceConnected:(AMRecoveryModeDeviceRef)arg1 ;
-(void)setMaxLocalBuildNumber:(NSString *)arg1 ;
-(NSString *)maxRemoteBuildNumber;
-(void)dfuDeviceConnected:(AMDFUModeDeviceRef)arg1 ;
-(id)getUpdateRequired;
-(void)downloadProgress:(id)arg1 error:(id)arg2 ;
-(void)recoveryDeviceDisconnected:(AMRecoveryModeDeviceRef)arg1 ;
-(id)assetWithMaxVersion:(id)arg1 remote:(BOOL)arg2 ;
-(void)setMaxRemoteBuildNumber:(NSString *)arg1 ;
-(void)setAssetResults:(NSArray *)arg1 ;
-(void)prepareFirmwareWithOptions:(id)arg1 ;
-(void)applyFirmwareWithOptions:(id)arg1 ;
-(void)downloadFirmwareWithOptions:(id)arg1 ;
-(NSArray *)assetResults;
-(NSString *)boardID;
-(NSString *)chipID;
-(void)setBoardID:(NSString *)arg1 ;
-(void)setChipID:(NSString *)arg1 ;
-(NSMutableDictionary *)outOptions;
-(void)deviceError:(int)arg1 ;
-(void)cleanupAssets;
-(void)setFirmwareAsset:(ASAsset *)arg1 ;
-(BOOL)findLocalAsset;
-(ASAsset *)firmwareAsset;
-(id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id*)arg3 options:(id)arg4 ;
-(void)setAPFusingsWithChipID:(unsigned)arg1 boardID:(unsigned)arg2 productionFused:(BOOL)arg3 ;
-(void)runQuery:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)maxLocalBuildNumber;
-(void)notifyUserWithMessage:(id)arg1 title:(id)arg2 ;
-(void)doBootstrapWithOptions:(id)arg1 ;
-(void)setOutOptions:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(NSString *)bundlePath;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)queryComplete:(id)arg1 remote:(BOOL)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)filterFoundAssets:(id)arg1 ;
-(BOOL)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3 ;
-(NSString *)bootArgs;
-(NSString *)variant;
@end

