/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SKUIFloatingOverlayView : UIView {

	UIEdgeInsets _contentInset;
	UIView* _contentView;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) UIView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
@end

