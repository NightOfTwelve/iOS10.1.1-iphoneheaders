/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _SFBrowserWindowSettings : NSObject {

	NSMutableDictionary* _settingsDictionary;

}

@property (nonatomic,readonly) BOOL hasPrivateBrowsingWindow; 
+(id)settings;
+(void)setSharedSettings:(id)arg1 ;
-(id)init;
-(void)synchronize;
-(BOOL)hasPrivateBrowsingWindow;
-(void)_initializeSettingsDictionaryIfNeeded;
-(id)_numberForKey:(id)arg1 windowUUID:(id)arg2 ;
-(BOOL)_boolValueForKey:(id)arg1 windowUUID:(id)arg2 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 windowUUID:(id)arg3 ;
-(void)validateWindowSettingsWithUUIDs:(id)arg1 ;
-(BOOL)privateBrowsingEnabledForWindowWithUUID:(id)arg1 ;
-(void)setPrivateBrowsingEnabled:(BOOL)arg1 forWindowWithUUID:(id)arg2 ;
-(BOOL)activeDocumentIsValidForWindowWithUUID:(id)arg1 ;
-(void)setActiveDocumentIsValid:(BOOL)arg1 forWindowWithUUID:(id)arg2 ;
-(BOOL)isShowingTabViewForWindowWithUUID:(id)arg1 ;
-(void)setIsShowingTabView:(BOOL)arg1 forWindowWithUUID:(id)arg2 ;
-(void)removeWindowWithUUID:(id)arg1 ;
@end
