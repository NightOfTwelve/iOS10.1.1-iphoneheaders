/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSISRowBody <NSObject>
@required
-(unsigned long long)variableCount;
-(void)enumerateVariables:(/*^block*/id)arg1;
-(void)removeVariable:(id)arg1;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(/*^block*/id)arg4 processVariableDroppedFromReceiver:(/*^block*/id)arg5;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;

@end
