/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMailBridgeSettings.bundle/NanoMailBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class NSArray;

@interface MFNanoBridgeSettingsListController : BPSNotificationAppController {

	NSArray* _subsectionSpecifiers;

}
-(id)_accountNamesKeyedByAccountId;
-(id)_signature:(id)arg1 ;
-(id)_linesOfPreview:(id)arg1 ;
-(void)saveShowAlertsForSpecifier:(id)arg1 ;
-(id)_askBeforeDeleting:(id)arg1 ;
-(id)_linesOfPreviewValues;
-(id)_linesOfPreviewTitlesDictionary;
-(void)_setLinesOfPreview:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setAskBeforeDeleting:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_showAlertsFrom:(id)arg1 ;
-(id)_mirroringDetailStringForAlerts;
-(void)_setFlagStyle:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_includeMail:(id)arg1 ;
-(void)_setShowAlertsFrom:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setUpMail;
-(void)_setOrganizeByThread:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_mirroringDetailStringForNotificationSources;
-(id)_mirroringDetailStringForFlagStyle;
-(id)_mirroringDetailStringForAskBeforeDeleting;
-(id)_mirroringDetailStringForOrganizeByThread;
-(id)_organizeByThread:(id)arg1 ;
-(BOOL)_needsSetUp;
-(void)_setIncludeMail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_flagTitlesDictionary;
-(id)_flagValues;
-(id)_flagStyle:(id)arg1 ;
-(id)init;
-(void)willBecomeActive;
-(BOOL)caresAboutSubsections;
-(id)notificationApplicationSpecifiers;
-(BOOL)suppressAllMirrorSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)mirroredApplicationGroupSpecifiers;
-(id)localizedPaneTitle;
-(void)mirrorSettingsChanged:(BOOL)arg1 ;
-(id)applicationBundleIdentifier;
-(void)_setSignature:(id)arg1 withSpecifier:(id)arg2 ;
@end
