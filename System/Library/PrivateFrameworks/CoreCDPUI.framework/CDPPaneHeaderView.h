/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <UIKit/UIView.h>

@class BFFPaneHeaderView, UILabel, UIView;

@interface CDPPaneHeaderView : UIView {

	BFFPaneHeaderView* _header;

}

@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * subLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * _header; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setTitleText:(id)arg1 ;
-(double)innerHeaderMaxY;
-(UILabel *)subLabel;
-(UIView *)_header;
@end

