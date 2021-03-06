/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile;

@interface HDActivitySummaryBuilder : NSObject {

	HDProfile* _profile;
	BOOL _shouldIncludePrivateProperties;

}

@property (assign,nonatomic) BOOL shouldIncludePrivateProperties;              //@synthesize shouldIncludePrivateProperties=_shouldIncludePrivateProperties - In the implementation block
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(void)activitySummariesWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)shouldIncludePrivateProperties;
-(void)setShouldIncludePrivateProperties:(BOOL)arg1 ;
@end

