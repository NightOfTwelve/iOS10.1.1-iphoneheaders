/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPredicate;

@interface _DRTopicEnumerationQuery : _DKQuery <_DKExecutableQuery> {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	NSPredicate* _predicate;
	unsigned long long _limit;
	/*^block*/id _topicEnumerator;

}

@property (retain) NSPredicate * predicate;               //@synthesize predicate=_predicate - In the implementation block
@property (assign) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (copy) id topicEnumerator;                      //@synthesize topicEnumerator=_topicEnumerator - In the implementation block
+(id)topicEnumerationQueryWithPredicate:(id)arg1 topicEnumerator:(/*^block*/id)arg2 ;
+(id)enumerationSumExpression;
+(id)enumerationCountExpresion;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(id)initWithPredicate:(id)arg1 topicEnumerator:(/*^block*/id)arg2 ;
-(void)setTopicEnumerator:(id)arg1 ;
-(id)topicEnumerator;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
@end

