/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/CompletionProvider.h>
#import <MobileSafari/WBSParsecSearchSessionDelegate.h>

@class NSTimer, NSString, WBSCompletionQuery, NSNumber, UniversalSearchSession;

@interface UniversalSearchCompletionProvider : CompletionProvider <WBSParsecSearchSessionDelegate> {

	NSTimer* _timeoutTimer;
	NSString* _queryString;
	NSString* _currentQueryString;
	WBSCompletionQuery* _currentQuery;
	NSNumber* _searchRenderTimeout;
	NSNumber* _otherRenderTimeout;
	UniversalSearchSession* _parsecSearchSession;

}

@property (nonatomic,retain) NSNumber * searchRenderTimeout;                            //@synthesize searchRenderTimeout=_searchRenderTimeout - In the implementation block
@property (nonatomic,readonly) NSNumber * otherRenderTimeout;                           //@synthesize otherRenderTimeout=_otherRenderTimeout - In the implementation block
@property (nonatomic,retain) UniversalSearchSession * parsecSearchSession;              //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionsForString:(id)arg1 ;
-(id)completionsForQuery:(id)arg1 ;
-(void)setStringToComplete:(id)arg1 ;
-(unsigned long long)maximumCachedCompletionCount;
-(void)_updateTimeoutsFromBag:(id)arg1 ;
-(void)_parsecBagDidLoad:(id)arg1 ;
-(id)currentInputTypeForSession:(id)arg1 ;
-(BOOL)shouldHideParsecResult:(id)arg1 basedOnHideRankGivenTopHit:(id)arg2 indexOfTopHitInFrequentlyVisitedSites:(unsigned long long*)arg3 ;
-(void)setSearchRenderTimeout:(NSNumber *)arg1 ;
-(void)session:(id)arg1 didReceiveResults:(id)arg2 forQuery:(id)arg3 ;
-(UniversalSearchSession *)parsecSearchSession;
-(void)setParsecSearchSession:(UniversalSearchSession *)arg1 ;
-(NSNumber *)searchRenderTimeout;
-(NSNumber *)otherRenderTimeout;
@end

