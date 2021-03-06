/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateZoneController.h>

@class NSMutableDictionary, FCMutexLock, NSSet;

@interface FCReadingHistory : FCPrivateZoneController {

	NSMutableDictionary* _itemsByIdentifier;
	NSMutableDictionary* _itemsByArticleID;
	FCMutexLock* _itemsLock;

}

@property (nonatomic,retain) NSMutableDictionary * itemsByIdentifier;              //@synthesize itemsByIdentifier=_itemsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsByArticleID;               //@synthesize itemsByArticleID=_itemsByArticleID - In the implementation block
@property (nonatomic,retain) FCMutexLock * itemsLock;                              //@synthesize itemsLock=_itemsLock - In the implementation block
@property (nonatomic,readonly) NSSet * allReadArticleIDs; 
+(id)desiredKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(void)populateLocalStoreClassRegistry:(id)arg1 ;
+(id)localStoreMigrator;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)clearHistory;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4 ;
-(NSMutableDictionary *)itemsByArticleID;
-(void)_addHistoryItems:(id)arg1 addToStore:(BOOL)arg2 ;
-(FCMutexLock *)itemsLock;
-(void)setItemsByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setItemsByArticleID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)itemsByIdentifier;
-(void)_removeHistoryItemWithItemID:(id)arg1 articleID:(id)arg2 ;
-(id)syncReadingHistoryItemRecords:(id)arg1 didRemoveLastVisitedAt:(out BOOL*)arg2 ;
-(id)_sortedReadingHistoryItemsWithMaxCount:(unsigned long long)arg1 ;
-(id)_readingHistoryItemForArticleID:(id)arg1 ;
-(BOOL)hasArticleBeenRead:(id)arg1 ;
-(void)markArticle:(id)arg1 asArticleRead:(BOOL)arg2 ;
-(void)_modifyHistoryForArticleID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)hasArticleBeenSeen:(id)arg1 ;
-(BOOL)markArticle:(id)arg1 asArticleSeen:(BOOL)arg2 ;
-(unsigned long long)likingStatusForArticleID:(id)arg1 ;
-(BOOL)hasArticleBeenMarkedAsOffensive:(id)arg1 ;
-(void)markArticle:(id)arg1 asOffensive:(BOOL)arg2 ;
-(BOOL)hasArticleBeenConsumed:(id)arg1 ;
-(void)markArticle:(id)arg1 asArticleConsumed:(BOOL)arg2 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
-(id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)arg1 ;
-(id)allSortedArticleIDsInReadingHistory;
-(NSSet *)allReadArticleIDs;
-(id)lastVisitedDateForArticleID:(id)arg1 ;
-(BOOL)toggleArticleHasBeenRead:(id)arg1 ;
-(void)updateArticle:(id)arg1 withVisitedDate:(id)arg2 ;
-(BOOL)hasArticleBeenVisited:(id)arg1 ;
-(BOOL)toggleArticleHasBeenSeen:(id)arg1 ;
-(BOOL)markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2 ;
-(BOOL)toggleArticleHasBeenMarkedAsOffensive:(id)arg1 ;
-(BOOL)toggleArticleHasBeenConsumed:(id)arg1 ;
-(void)addHeadlineToHistory:(id)arg1 ;
-(void)removeArticleFromHistory:(id)arg1 ;
-(void)setItemsLock:(FCMutexLock *)arg1 ;
@end

