/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetLabelViewProxyExports.h>

@interface OKWidgetLabelViewProxy : OKWidgetView <OKWidgetLabelViewProxyExports> {

	id _label;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)label;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(id)layoutSettingsKeys;
-(id)settingFontName;
-(void)setSettingFontName:(id)arg1 ;
-(float)settingFontSize;
-(void)setSettingFontSize:(float)arg1 ;
-(id)settingTextColor;
-(void)setSettingTextColor:(id)arg1 ;
-(void)setSettingTextBackgroundColor:(id)arg1 ;
-(long long)settingTextAlignment;
-(void)setSettingTextAlignment:(long long)arg1 ;
-(id)settingText;
-(void)setSettingText:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
@end
