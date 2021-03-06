/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <useractivityd/SFActivityScannerDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSMutableSet, NSDate, NSMutableDictionary, NSUserDefaults, NSObject, SharingBTLESuggestedItem, BluetoothManager, NSUUID, UAUserActivityInfo, NSArray, UASharedPasteboardClientController, UAPingController, NSMutableArray, UADispatchScheduler, UATimedPowerAssertions, PowerManagerIdleTracker, ActivityManagerDebuggingManager, UAPingResults, NSTimer, NSSet, NSString;

@interface UACornerActionManager : NSObject <NSXPCListenerDelegate, SFActivityScannerDelegate> {

	BOOL _suspended;
	NSMutableSet* _advertisers;
	NSMutableSet* _receivers;
	NSMutableSet* _clients;
	NSMutableSet* _notifiers;
	NSMutableSet* _handlers;
	NSDate* _creationTime;
	NSMutableDictionary* _advertiseableItemsByUUID;
	NSMutableSet* _activeDevicesIdentifiers;
	NSMutableSet* _bestAppChangeNotificationsSet;
	NSUserDefaults* _userDefaults;
	int _managedSettingsChangedNotificationToken;
	NSObject*<OS_dispatch_group> _helpersDispatchGroup;
	double _systemIdlePreviousTimeSinceLastUserActivity;
	BOOL _systemHasSuspendedAdvertisements;
	BOOL _isBluetoothEnabled;
	BOOL _advertisingSuspended;
	BOOL _backlightOn;
	BOOL _batterySaverModeEnabled;
	BOOL _receivingSuspended;
	BOOL _idleActivityNotificationHasBeenSuspended;
	BOOL _screenSaverActive;
	BOOL _deviceUILocked;
	BOOL _screenDimmed;
	BOOL _userIsActive;
	BOOL _systemIsIdle;
	BOOL _pingMode;
	int _backlightLevelToken;
	unsigned _holdPowerAssertion;
	int _systemPreferenceChangedToken;
	int _uiLockStatusToken;
	SharingBTLESuggestedItem* _lastReceivedAdvertisementItem;
	NSMutableDictionary* _devicesAndActivityTimes;
	BluetoothManager* bluetoothManager;
	NSUUID* _uuid;
	UAUserActivityInfo* _pinnedUserActivityInfoItem;
	NSArray* _screenDimmedPinnedItems;
	double _currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow;
	UASharedPasteboardClientController* _pasteboardController;
	UAPingController* _pingController;
	NSObject*<OS_dispatch_queue> _mainDispatchQ;
	NSMutableArray* _advertisementTimes;
	UADispatchScheduler* _nextUserIdleDeterminationScheduler;
	UADispatchScheduler* _nextUpdateAdvertisedItemsScheduler;
	UADispatchScheduler* _nextScheduleBestAppDeterminationScheduler;
	UATimedPowerAssertions* _screenSaverActivePowerAssertion;
	UATimedPowerAssertions* _deviceUILockedPowerAssertion;
	UATimedPowerAssertions* _screenDimmedPowerAssertion;
	NSDate* _holdPowerAssertionUntil;
	NSObject*<OS_dispatch_source> _holdPowerAssertionSourceTimer;
	PowerManagerIdleTracker* _userIdleTracker;
	ActivityManagerDebuggingManager* _debugManager;
	double _avgPingTime;
	NSDate* _pingStart;
	NSObject*<OS_dispatch_semaphore> _pongSem;
	UAPingResults* _pongs;
	NSTimer* _pongTimer;

}

@property (copy,readonly) NSMutableSet * bestAppChangeNotificationsSet; 
@property (retain) NSMutableArray * advertisementTimes;                                                   //@synthesize advertisementTimes=_advertisementTimes - In the implementation block
@property (retain,readonly) UADispatchScheduler * nextUserIdleDeterminationScheduler;                     //@synthesize nextUserIdleDeterminationScheduler=_nextUserIdleDeterminationScheduler - In the implementation block
@property (assign) BOOL idleActivityNotificationHasBeenSuspended;                                         //@synthesize idleActivityNotificationHasBeenSuspended=_idleActivityNotificationHasBeenSuspended - In the implementation block
@property (retain,readonly) UADispatchScheduler * nextUpdateAdvertisedItemsScheduler;                     //@synthesize nextUpdateAdvertisedItemsScheduler=_nextUpdateAdvertisedItemsScheduler - In the implementation block
@property (retain,readonly) UADispatchScheduler * nextScheduleBestAppDeterminationScheduler;              //@synthesize nextScheduleBestAppDeterminationScheduler=_nextScheduleBestAppDeterminationScheduler - In the implementation block
@property (assign) BOOL systemHasSuspendedAdvertisements; 
@property (assign) BOOL screenSaverActive;                                                                //@synthesize screenSaverActive=_screenSaverActive - In the implementation block
@property (retain) UATimedPowerAssertions * screenSaverActivePowerAssertion;                              //@synthesize screenSaverActivePowerAssertion=_screenSaverActivePowerAssertion - In the implementation block
@property (assign) BOOL deviceUILocked;                                                                   //@synthesize deviceUILocked=_deviceUILocked - In the implementation block
@property (retain) UATimedPowerAssertions * deviceUILockedPowerAssertion;                                 //@synthesize deviceUILockedPowerAssertion=_deviceUILockedPowerAssertion - In the implementation block
@property (assign) BOOL screenDimmed;                                                                     //@synthesize screenDimmed=_screenDimmed - In the implementation block
@property (retain) UATimedPowerAssertions * screenDimmedPowerAssertion;                                   //@synthesize screenDimmedPowerAssertion=_screenDimmedPowerAssertion - In the implementation block
@property (assign) int backlightLevelToken;                                                               //@synthesize backlightLevelToken=_backlightLevelToken - In the implementation block
@property (retain) NSDate * holdPowerAssertionUntil;                                                      //@synthesize holdPowerAssertionUntil=_holdPowerAssertionUntil - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> holdPowerAssertionSourceTimer;                           //@synthesize holdPowerAssertionSourceTimer=_holdPowerAssertionSourceTimer - In the implementation block
@property (assign) unsigned holdPowerAssertion;                                                           //@synthesize holdPowerAssertion=_holdPowerAssertion - In the implementation block
@property (retain) PowerManagerIdleTracker * userIdleTracker;                                             //@synthesize userIdleTracker=_userIdleTracker - In the implementation block
@property (assign) BOOL userIsActive;                                                                     //@synthesize userIsActive=_userIsActive - In the implementation block
@property (assign) BOOL systemIsIdle;                                                                     //@synthesize systemIsIdle=_systemIsIdle - In the implementation block
@property (retain,readonly) ActivityManagerDebuggingManager * debugManager;                               //@synthesize debugManager=_debugManager - In the implementation block
@property (retain) BluetoothManager * bluetoothManager; 
@property (assign) int systemPreferenceChangedToken;                                                      //@synthesize systemPreferenceChangedToken=_systemPreferenceChangedToken - In the implementation block
@property (assign) int uiLockStatusToken;                                                                 //@synthesize uiLockStatusToken=_uiLockStatusToken - In the implementation block
@property (retain) NSMutableDictionary * devicesAndActivityTimes;                                         //@synthesize devicesAndActivityTimes=_devicesAndActivityTimes - In the implementation block
@property (retain) SharingBTLESuggestedItem * lastReceivedAdvertisementItem;                              //@synthesize lastReceivedAdvertisementItem=_lastReceivedAdvertisementItem - In the implementation block
@property (assign) BOOL pingMode;                                                                         //@synthesize pingMode=_pingMode - In the implementation block
@property (assign) double avgPingTime;                                                                    //@synthesize avgPingTime=_avgPingTime - In the implementation block
@property (retain) NSDate * pingStart;                                                                    //@synthesize pingStart=_pingStart - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> pongSem;                                              //@synthesize pongSem=_pongSem - In the implementation block
@property (retain) UAPingResults * pongs;                                                                 //@synthesize pongs=_pongs - In the implementation block
@property (retain) NSTimer * pongTimer;                                                                   //@synthesize pongTimer=_pongTimer - In the implementation block
@property (copy,readonly) NSUUID * uuid;                                                                  //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSSet * activeDevicesIdentifiers; 
@property (retain,readonly) NSUserDefaults * userDefaults;                                                //@synthesize userDefaults=_userDefaults - In the implementation block
@property (getter=isBatterySaverModeEnabled,readonly) BOOL batterySaverModeEnabled;                       //@synthesize batterySaverModeEnabled=_batterySaverModeEnabled - In the implementation block
@property (retain) UAUserActivityInfo * pinnedUserActivityInfoItem;                                       //@synthesize pinnedUserActivityInfoItem=_pinnedUserActivityInfoItem - In the implementation block
@property (copy) NSArray * screenDimmedPinnedItems;                                                       //@synthesize screenDimmedPinnedItems=_screenDimmedPinnedItems - In the implementation block
@property (assign) double currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow;                 //@synthesize currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow=_currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow - In the implementation block
@property (getter=isBacklightOn) BOOL backlightOn;                                                        //@synthesize backlightOn=_backlightOn - In the implementation block
@property (readonly) BOOL activityAdvertisingAllowed; 
@property (readonly) BOOL activityReceivingAllowed; 
@property (assign) BOOL advertisingSuspended; 
@property (copy,readonly) NSSet * advertisers; 
@property (assign) BOOL receivingSuspended;                                                               //@synthesize receivingSuspended=_receivingSuspended - In the implementation block
@property (copy,readonly) NSSet * receivers; 
@property (copy,readonly) NSSet * clients; 
@property (copy,readonly) NSSet * notifiers; 
@property (copy,readonly) NSSet * handlers; 
@property (copy,readonly) NSSet * allHandlers; 
@property (retain) UASharedPasteboardClientController * pasteboardController;                             //@synthesize pasteboardController=_pasteboardController - In the implementation block
@property (retain) UAPingController * pingController;                                                     //@synthesize pingController=_pingController - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> mainDispatchQ;                                            //@synthesize mainDispatchQ=_mainDispatchQ - In the implementation block
@property (assign) BOOL suspended; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicationProxyForWebBrowserSupportingContinuation;
+(BOOL)applicationProxyWillLaunchWithSupportedArchitecture:(id)arg1 ;
+(id)cornerActionManager;
+(id)sharedActivityManagerServer;
+(BOOL)applicationProxyCanHandleWebBrowserContinuation:(id)arg1 ;
-(void)scheduleUpdatingAdvertisableItems;
-(BOOL)scheduleBestAppDetermination;
-(void)addActivityNotifier:(id)arg1 ;
-(void)removeActivityNotifier:(id)arg1 ;
-(void)triggerUserIdleDetermination;
-(id)cornerActionItems;
-(BOOL)activityReceivingAllowed;
-(id)cornerActionItemForUUID:(id)arg1 ;
-(void)addAdvertiser:(id)arg1 ;
-(void)addReceiver:(id)arg1 ;
-(void)setPasteboardController:(UASharedPasteboardClientController *)arg1 ;
-(UASharedPasteboardClientController *)pasteboardController;
-(void)setPingController:(UAPingController *)arg1 ;
-(void)removeReceiver:(id)arg1 ;
-(void)scheduleUpdatingAdvertisableItems:(double)arg1 ;
-(void)setMainDispatchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ActivityManagerDebuggingManager *)debugManager;
-(NSObject*<OS_dispatch_queue>)mainDispatchQ;
-(void)_determineWhenSystemGoesIdleThread;
-(void)_determineItemToAdvertiseForHandoffThread;
-(void)_checkIfBestApplicationChangedThread;
-(void)setDeviceUILocked:(BOOL)arg1 ;
-(void)setAdvertisementTimes:(NSMutableArray *)arg1 ;
-(void)setUserIsActive:(BOOL)arg1 ;
-(UADispatchScheduler *)nextUserIdleDeterminationScheduler;
-(void)setUserIdleTracker:(PowerManagerIdleTracker *)arg1 ;
-(NSSet *)advertisers;
-(UADispatchScheduler *)nextUpdateAdvertisedItemsScheduler;
-(id)advertiseableItems;
-(NSArray *)screenDimmedPinnedItems;
-(id)uaAdvertisableItemsInOrder;
-(void)setScreenSaverActivePowerAssertion:(UATimedPowerAssertions *)arg1 ;
-(void)setScreenSaverActive:(BOOL)arg1 ;
-(void)triggerAll;
-(BOOL)activityAdvertisingAllowed;
-(void)triggerUserIdleDetermination:(double)arg1 ;
-(PowerManagerIdleTracker *)userIdleTracker;
-(BOOL)screenDimmed;
-(BOOL)weHaveAtLeastOneItemToAdvertise;
-(void)setScreenDimmedPowerAssertion:(UATimedPowerAssertions *)arg1 ;
-(UATimedPowerAssertions *)screenDimmedPowerAssertion;
-(BOOL)screenSaverActive;
-(UATimedPowerAssertions *)screenSaverActivePowerAssertion;
-(BOOL)deviceUILocked;
-(UATimedPowerAssertions *)deviceUILockedPowerAssertion;
-(NSSet *)receivers;
-(BOOL)systemHasSuspendedAdvertisements;
-(double)determineNumberOfSecondsSystemHasBeenIdle;
-(void)setSystemHasSuspendedAdvertisements:(BOOL)arg1 ;
-(BOOL)haveBestAppChangeNotificationClients;
-(BOOL)scheduleBestAppDetermination:(double)arg1 ;
-(UADispatchScheduler *)nextScheduleBestAppDeterminationScheduler;
-(void)bluetoothAvailabilityChange:(id)arg1 ;
-(int)systemPreferenceChangedToken;
-(int)uiLockStatusToken;
-(void)setUiLockStatusToken:(int)arg1 ;
-(void)suspendListeningForBluetooth;
-(NSDate *)holdPowerAssertionUntil;
-(void)setHoldPowerAssertionUntil:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)holdPowerAssertionSourceTimer;
-(void)setHoldPowerAssertionSourceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned)holdPowerAssertion;
-(void)setHoldPowerAssertion:(unsigned)arg1 ;
-(void)distributedNotificationHook:(id)arg1 ;
-(void)updateUIDeviceLockedState:(BOOL)arg1 ;
-(void)listenForScreenDimNotifications;
-(int)backlightLevelToken;
-(BOOL)isBacklightOn;
-(void)updateScreenDimStateState:(BOOL)arg1 ;
-(void)resumeListeningForBluetooth;
-(void)setDeviceUILockedPowerAssertion:(UATimedPowerAssertions *)arg1 ;
-(BOOL)weAreAdvertisingAnItem;
-(id)dictionaryForAdvertisableItem:(id)arg1 ;
-(id)bestCornerItem;
-(id)dictionaryForCornerActionItem:(id)arg1 ;
-(BOOL)advertisingSuspended;
-(UAUserActivityInfo *)pinnedUserActivityInfoItem;
-(NSMutableDictionary *)devicesAndActivityTimes;
-(NSSet *)activeDevicesIdentifiers;
-(BOOL)receivingSuspended;
-(id)advertiseableItemForUUID:(id)arg1 ;
-(id)activeAdvertiseableItemsUUIDs;
-(void)userActivityItemsChanged;
-(void)setAdvertisingSuspended:(BOOL)arg1 ;
-(id)bestCornerItem:(id)arg1 ;
-(void)checkIfBestCornerItemChanged:(double)arg1 ;
-(void)notifyBestAppChanged:(id)arg1 atTime:(id)arg2 withClientConnections:(id)arg3 ;
-(void)registerForBestAppChangeNotification:(id)arg1 ;
-(void)unregisterForBestAppChangeNotification:(id)arg1 ;
-(NSMutableSet *)bestAppChangeNotificationsSet;
-(void)preventSystemSleepFor:(double)arg1 ;
-(id)dynamicUserActivitiesString;
-(id)shortStatusString;
-(void)removeAdvertiser:(id)arg1 ;
-(NSSet *)allHandlers;
-(SharingBTLESuggestedItem *)lastReceivedAdvertisementItem;
-(void)setLastReceivedAdvertisementItem:(SharingBTLESuggestedItem *)arg1 ;
-(void)setDevicesAndActivityTimes:(NSMutableDictionary *)arg1 ;
-(void)setBacklightOn:(BOOL)arg1 ;
-(void)setPinnedUserActivityInfoItem:(UAUserActivityInfo *)arg1 ;
-(void)setScreenDimmedPinnedItems:(NSArray *)arg1 ;
-(double)currentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow;
-(void)setCurrentAdvertisementSignalUpdateThreadIfUserActivityDropsBelow:(double)arg1 ;
-(void)setReceivingSuspended:(BOOL)arg1 ;
-(UAPingController *)pingController;
-(NSMutableArray *)advertisementTimes;
-(BOOL)idleActivityNotificationHasBeenSuspended;
-(void)setIdleActivityNotificationHasBeenSuspended:(BOOL)arg1 ;
-(void)setScreenDimmed:(BOOL)arg1 ;
-(void)setBacklightLevelToken:(int)arg1 ;
-(BOOL)userIsActive;
-(BOOL)systemIsIdle;
-(void)setSystemIsIdle:(BOOL)arg1 ;
-(void)setSystemPreferenceChangedToken:(int)arg1 ;
-(BOOL)pingMode;
-(void)setPingMode:(BOOL)arg1 ;
-(void)setAvgPingTime:(double)arg1 ;
-(NSDate *)pingStart;
-(void)setPingStart:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pongSem;
-(void)setPongSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(UAPingResults *)pongs;
-(void)setPongs:(UAPingResults *)arg1 ;
-(NSTimer *)pongTimer;
-(void)setPongTimer:(NSTimer *)arg1 ;
-(BOOL)suspended;
-(id)debuggingInfo;
-(id)init;
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(void)addClient:(id)arg1 ;
-(NSUserDefaults *)userDefaults;
-(NSUUID *)uuid;
-(void)removeClient:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isBatterySaverModeEnabled;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(NSSet *)handlers;
-(NSSet *)notifiers;
-(id)statusString;
-(BOOL)isBluetoothEnabled;
-(void)terminate;
-(NSSet *)clients;
-(BluetoothManager *)bluetoothManager;
-(void)setBluetoothManager:(BluetoothManager *)arg1 ;
-(double)avgPingTime;
@end

