/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedUnlockSettings/PairedUnlockSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <PairedUnlockSettings/PUConnectionDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <PairedUnlockSettings/PUSRemotePasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class UIAlertView, NPSManager, PUConnection, NSString;

@interface PUSPasscodeSettingsListController : PSListController <PUConnectionDelegate, UIAlertViewDelegate, PUSRemotePasscodeViewControllerDelegate, MCProfileConnectionObserver> {

	UIAlertView* _awaitingUnlockAlertView;
	long long _pendingAction;
	NPSManager* _syncManager;
	BOOL _wantsSimplePasscode;
	BOOL _justChangedWantsSimplePasscode;
	MKBAssertionRef _unlockPairingAssertion;
	BOOL _gizmoHasPasscodeSet;
	BOOL _gizmoHasPaymentPasses;
	BOOL _devicesArePairedForUnlocking;
	BOOL _gizmoIsLocked;
	BOOL _gizmoIsUnlockOnly;
	BOOL _gizmoIsInLockout;
	int _activityFlags;
	/*^block*/id _checkGizmoUnlockedCompletionHandler;
	PUConnection* _connection;

}

@property (assign,nonatomic) BOOL gizmoHasPasscodeSet;                          //@synthesize gizmoHasPasscodeSet=_gizmoHasPasscodeSet - In the implementation block
@property (assign,nonatomic) BOOL gizmoHasPaymentPasses;                        //@synthesize gizmoHasPaymentPasses=_gizmoHasPaymentPasses - In the implementation block
@property (assign,nonatomic) BOOL devicesArePairedForUnlocking;                 //@synthesize devicesArePairedForUnlocking=_devicesArePairedForUnlocking - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsLocked;                                //@synthesize gizmoIsLocked=_gizmoIsLocked - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsUnlockOnly;                            //@synthesize gizmoIsUnlockOnly=_gizmoIsUnlockOnly - In the implementation block
@property (assign,nonatomic) BOOL gizmoIsInLockout;                             //@synthesize gizmoIsInLockout=_gizmoIsInLockout - In the implementation block
@property (nonatomic,copy) id checkGizmoUnlockedCompletionHandler;              //@synthesize checkGizmoUnlockedCompletionHandler=_checkGizmoUnlockedCompletionHandler - In the implementation block
@property (nonatomic,readonly) PUConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int activityFlags;                                 //@synthesize activityFlags=_activityFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gizmoHasPasscodeSet;
-(void)_finishRemoteAction;
-(void)confirmDisablePasscode:(id)arg1 ;
-(void)setGizmoIsLocked:(BOOL)arg1 ;
-(void)_removeActivityFlag:(int)arg1 ;
-(BOOL)gizmoIsInLockout;
-(void)setGizmoIsInLockout:(BOOL)arg1 ;
-(void)_checkGizmoLockState;
-(void)_enableAutoUnlockConfirmed:(id)arg1 ;
-(void)setAutoUnlockEnabledValue:(id)arg1 ;
-(id)eraseDataEnabledValue;
-(void)_cancelRemoteAction;
-(void)setGizmoIsUnlockOnly:(BOOL)arg1 ;
-(void)setGizmoHasPaymentPasses:(BOOL)arg1 ;
-(void)_updateSimplePasscodeState;
-(void)_promptForGizmoUnlock;
-(void)_startRemoteAction:(long long)arg1 ;
-(void)setSimplePasscodeEnabledValue:(id)arg1 ;
-(void)_updateUnlockState;
-(void)_addActivityFlag:(int)arg1 ;
-(BOOL)gizmoHasPaymentPasses;
-(BOOL)gizmoIsUnlockOnly;
-(void)setEraseDataEnabledValue:(id)arg1 ;
-(BOOL)devicesArePairedForUnlocking;
-(void)_checkHasPaymentPasses;
-(void)_enableAutoUnlockCanceled:(id)arg1 ;
-(void)setActivityFlags:(int)arg1 ;
-(void)_updateLockoutState;
-(void)setDevicesArePairedForUnlocking:(BOOL)arg1 ;
-(void)setGizmoHasPasscodeSet:(BOOL)arg1 ;
-(id)checkGizmoUnlockedCompletionHandler;
-(BOOL)gizmoIsLocked;
-(void)confirmRemoveLocallyStoredValueAndDisablePasscode;
-(void)_resetSimplePasscodeChangeIfNeeded;
-(void)reloadUI;
-(void)remotePasscodeViewControllerDidCancel:(id)arg1 ;
-(void)_storeAndSyncSimplePasscodeEnabled:(BOOL)arg1 ;
-(int)activityFlags;
-(void)changePasscode;
-(void)setCheckGizmoUnlockedCompletionHandler:(id)arg1 ;
-(void)endLockout:(id)arg1 ;
-(id)simplePasscodeEnabledValue;
-(void)_noteAppWillResignActive;
-(id)autoUnlockEnabledValue;
-(id)init;
-(void)dealloc;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(PUConnection *)connection;
-(void)_handleError:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)unlockConnection:(id)arg1 remoteDeviceDidCompletePasscodeAction:(BOOL)arg2 error:(id)arg3 ;
-(void)unlockConnection:(id)arg1 remoteDeviceDidNotifyStateHasPasscode:(BOOL)arg2 isPasscodeLocked:(BOOL)arg3 isUnlockOnly:(BOOL)arg4 ;
-(void)togglePasscode:(id)arg1 ;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
@end
