/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSSceneTransitionContext;

@interface FBUISceneEvent : NSObject {

	FBSSceneTransitionContext* _transitionContext;
	/*^block*/id _sender;
	BOOL _sent;

}

@property (nonatomic,retain,readonly) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
-(void)dealloc;
-(FBSSceneTransitionContext *)transitionContext;
-(void)send;
-(void)sendWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithTransitionContext:(id)arg1 sender:(/*^block*/id)arg2 ;
@end

