/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCFeedPersonalizing, OS_dispatch_queue;
@class FCCloudContext, NSMapTable, FCMutexLock, FCAsyncSerialQueue, FCKeyValueStore, NSObject;

@interface FCFeedManager : NSObject {

	id<FCFeedPersonalizing> _feedPersonalizer;
	FCCloudContext* _context;
	NSMapTable* _feedDescriptorsByID;
	FCMutexLock* _feedDescriptorsLock;
	FCAsyncSerialQueue* _feedUpdateQueue;
	FCKeyValueStore* _store;
	NSObject*<OS_dispatch_queue> _storeQueue;

}

@property (nonatomic,retain) FCCloudContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSMapTable * feedDescriptorsByID;                      //@synthesize feedDescriptorsByID=_feedDescriptorsByID - In the implementation block
@property (nonatomic,retain) FCMutexLock * feedDescriptorsLock;                     //@synthesize feedDescriptorsLock=_feedDescriptorsLock - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * feedUpdateQueue;                  //@synthesize feedUpdateQueue=_feedUpdateQueue - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * store;                               //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storeQueue;               //@synthesize storeQueue=_storeQueue - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
+(id)_identifierForFeedName:(id)arg1 ;
+(id)feedDescriptorNameForForYou;
+(id)feedDescriptorNameForReadingHistory;
+(id)feedDescriptorNameForReadingList;
-(id)init;
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(id)feedDescriptorForTag:(id)arg1 ;
-(id)initWithCloudContext:(id)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(void)_checkFilterForPreferredLanguages;
-(id)feedDescriptorForForYou;
-(FCAsyncSerialQueue *)feedUpdateQueue;
-(NSObject*<OS_dispatch_queue>)storeQueue;
-(void)backgroundFetchFeedsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prefetchForYouWithHighPriority:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMapTable *)feedDescriptorsByID;
-(void)setFeedDescriptorsByID:(NSMapTable *)arg1 ;
-(FCMutexLock *)feedDescriptorsLock;
-(void)setFeedDescriptorsLock:(FCMutexLock *)arg1 ;
-(void)setFeedUpdateQueue:(FCAsyncSerialQueue *)arg1 ;
-(void)setStore:(FCKeyValueStore *)arg1 ;
-(void)setStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)feedDescriptorWithIdentifier:(id)arg1 ;
-(id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(BOOL)arg2 tag:(id)arg3 ;
-(id)feedDescriptorForReadingHistory;
-(id)feedDescriptorForReadingList;
-(id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1 ;
-(id)feedDescriptorForArticleIDs:(id)arg1 ;
-(FCKeyValueStore *)store;
@end
