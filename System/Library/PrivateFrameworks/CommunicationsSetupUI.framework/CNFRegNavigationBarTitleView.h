/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIView.h>

@class UINavigationItem, UILabel, UIActivityIndicatorView;

@interface CNFRegNavigationBarTitleView : UIView {

	UINavigationItem* _item;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (assign,nonatomic) UINavigationItem * item;              //@synthesize item=_item - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UINavigationItem *)item;
-(id)initWithNavigationItem:(id)arg1 ;
-(id)_defaultFont;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(void)setItem:(UINavigationItem *)arg1 ;
-(void)_updateTitleLabel;
-(id)_titleTextColorForBarStyle:(long long)arg1 ;
@end
