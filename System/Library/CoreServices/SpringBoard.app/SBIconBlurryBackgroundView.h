/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBIconWallpaperBackgroundClient.h>

@protocol SBIconBlurryBackgroundViewObserver;
@class NSString;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperBackgroundClient> {

	CGRect _wallpaperRelativeBounds;
	BOOL _isBlurring;
	BOOL _suppressesExternalUpdates;
	id<SBIconBlurryBackgroundViewObserver> _observer;
	/*^block*/id _wantsBlurEvaluator;
	CGPoint _wallpaperRelativeCenter;

}

@property (assign,nonatomic,__weak) id<SBIconBlurryBackgroundViewObserver> observer;                          //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeCenter;                                                 //@synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter - In the implementation block
@property (nonatomic,readonly) BOOL isBlurring;                                                               //@synthesize isBlurring=_isBlurring - In the implementation block
@property (nonatomic,copy) id wantsBlurEvaluator;                                                             //@synthesize wantsBlurEvaluator=_wantsBlurEvaluator - In the implementation block
@property (assign,getter=isSuppressingExternalUpdates,nonatomic) BOOL suppressesExternalUpdates;              //@synthesize suppressesExternalUpdates=_suppressesExternalUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setSuppressesExternalUpdates:(BOOL)arg1 ;
-(void)setWantsBlurEvaluator:(id)arg1 ;
-(CGRect)wallpaperRelativeBounds;
-(BOOL)wantsBlur:(id)arg1 ;
-(void)setWallpaperBackgroundRect:(CGRect)arg1 forContents:(CGImageRef)arg2 withFallbackColor:(CGColorRef)arg3 ;
-(void)setBlurring:(BOOL)arg1 ;
-(BOOL)isBlurring;
-(CGPoint)wallpaperRelativeCenter;
-(id)wantsBlurEvaluator;
-(BOOL)isSuppressingExternalUpdates;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setObserver:(id<SBIconBlurryBackgroundViewObserver>)arg1 ;
-(id<SBIconBlurryBackgroundViewObserver>)observer;
@end

