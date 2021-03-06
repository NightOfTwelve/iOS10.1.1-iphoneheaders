/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentPreferenceCell.h>

@class UIButton, NSString;

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {

	UIButton* _button;
	/*^block*/id _handler;
	NSString* _buttonTitle;

}

@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;              //@synthesize buttonTitle=_buttonTitle - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(void)buttonTapped:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)pk_childrenForAppearance;
@end

