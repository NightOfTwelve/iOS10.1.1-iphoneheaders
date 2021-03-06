/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUCompletionQueryDataSource.h>

@class MPMediaPredicate;

@interface MCDQueryDataSource : MPUCompletionQueryDataSource {

	MPMediaPredicate* _localPredicate;

}
-(void)dealloc;
-(BOOL)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(id)playbackContextForIndex:(unsigned long long)arg1 ;
-(BOOL)showsIndexBar;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(void)_predicateBehaviorsChangedNotification:(id)arg1 ;
-(BOOL)_updateQueryPredicatesAndOrdering;
-(BOOL)queryIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(id)_queryForNowPlayingComparisonAtIndex:(unsigned long long)arg1 ;
@end

