/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, NSSecureCodingNSCopying;
@class PARSession, NSOrderedSet, NSDictionary, NSObject;

@interface FTTrendingByParsecHeadlinesOperation : FCOperation {

	PARSession* _session;
	id<FCContentContext> _contentContext;
	double _maximumCachedAge;
	NSOrderedSet* _resultArticleIDs;
	NSDictionary* _resultHeadlinesByArticleID;
	NSDictionary* _resultHeadlineEventTrackingElementsByArticleID;
	NSObject*<NSSecureCoding>*<NSCopying> _resultSectionEventTrackingElement;
	/*^block*/id _headlinesCompletionHandler;

}

@property (nonatomic,copy) NSOrderedSet * resultArticleIDs;                                                      //@synthesize resultArticleIDs=_resultArticleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * resultHeadlinesByArticleID;                                            //@synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID - In the implementation block
@property (nonatomic,copy) NSDictionary * resultHeadlineEventTrackingElementsByArticleID;                        //@synthesize resultHeadlineEventTrackingElementsByArticleID=_resultHeadlineEventTrackingElementsByArticleID - In the implementation block
@property (nonatomic,copy) NSObject*<NSSecureCoding>*<NSCopying> resultSectionEventTrackingElement;              //@synthesize resultSectionEventTrackingElement=_resultSectionEventTrackingElement - In the implementation block
@property (nonatomic,retain) PARSession * session;                                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                                                //@synthesize contentContext=_contentContext - In the implementation block
@property (assign,nonatomic) double maximumCachedAge;                                                            //@synthesize maximumCachedAge=_maximumCachedAge - In the implementation block
@property (nonatomic,copy) id headlinesCompletionHandler;                                                        //@synthesize headlinesCompletionHandler=_headlinesCompletionHandler - In the implementation block
-(NSObject*<NSSecureCoding>*<NSCopying>)resultSectionEventTrackingElement;
-(void)setResultSectionEventTrackingElement:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(void)_finishBuildingHeadlinesFromParsecResults:(id)arg1 ;
-(void)setResultArticleIDs:(NSOrderedSet *)arg1 ;
-(void)setResultHeadlinesByArticleID:(NSDictionary *)arg1 ;
-(void)setResultHeadlineEventTrackingElementsByArticleID:(NSDictionary *)arg1 ;
-(NSOrderedSet *)resultArticleIDs;
-(NSDictionary *)resultHeadlinesByArticleID;
-(NSDictionary *)resultHeadlineEventTrackingElementsByArticleID;
-(id)init;
-(void)setSession:(PARSession *)arg1 ;
-(PARSession *)session;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setMaximumCachedAge:(double)arg1 ;
-(double)maximumCachedAge;
-(void)setHeadlinesCompletionHandler:(id)arg1 ;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(id)headlinesCompletionHandler;
@end

