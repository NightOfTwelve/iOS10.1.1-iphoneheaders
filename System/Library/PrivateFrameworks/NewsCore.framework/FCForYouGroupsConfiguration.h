/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCForYouGroupsConfiguration : NSObject {

	NSString* _configuration;
	unsigned long long _topStoriesPosition;
	unsigned long long _topStoriesPrecedingGroupsCount;
	unsigned long long _trendingStoriesPosition;
	unsigned long long _trendingStoriesPrecedingGroupsCount;
	unsigned long long _coverArticlesPosition;
	unsigned long long _coverArticlesPrecedingGroupsCount;
	unsigned long long _editorialPosition;
	unsigned long long _editorialPrecedingGroupsCount;

}

@property (nonatomic,readonly) unsigned long long topStoriesPosition;                               //@synthesize topStoriesPosition=_topStoriesPosition - In the implementation block
@property (nonatomic,readonly) unsigned long long topStoriesPrecedingGroupsCount;                   //@synthesize topStoriesPrecedingGroupsCount=_topStoriesPrecedingGroupsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long trendingStoriesPosition;                          //@synthesize trendingStoriesPosition=_trendingStoriesPosition - In the implementation block
@property (nonatomic,readonly) unsigned long long trendingStoriesPrecedingGroupsCount;              //@synthesize trendingStoriesPrecedingGroupsCount=_trendingStoriesPrecedingGroupsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long coverArticlesPosition;                            //@synthesize coverArticlesPosition=_coverArticlesPosition - In the implementation block
@property (nonatomic,readonly) unsigned long long coverArticlesPrecedingGroupsCount;                //@synthesize coverArticlesPrecedingGroupsCount=_coverArticlesPrecedingGroupsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long editorialPosition;                                //@synthesize editorialPosition=_editorialPosition - In the implementation block
@property (nonatomic,readonly) unsigned long long editorialPrecedingGroupsCount;                    //@synthesize editorialPrecedingGroupsCount=_editorialPrecedingGroupsCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)trendingStoriesPrecedingGroupsCount;
-(unsigned long long)coverArticlesPrecedingGroupsCount;
-(unsigned long long)editorialPrecedingGroupsCount;
-(unsigned long long)coverArticlesPosition;
-(unsigned long long)editorialPosition;
-(id)initWithJSONConfiguration:(id)arg1 ;
-(unsigned long long)topStoriesPosition;
-(unsigned long long)topStoriesPrecedingGroupsCount;
-(unsigned long long)trendingStoriesPosition;
@end

