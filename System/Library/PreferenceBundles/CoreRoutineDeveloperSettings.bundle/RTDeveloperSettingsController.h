/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineDeveloperSettings.bundle/CoreRoutineDeveloperSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString, RTDefaultsManager, RTKeybagMonitor, NSSet;

@interface RTDeveloperSettingsController : PSListController {

	NSString* _bundleIdentifier;
	RTDefaultsManager* _defaultsManager;
	RTKeybagMonitor* _keybagMonitor;
	NSSet* _bundleIdentifierWhitelist;

}
-(void)presentErrorSimulatingPriming:(id)arg1 ;
-(id)initWithKeybagMonitor:(id)arg1 defaultsManager:(id)arg2 ;
-(id)getBundleIdentifier:(id)arg1 ;
-(void)onPredictBundleSpecifier:(id)arg1 ;
-(void)setBundleIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)returnPressedAtEnd;
-(id)specifiers;
@end

