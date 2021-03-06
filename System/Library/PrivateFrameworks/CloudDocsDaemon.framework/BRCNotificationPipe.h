/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRItemNotificationSending.h>

@protocol BRItemNotificationReceiving, OS_dispatch_queue, BRCNotificationPipeDelegate;
@class BRNotificationQueue, BRCXPCClient, BRCItemID, BRFileObjectID, NSString, BRCDataOrDocsScopeGatherer, NSMutableDictionary, NSMutableSet, NSSet, BRCNotificationManager, NSObject;

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending> {

	id<BRItemNotificationReceiving> _receiver;
	BRNotificationQueue* _notifs;
	/*^block*/id _boostReply;
	BRCXPCClient* _client;
	BRCItemID* _oldWatchedAncestorItemID;
	BRCItemID* _watchedAncestorItemID;
	BRFileObjectID* _watchedAncestorFileObjectID;
	NSString* _watchedAncestorFilenameToItem;
	BRCDataOrDocsScopeGatherer* _gatherer;
	BOOL _hasUpdatesInFlight;
	BOOL _volumeIsCaseSensitive;
	NSMutableDictionary* _pendingProgressUpdatesByID;
	BOOL _hasProgressUpdatesInFlight;
	unsigned short _watchItemOptions;
	int _watchKind;
	NSString* _watchNamePrefix;
	NSString* _watchForBundleID;
	NSMutableSet* _externalAppLibraries;
	NSSet* _watchedAppLibraries;
	NSSet* _watchedAppLibraryIDs;
	unsigned long long _watchedAppLibrariesFlags;
	BRCNotificationManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	id<BRCNotificationPipeDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) BRCItemID * oldWatchedAncestorItemID;                                   //@synthesize oldWatchedAncestorItemID=_oldWatchedAncestorItemID - In the implementation block
@property (retain) BRCItemID * watchedAncestorItemID;                                      //@synthesize watchedAncestorItemID=_watchedAncestorItemID - In the implementation block
@property (retain) BRFileObjectID * watchedAncestorFileObjectID;                           //@synthesize watchedAncestorFileObjectID=_watchedAncestorFileObjectID - In the implementation block
@property (retain) NSString * watchedAncestorFilenameToItem;                               //@synthesize watchedAncestorFilenameToItem=_watchedAncestorFilenameToItem - In the implementation block
@property (nonatomic,readonly) BRCNotificationManager * manager;                           //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<BRCNotificationPipeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<BRCNotificationPipeDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<BRCNotificationPipeDelegate>)delegate;
-(oneway void)invalidate;
-(void)close;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithXPCReceiver:(id)arg1 client:(id)arg2 manager:(id)arg3 ;
-(id)initWithReceiver:(id)arg1 manager:(id)arg2 ;
-(void)processProgressUpdates:(id)arg1 ;
-(void)addNotification:(id)arg1 asDead:(BOOL)arg2 ;
-(void)processUpdates:(id)arg1 ;
-(void)invalidateIfWatchingAppLibraryIDs:(id)arg1 ;
-(void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg1 ;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
-(id)_initWithManager:(id)arg1 ;
-(BRCItemID *)watchedAncestorItemID;
-(BRFileObjectID *)watchedAncestorFileObjectID;
-(NSString *)watchedAncestorFilenameToItem;
-(void)setWatchedAncestorFilenameToItem:(NSString *)arg1 ;
-(void)setWatchedAncestorFileObjectID:(BRFileObjectID *)arg1 ;
-(void)setOldWatchedAncestorItemID:(BRCItemID *)arg1 ;
-(void)setWatchedAncestorItemID:(BRCItemID *)arg1 ;
-(BRCItemID *)oldWatchedAncestorItemID;
-(void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2 ;
-(int)_isInterestingUpdate:(id)arg1 ;
-(void)_gatherIfNeededAndFlushAsync;
-(void)_flushProgressUpdates;
-(void)_processProgressUpdates:(id)arg1 ;
-(void)__flush;
-(void)watchItemAtURL:(id)arg1 lookup:(id)arg2 options:(unsigned short)arg3 reply:(/*^block*/id)arg4 ;
-(void)_stopWatchingItems;
-(void)watchScopes:(unsigned short)arg1 trustedAppLibraryIDs:(id)arg2 gatheringDone:(/*^block*/id)arg3 ;
-(void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 reply:(/*^block*/id)arg3 ;
-(void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatheringDone:(/*^block*/id)arg3 ;
-(void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 reply:(/*^block*/id)arg3 ;
-(void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatheringDone:(/*^block*/id)arg4 ;
-(void)watchScopes:(unsigned short)arg1 gatheringDone:(/*^block*/id)arg2 ;
-(void)boostPriority:(/*^block*/id)arg1 ;
-(BRCNotificationManager *)manager;
@end

