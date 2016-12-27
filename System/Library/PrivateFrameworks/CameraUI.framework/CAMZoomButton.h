/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol CAMZoomButtonDelegate;
@class UIView, UILabel, UIImageView;

@interface CAMZoomButton : UIControl {

	id<CAMZoomButtonDelegate> _delegate;
	double _zoomFactor;
	long long _orientation;
	UIView* __contentContainerView;
	UILabel* __zoomFactorLabel;
	UIImageView* __circleImageView;
	UIImageView* __backgroundImageView;
	UIEdgeInsets _tappableEdgeInsets;
	CGAffineTransform _highlightingTransform;

}

@property (nonatomic,readonly) UIView * _contentContainerView;                                                       //@synthesize _contentContainerView=__contentContainerView - In the implementation block
@property (nonatomic,readonly) UILabel * _zoomFactorLabel;                                                           //@synthesize _zoomFactorLabel=__zoomFactorLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * _circleImageView;                                                       //@synthesize _circleImageView=__circleImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _backgroundImageView;                                                   //@synthesize _backgroundImageView=__backgroundImageView - In the implementation block
@property (assign,setter=_setHighlightingTransform:,nonatomic) CGAffineTransform highlightingTransform;              //@synthesize highlightingTransform=_highlightingTransform - In the implementation block
@property (assign,nonatomic,__weak) id<CAMZoomButtonDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                                                      //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                                        //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                  //@synthesize orientation=_orientation - In the implementation block
+(id)textForZoomFactor:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAMZoomButtonDelegate>)arg1 ;
-(id<CAMZoomButtonDelegate>)delegate;
-(void)setOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(UIEdgeInsets)alignmentRectInsets;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGAffineTransform)highlightingTransform;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)_performHighlightAnimation;
-(void)_updateZoomFactorLabel;
-(void)_commonCAMZoomButtonInitialization;
-(UIImageView *)_circleImageView;
-(UIView *)_contentContainerView;
-(UILabel *)_zoomFactorLabel;
-(void)_setHighlightingTransform:(CGAffineTransform)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(UIImageView *)_backgroundImageView;
@end
