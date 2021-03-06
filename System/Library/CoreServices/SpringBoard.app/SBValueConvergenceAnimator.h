/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBValueConvergenceAnimator : NSObject {

	double _previousForce;
	double _diff;
	BOOL _finishesOnValueConvergence;
	double _currentValue;
	double _targetValue;
	/*^block*/id _convergenceFunction;
	/*^block*/id _applier;
	/*^block*/id _completion;
	long long _frameInterval;
	double _startTime;
	double _lastFireTime;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastFireTime;                          //@synthesize lastFireTime=_lastFireTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (assign,nonatomic) double currentValue;                          //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) double targetValue;                           //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) BOOL finishesOnValueConvergence;              //@synthesize finishesOnValueConvergence=_finishesOnValueConvergence - In the implementation block
@property (nonatomic,copy) id convergenceFunction;                         //@synthesize convergenceFunction=_convergenceFunction - In the implementation block
@property (nonatomic,copy) id applier;                                     //@synthesize applier=_applier - In the implementation block
@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) long long frameInterval;                      //@synthesize frameInterval=_frameInterval - In the implementation block
-(void)setConvergenceFunctionWithConstant:(long long)arg1 ;
-(void)setFinishesOnValueConvergence:(BOOL)arg1 ;
-(void)_invokeApplier;
-(void)_invokeCompletionWithFinished:(BOOL)arg1 ;
-(void)_convergeValue;
-(BOOL)finishesOnValueConvergence;
-(id)convergenceFunction;
-(void)setConvergenceFunction:(id)arg1 ;
-(double)lastFireTime;
-(void)setLastFireTime:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(void)_reset;
-(void)stop;
-(double)targetValue;
-(void)setTargetValue:(double)arg1 ;
-(void)setFrameInterval:(long long)arg1 ;
-(BOOL)isRunning;
-(void)start;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(double)startTime;
-(double)elapsedTime;
-(double)currentValue;
-(void)setCurrentValue:(double)arg1 ;
-(long long)frameInterval;
-(void)setApplier:(id)arg1 ;
-(id)applier;
@end

