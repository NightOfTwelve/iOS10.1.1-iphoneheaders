/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLoadable.h>
#import <OpusOrigamiProducer/MRRenderable.h>
#import <OpusOrigamiProducer/MRAssetPlayerDelegate.h>

@class NSString, NSDictionary, NSInvocationOperation, NSLock, MRFrame, MRImage, MRLayerEffect, MRAssetPlayer, MRLayer, MRAudioDucker, MCSlide, MCAnimationPathKeyframed;

@interface MRSlideProvider : NSObject <MRLoadable, MRRenderable, MRAssetPlayerDelegate> {

	CGSize mDefaultSize;
	float mStillTime;
	NSString* mImageSizeScript;
	NSDictionary* mEffectAttributes;
	NSString* mShowTimeScript;
	NSInvocationOperation* mPreloadOperation;
	NSLock* mPreloadOperationLock;
	MRFrame* mFrame;
	MRImage* mOriginalImage;
	MRImage* mOutputImage;
	CGSize mRequestedSize;
	MRLayerEffect* mEffectLayer;
	int mKenBurnsType;
	MRAssetPlayer* mSlidePlayer;
	MRLayer* mSlideLayer;
	unsigned long long mSlideIndex;
	CGSize mImageSize;
	CGSize mLastImageSize;
	double mLastTime;
	CGSize mLastDaSize;
	CGSize mSizeFactor;
	unsigned mFlags;
	double _centerAnimationPathTriggerTime;
	double _scaleAnimationPathTriggerTime;
	double _rotationAnimationPathTriggerTime;
	double _timeToPreloadFor;
	MRAudioDucker* _audioDucker;
	int mDefaultKenBurnsType;
	double _showTime;
	double _showDuration;
	MCSlide* _slide;
	double mOriginalImageAspectRatio;
	double _slideStartTime;
	double _slideDuration;
	NSString* _assetPath;
	double _scale;
	double _rotation;
	MCAnimationPathKeyframed* _centerAnimationPath;
	MCAnimationPathKeyframed* _scaleAnimationPath;
	MCAnimationPathKeyframed* _rotationAnimationPath;
	NSString* _filterID;
	id _playerHint;
	CGPoint _center;

}

@property (assign,nonatomic) CGSize defaultSize; 
@property (assign,nonatomic) BOOL wantsMonochromatic; 
@property (assign,nonatomic) BOOL wantsMipmap; 
@property (assign,nonatomic) BOOL isStill; 
@property (assign,nonatomic) float stillTime; 
@property (nonatomic,copy) NSString * imageSizeScript; 
@property (nonatomic,retain) NSDictionary * effectAttributes; 
@property (nonatomic,copy) NSString * showTimeScript; 
@property (assign,nonatomic) BOOL slideIsReadonly; 
@property (assign,nonatomic) BOOL isMuted; 
@property (readonly) BOOL hasFilters; 
@property (assign,nonatomic) double showTime;                                               //@synthesize showTime=_showTime - In the implementation block
@property (assign,nonatomic) double showDuration;                                           //@synthesize showDuration=_showDuration - In the implementation block
@property (readonly) BOOL canPlay; 
@property (assign,nonatomic) BOOL isPlaying; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) CGSize sizeFactor; 
@property (assign) int defaultKenBurnsType; 
@property (nonatomic,retain) MCSlide * slide;                                               //@synthesize slide=_slide - In the implementation block
@property (nonatomic,copy) NSString * assetPath;                                            //@synthesize assetPath=_assetPath - In the implementation block
@property (assign,nonatomic) CGPoint center;                                                //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double scale;                                                  //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotation;                                               //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,retain) MCAnimationPathKeyframed * centerAnimationPath;                //@synthesize centerAnimationPath=_centerAnimationPath - In the implementation block
@property (nonatomic,retain) MCAnimationPathKeyframed * scaleAnimationPath;                 //@synthesize scaleAnimationPath=_scaleAnimationPath - In the implementation block
@property (nonatomic,retain) MCAnimationPathKeyframed * rotationAnimationPath;              //@synthesize rotationAnimationPath=_rotationAnimationPath - In the implementation block
@property (nonatomic,copy) NSString * filterID;                                             //@synthesize filterID=_filterID - In the implementation block
@property (assign,nonatomic) BOOL needsToUpdateLayout; 
@property (readonly) MRFrame * frame; 
@property (readonly) CGSize requestedSize; 
@property (readonly) double imageAspectRatio; 
@property (readonly) double slideStartTime;                                                 //@synthesize slideStartTime=_slideStartTime - In the implementation block
@property (readonly) double slideDuration;                                                  //@synthesize slideDuration=_slideDuration - In the implementation block
@property (readonly) BOOL isLoaded; 
@property (assign) id playerHint;                                                           //@synthesize playerHint=_playerHint - In the implementation block
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowDuration:(double)arg1 ;
-(void)setSlide:(MCSlide *)arg1 ;
-(MCAnimationPathKeyframed *)scaleAnimationPath;
-(MCAnimationPathKeyframed *)centerAnimationPath;
-(void)setStillTime:(float)arg1 ;
-(CGSize)unframedImageSizeForAspectRatio:(float)arg1 frameID:(id)arg2 andFrameAttributes:(id)arg3 atIndex:(unsigned)arg4 framedImageSize:(CGSize*)arg5 ;
-(CGSize)framedImageSizeAtIndex:(unsigned)arg1 aspectRatio:(float)arg2 ;
-(void)setWantsMipmap:(BOOL)arg1 ;
-(BOOL)hasFilters;
-(BOOL)isNative3D;
-(int)defaultKenBurnsType;
-(void)_computeImageSizeInContext:(id)arg1 withArguments:(id)arg2 ;
-(BOOL)isAlphaFriendly;
-(void)imageIsAvailableFromAssetPlayer:(id)arg1 ;
-(double)showTime;
-(void)applyKenBurnsAtTime:(double)arg1 withTargetSize:(CGSize)arg2 kenBurnsType:(int)arg3 translation:(CGPoint*)arg4 scale:(double*)arg5 rotation:(double*)arg6 ;
-(BOOL)wantsMipmap;
-(NSString *)imageSizeScript;
-(BOOL)isStill;
-(double)showDuration;
-(float)stillTime;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(NSString *)showTimeScript;
-(void)setIsStill:(BOOL)arg1 ;
-(void)setShowTime:(double)arg1 ;
-(void)setPlayerHint:(id)arg1 ;
-(void)setDefaultSize:(CGSize)arg1 ;
-(BOOL)endLiveUpdate;
-(void)loadWithArguments:(id)arg1 ;
-(void)updateShowTimeAndDurationWithPlugTiming:(id)arg1 andAttributes:(id)arg2 ;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(BOOL)updateStuffWithAssetManager:(id)arg1 ;
-(void)setImageSizeScript:(NSString *)arg1 ;
-(void)setWantsMonochromatic:(BOOL)arg1 ;
-(void)setScaleAnimationPath:(MCAnimationPathKeyframed *)arg1 ;
-(void)setShowTimeScript:(NSString *)arg1 ;
-(id)initWithEffectLayer:(id)arg1 ;
-(void)setRotationAnimationPath:(MCAnimationPathKeyframed *)arg1 ;
-(BOOL)wantsMonochromatic;
-(id)currentSlideInfo;
-(void)setDefaultKenBurnsType:(int)arg1 ;
-(void)setSlideIsReadonly:(BOOL)arg1 ;
-(void)setCenterAnimationPath:(MCAnimationPathKeyframed *)arg1 ;
-(void)_unloadIfNotUpdatingLive;
-(void)setNeedsToUpdateLayout:(BOOL)arg1 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(id)playerHint;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(NSDictionary *)effectAttributes;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)beginLiveUpdate;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(MCAnimationPathKeyframed *)rotationAnimationPath;
-(BOOL)needsToUpdateLayout;
-(BOOL)slideIsReadonly;
-(double)slideStartTime;
-(double)slideDuration;
-(void)printFlags;
-(void)dealloc;
-(CGSize)defaultSize;
-(MRFrame *)frame;
-(void)setScale:(double)arg1 ;
-(CGPoint)center;
-(double)scale;
-(void)setCenter:(CGPoint)arg1 ;
-(BOOL)isOpaque;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(BOOL)isLoaded;
-(void)cleanup;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setIsPlaying:(BOOL)arg1 ;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
-(BOOL)isMuted;
-(BOOL)isInfinite;
-(double)imageAspectRatio;
-(CGSize)requestedSize;
-(BOOL)canPlay;
-(CGSize)sizeFactor;
-(void)setSizeFactor:(CGSize)arg1 ;
-(NSString *)assetPath;
-(void)setAssetPath:(NSString *)arg1 ;
-(void)unload;
-(MCSlide *)slide;
-(void)setIsMuted:(BOOL)arg1 ;
-(void)cancelLoading;
@end

