/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIColor, UIFont, NSString;

@interface VibrantLabelView : UIView {

	UILabel* _overlayLabel;
	UILabel* _label;
	BOOL _usesVibrantEffect;
	UIColor* _nonVibrantColor;
	UIFont* _font;
	NSString* _text;
	long long _numberOfLines;
	long long _textAlignment;

}

@property (assign,nonatomic) BOOL usesVibrantEffect;                 //@synthesize usesVibrantEffect=_usesVibrantEffect - In the implementation block
@property (nonatomic,retain) UIColor * nonVibrantColor;              //@synthesize nonVibrantColor=_nonVibrantColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                //@synthesize textAlignment=_textAlignment - In the implementation block
-(void)setUsesVibrantEffect:(BOOL)arg1 ;
-(BOOL)usesVibrantEffect;
-(void)setNonVibrantColor:(UIColor *)arg1 ;
-(UIColor *)nonVibrantColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIFont *)font;
-(long long)textAlignment;
-(long long)numberOfLines;
@end

