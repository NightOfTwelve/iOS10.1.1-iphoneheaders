/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationSource.h>

@class NSNumber, NSISLinearExpression, NSISEngine, NSMutableArray;

@interface _NSISLinearExpressionObservable : NSObservationSource {

	NSNumber* _lastValue;
	NSISLinearExpression* _expression;
	NSISEngine* _associatedEngine;
	NSMutableArray* _variableObservations;
	id _changeTransactionObservation;
	BOOL _valueIsDirtied;

}
+(id)observableForExpression:(id)arg1 inEngine:(id)arg2 ;
-(id)initWithExpression:(id)arg1 inEngine:(id)arg2 ;
-(void)receiveObservedValue:(id)arg1 fromVariable:(id)arg2 ;
-(void)emitValueIfNeeded;
-(void)dealloc;
-(id)addObserver:(id)arg1 ;
@end
