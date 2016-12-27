/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface SKUIAnalyzedImageColors : NSObject {

	BOOL _isBackgroundLight;
	UIColor* _backgroundColor;
	UIColor* _textPrimaryColor;
	UIColor* _textSecondaryColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textPrimaryColor;                //@synthesize textPrimaryColor=_textPrimaryColor - In the implementation block
@property (nonatomic,retain) UIColor * textSecondaryColor;              //@synthesize textSecondaryColor=_textSecondaryColor - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundLight;                    //@synthesize isBackgroundLight=_isBackgroundLight - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)textPrimaryColor;
-(UIColor *)textSecondaryColor;
-(BOOL)isBackgroundLight;
-(void)setTextPrimaryColor:(UIColor *)arg1 ;
-(void)setTextSecondaryColor:(UIColor *)arg1 ;
-(void)setIsBackgroundLight:(BOOL)arg1 ;
@end
