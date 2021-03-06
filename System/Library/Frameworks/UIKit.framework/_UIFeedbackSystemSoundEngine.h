/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFeedbackEngine.h>
#import <UIKit/_UIFeedbackPlayer.h>

@class NSCountedSet;

@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer> {

	/*^block*/id _invalidationBlock;
	NSCountedSet* _warmSSIDs;
	NSCountedSet* _suspendedSSIDs;

}

@property (nonatomic,readonly) NSCountedSet * suspendedSSIDs;              //@synthesize suspendedSSIDs=_suspendedSSIDs - In the implementation block
@property (nonatomic,readonly) NSCountedSet * warmSSIDs;                   //@synthesize warmSSIDs=_warmSSIDs - In the implementation block
@property (nonatomic,copy) id invalidationBlock;                           //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
+(id)sharedEngine;
+(BOOL)_supportsPlayingFeedback:(id)arg1 ;
-(id)_stats_key;
-(id)invalidationBlock;
-(void)_updateSuspension;
-(void)setInvalidationBlock:(id)arg1 ;
-(void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 ;
-(void)_stopFeedback:(id)arg1 ;
-(BOOL)_prepareSystemSoundID:(unsigned)arg1 forBeingActive:(BOOL)arg2 ;
-(void)_performForEachSSIDsInFeedbacks:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_playFeedbackNow:(id)arg1 withOptions:(id)arg2 ;
-(void)_startPreparingToUseFeedbacks:(id)arg1 ;
-(void)_stopPreparingToUseFeedbacks:(id)arg1 ;
-(NSCountedSet *)warmSSIDs;
-(NSCountedSet *)suspendedSSIDs;
@end

