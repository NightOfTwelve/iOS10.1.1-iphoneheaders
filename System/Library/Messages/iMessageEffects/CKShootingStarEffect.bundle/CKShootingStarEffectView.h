/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageEffects/CKShootingStarEffect.bundle/CKShootingStarEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CKShootingStarEffect/CKShootingStarEffect-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <CKShootingStarEffect/CKFullscreenEffectView.h>

@class CALayer, CAEmitterBehavior, CAEmitterLayer, NSString;

@interface CKShootingStarEffectView : UIView <CAAnimationDelegate, CKFullscreenEffectView> {

	CALayer* _shootingStarLayer;
	long long zIndex;
	CAEmitterBehavior* _lensBurst;
	CAEmitterLayer* _lensEmitter;
	CGPoint focusPoint;

}

@property (nonatomic,retain) CAEmitterBehavior * lensBurst;              //@synthesize lensBurst=_lensBurst - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * lensEmitter;               //@synthesize lensEmitter=_lensEmitter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long zIndex; 
@property (assign,nonatomic) CGPoint focusPoint; 
-(void)setLensBurst:(CAEmitterBehavior *)arg1 ;
-(void)setLensEmitter:(CAEmitterLayer *)arg1 ;
-(CAEmitterBehavior *)lensBurst;
-(CAEmitterLayer *)lensEmitter;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setZIndex:(long long)arg1 ;
-(long long)zIndex;
-(CGPoint)focusPoint;
-(void)setFocusPoint:(CGPoint)arg1 ;
@end
