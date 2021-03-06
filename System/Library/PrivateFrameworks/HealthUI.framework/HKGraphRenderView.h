/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/HKGraphRenderer.h>

@protocol HKGraphRenderDelegate;
@class NSString;

@interface HKGraphRenderView : UIView <HKGraphRenderer> {

	id<HKGraphRenderDelegate> renderDelegate;
	CGRect _axisRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect axisRect;                                              //@synthesize axisRect=_axisRect - In the implementation block
@property (assign,nonatomic,__weak) id<HKGraphRenderDelegate> renderDelegate; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRenderDelegate:(id<HKGraphRenderDelegate>)arg1 ;
-(id<HKGraphRenderDelegate>)renderDelegate;
-(void)setNeedsRender;
-(void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(BOOL)arg5 clipToAxes:(BOOL)arg6 ;
-(void)fillRect:(CGRect)arg1 withTexture:(id)arg2 ;
-(void)drawText:(id)arg1 atPoint:(CGPoint)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 textColor:(id)arg5 font:(id)arg6 clipToAxis:(BOOL)arg7 ;
-(CGRect)axisRect;
-(void)setAxisRect:(CGRect)arg1 ;
@end

