/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSRecursiveLock, MCPlug, NSString, NSArray;

@interface MCMontage : NSObject {

	NSDictionary* mImprintWhileLoading;
	NSMutableDictionary* mVideoAssetsForFilePaths;
	NSMutableDictionary* mVideoAssetsForObjectIDs;
	NSMutableDictionary* mAudioAssetsForFilePaths;
	NSMutableDictionary* mAudioAssetsForObjectIDs;
	NSMutableDictionary* mContainersForObjectIDs;
	NSRecursiveLock* mLock;
	unsigned char _styleHint;
	MCPlug* mRootPlug;
	double mFadeInDuration;
	double mFadeOutDuration;
	double mAudioFadeOutDuration;
	NSString* mBasePath;
	unsigned long long mUUIDSeed;
	NSArray* mLayouts;

}

@property (nonatomic,readonly) MCPlug * rootPlug; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (copy) NSString * basePath; 
@property (nonatomic,readonly) unsigned long long uuidSeed; 
@property (retain) NSArray * layouts; 
@property (assign,nonatomic) unsigned char styleHint;                    //@synthesize styleHint=_styleHint - In the implementation block
-(unsigned char)styleHint;
-(MCPlug *)rootPlug;
-(unsigned long long)uuidSeed;
-(void)registerContainer:(id)arg1 ;
-(id)assetForObjectID:(id)arg1 ;
-(id)videoAssetForFileAtPath:(id)arg1 ;
-(id)createSerializerContainer;
-(void)forgetAboutContainer:(id)arg1 ;
-(id)createEffectContainer;
-(id)createNavigatorContainer;
-(id)audioAssetForFileAtPath:(id)arg1 ;
-(id)initFromScratch;
-(void)demolish;
-(id)videoAssetForObjectID:(id)arg1 ;
-(id)createParallelizerContainer;
-(id)audioAssetForObjectID:(id)arg1 ;
-(id)containerForObjectID:(id)arg1 ;
-(id)audioAssets;
-(void)setStyleHint:(unsigned char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)data;
-(void)lock;
-(void)unlock;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setLayouts:(NSArray *)arg1 ;
-(NSArray *)layouts;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)assets;
-(id)videoAssets;
-(void)setBasePath:(NSString *)arg1 ;
-(NSString *)basePath;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(double)audioFadeOutDuration;
-(id)imprint;
@end

