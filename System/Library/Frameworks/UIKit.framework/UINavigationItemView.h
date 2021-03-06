/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UINavigationItem, UIView, UILabel;

@interface UINavigationItemView : UIView {

	UINavigationItem* _item;
	CGSize _titleSize;
	UIView* _topCrossView;
	UIView* _bottomCrossView;
	BOOL _isCrossFading;
	BOOL _customFontSet;
	UILabel* _label;
	BOOL _isFadingInFromCustomAlpha;

}

@property (assign,setter=_setFadingInFromCustomAlpha:,nonatomic) BOOL _isFadingInFromCustomAlpha;              //@synthesize isFadingInFromCustomAlpha=_isFadingInFromCustomAlpha - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)description;
-(id)navigationItem;
-(id)title;
-(void)setFont:(id)arg1 ;
-(void)_resetTitleSize;
-(void)_setLineBreakMode:(long long)arg1 ;
-(id)initWithNavigationItem:(id)arg1 ;
-(BOOL)titleAutoresizesToFit;
-(void)setTitleAutoresizesToFit:(BOOL)arg1 ;
-(void)_updateLabelColor;
-(void)_prepareCrossViewsForNewSize:(CGSize)arg1 ;
-(void)_crossFadeHiddingButton:(BOOL)arg1 ;
-(void)_cleanUpCrossView;
-(CGSize)_titleSize;
-(void)_setFadingInFromCustomAlpha:(BOOL)arg1 ;
-(id)_defaultFont;
-(void)_setFont:(id)arg1 ;
-(CGRect)_labelFrame;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(id)font;
-(double)_titleYAdjustmentCustomization;
-(void)_updateLabel;
-(void)_updateLabelContents;
-(void)_adjustLabelTrackingIfNecessary;
-(BOOL)_isFadingInFromCustomAlpha;
@end

