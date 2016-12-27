/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICManager.h>

@protocol _ICPredictionSource;
@class _ICResultCache;

@interface _ICPredictionManager : NSObject <_ICManager> {

	id<_ICPredictionSource> _myPredictionSource;
	_ICResultCache* _cache;

}

@property (retain) _ICResultCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)predictionManager;
-(id)init;
-(void)reset;
-(_ICResultCache *)cache;
-(void)setCache:(_ICResultCache *)arg1 ;
-(id)getContactsWithAddressBookLimit:(int)arg1 foundLimit:(int)arg2 error:(id*)arg3 ;
-(id)lastCachedResultWithInitialCharacters:(id)arg1 ;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7 ;
-(id)_peoplePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 ;
-(id)_eventPredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 ;
-(id)_connectionsPredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 ;
-(id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 ;
-(id)getPredictionSource;
-(void)predictedItemSelected:(id)arg1 ;
-(id)initWithPredictionSource:(id)arg1 ;
@end
