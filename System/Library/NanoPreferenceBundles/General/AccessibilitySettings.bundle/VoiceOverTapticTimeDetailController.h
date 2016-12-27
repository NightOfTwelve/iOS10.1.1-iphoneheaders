/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor, PSSpecifier;

@interface VoiceOverTapticTimeDetailController : PSListController {

	NPSDomainAccessor* _domainAccessor;
	PSSpecifier* _encodingGroupSpecifier;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) PSSpecifier * encodingGroupSpecifier;              //@synthesize encodingGroupSpecifier=_encodingGroupSpecifier - In the implementation block
-(void)_updateEncodingFooter;
-(id)tapticTimeEnabled:(id)arg1 ;
-(void)setTapticTimeEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)updateTableCheckedSelection:(id)arg1 ;
-(void)setEncodingGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setGizmoPref:(id)arg1 forKey:(id)arg2 ;
-(PSSpecifier *)encodingGroupSpecifier;
-(void)_previewHaptic:(id)arg1 ;
-(long long)_selectedEncoding;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)specifiers;
@end
