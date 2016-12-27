/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UICubicTimingParameters, UISpringTimingParameters;


@protocol UITimingCurveProvider <NSCoding,NSCopying>
@property (nonatomic,readonly) long long timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
@required
-(long long)timingCurveType;
-(UICubicTimingParameters *)cubicTimingParameters;
-(UISpringTimingParameters *)springTimingParameters;

@end
