/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSyncedClient;
@class NSUbiquitousKeyValueStore, NSMutableDictionary, NSArray, NSMutableArray, NSDictionary;

@interface MapsSyncManager : NSObject {

	BOOL _running;
	NSUbiquitousKeyValueStore* _kvStore;
	NSMutableDictionary* _items;
	BOOL _initialSetup;
	BOOL _updatingFromKVS;
	NSMutableDictionary* _debugDictionary;
	BOOL _performingSingleOperationBatch;
	id<MapsSyncedClient> _client;
	/*^block*/id _editBatchWillBeginHandler;
	/*^block*/id _editBatchDidEndHandler;

}

@property (nonatomic,readonly) NSArray * clientSyncedItems; 
@property (nonatomic,readonly) NSMutableArray * mutableClientSyncedItems; 
@property (readonly) BOOL invertedOrdering; 
@property (nonatomic,readonly) NSDictionary * items;                                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * debugDictionary;                                   //@synthesize debugDictionary=_debugDictionary - In the implementation block
@property (nonatomic,readonly) id<MapsSyncedClient> client;                                           //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSArray * orderedItems; 
@property (getter=isApplyingEditBatch,nonatomic,readonly) BOOL applyingEditBatch; 
@property (nonatomic,copy) id editBatchWillBeginHandler;                                              //@synthesize editBatchWillBeginHandler=_editBatchWillBeginHandler - In the implementation block
@property (nonatomic,copy) id editBatchDidEndHandler;                                                 //@synthesize editBatchDidEndHandler=_editBatchDidEndHandler - In the implementation block
@property (nonatomic,readonly) NSDictionary * underlyingStorageDictionaryRepresentation; 
+(id)removeDupes:(id)arg1 ;
+(id)_alreadySyncedKeyForSyncIdentifier:(id)arg1 ;
+(void)mergeOnNextSyncForStorageWithSyncIdentifier:(id)arg1 ;
+(id)syncIdentifier;
-(void)_setupStore;
-(id)_itemAtIndex:(unsigned long long)arg1 ;
-(void)_clientInsertItems:(id)arg1 atIndexes:(id)arg2 ;
-(id)alreadySyncedKey;
-(void)_synchronizeItemForKey:(id)arg1 ;
-(id)editBatchWillBeginHandler;
-(BOOL)isApplyingEditBatch;
-(BOOL)invertedOrdering;
-(id)_validClientIndexSetForIndexes:(id)arg1 ;
-(BOOL)_isConcernedByCloudKey:(id)arg1 ;
-(void)_clientDidModifyItem:(id)arg1 ;
-(void)_clientRemoveItemsAtIndexes:(id)arg1 ;
-(void)_clientAddObserversAtIndexes:(id)arg1 ;
-(void)_clientDidAddItems:(id)arg1 atIndexes:(id)arg2 ;
-(BOOL)useClientPositionForItem:(id)arg1 ;
-(id)_itemIdentifierFromCloudKey:(id)arg1 ;
-(void)_kvsDidRemoveItems:(id)arg1 ;
-(id)_kvsDidAddItems:(id)arg1 ;
-(void)kvstoreDidChange:(id)arg1 ;
-(id)_kvsDictionaryRepresentation;
-(id)editBatchDidEndHandler;
-(id)_itemFromClientItem:(id)arg1 ;
-(NSMutableArray *)mutableClientSyncedItems;
-(id)_cloudKeyForItemIdentifier:(id)arg1 ;
-(void)_clientUpdateItemsAtIndexes:(id)arg1 ;
-(NSArray *)clientSyncedItems;
-(id)_kvsDictionaryForKey:(id)arg1 ;
-(BOOL)shouldSyncItemAtIndex:(unsigned long long)arg1 ;
-(void)didModifySyncedItem:(id)arg1 ;
-(NSArray *)orderedItems;
-(id)debugKeyForSyncedItem:(id)arg1 ;
-(void)_clientDidRemoveItemsAtIndexes:(id)arg1 identifiers:(id)arg2 ;
-(void)_clientRemoveObserversAtIndexes:(id)arg1 ;
-(void)_syncFromKVSAndMerge:(BOOL)arg1 changedKeys:(id)arg2 ;
-(void)_checkAndDistributeItemsAroundIndex:(unsigned long long)arg1 ;
-(BOOL)_kvsDidModifyItem:(id)arg1 withCloudData:(id)arg2 ;
-(void)_repositionAllItemsWithBackingStorage:(id)arg1 orderedKeys:(id)arg2 ;
-(void)_performPossiblyBatchedOperationBlock:(/*^block*/id)arg1 ;
-(void)resetForPushingNewClientState:(BOOL)arg1 ;
-(void)_repositionAllItemsIfNeeded;
-(id)initWithClient:(id)arg1 debugDictionary:(id)arg2 ;
-(void)didRemoveSyncedItemAtIndex:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)setEditBatchDidEndHandler:(id)arg1 ;
-(void)didAddSyncedItemAtIndexes:(id)arg1 ;
-(void)checkConsistency;
-(NSDictionary *)underlyingStorageDictionaryRepresentation;
-(void)setEditBatchWillBeginHandler:(id)arg1 ;
-(void)didRemoveAllSyncedItems;
-(void)didRemoveSyncedItemsAtIndexes:(id)arg1 identifiers:(id)arg2 ;
-(void)mergeOnNextSync;
-(void)didAddSyncedItemAtIndex:(unsigned long long)arg1 ;
-(void)simulateKVSNotification:(id)arg1 ;
-(void)reset;
-(NSDictionary *)items;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<MapsSyncedClient>)client;
-(NSMutableDictionary *)debugDictionary;
-(void)setDebugDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithClient:(id)arg1 ;
@end

