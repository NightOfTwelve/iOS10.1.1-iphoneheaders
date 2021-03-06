/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPSearchAgent.h>
#import <libobjc.A.dylib/SPDaemonQueryDelegate.h>

@protocol OS_dispatch_semaphore;
@class CPLRUDictionary, NSObject, NSOperationQueue, NSOperation, NSArray, _DECCachedConsumer, NSString;

@interface SPUISearchModel : SPSearchAgent <SPDaemonQueryDelegate> {

	CPLRUDictionary* _cachedResultImages;
	NSObject*<OS_dispatch_semaphore> _cacheResultLock;
	NSOperationQueue* _prefetchOperationQueue;
	NSOperationQueue* _loadOperationQueue;
	NSOperation* _waitOperation;
	NSArray* _deferredResults;
	BOOL _isDeferredQUeryComplete;
	_DECCachedConsumer* _cachedConsumer;
	BOOL _springBoardIsActive;

}

@property (assign) BOOL springBoardIsActive;                        //@synthesize springBoardIsActive=_springBoardIsActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)deactivate;
+(void)activate;
+(id)sharedFullZWKInstance;
+(id)sharedGeneralInstance;
+(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
+(id)sharedPartialZKWInstance;
-(void)dealloc;
-(void)deactivate;
-(void)activate;
-(BOOL)springBoardIsActive;
-(BOOL)isWideScreen;
-(void)setSpringBoardIsActive:(BOOL)arg1 ;
-(id)initForZKWLevel:(int)arg1 ;
-(void)cachedZKWAvailable:(BOOL)arg1 ;
-(void)transferZKWResults:(id)arg1 wasSimilar:(BOOL)arg2 ;
-(void)invalidateCurrentQuery;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(BOOL)itemInLibrary:(id)arg1 ;
-(long long)contentFilters;
-(void)finishRanking:(id)arg1 blendingDuration:(double)arg2 ;
-(id)_customImageForPath:(id)arg1 ;
-(id)createZKWSearchQuery;
@end

