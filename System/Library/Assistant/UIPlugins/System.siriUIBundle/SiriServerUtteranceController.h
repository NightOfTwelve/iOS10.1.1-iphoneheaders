/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIAceObjectViewController.h>

@class SiriServerUtteranceView, NSString;

@interface SiriServerUtteranceController : SiriUIAceObjectViewController {

	SiriServerUtteranceView* _utteranceView;
	NSString* _utterance;
	BOOL _isTip;

}
-(void)_loadFromObject:(id)arg1 ;
-(id)description;
-(void)loadView;
-(void)setAceObject:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(double)_insertionAnimatedZPosition;
-(BOOL)_shouldSkipAnimationsInAlternateSpeeds;
@end
